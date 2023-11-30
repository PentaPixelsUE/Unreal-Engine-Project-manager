#include "pluginsmanager.h"
#include "mainwindow.h"
#include <QDir>
#include <QFileInfo>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>



PluginManager::PluginManager() : projectPluginsModel(new QStandardItemModel),

                                                                 enabledPluginsModel(new QStandardItemModel),

                                                                  disabledPluginsModel(new QStandardItemModel),

                                                                   disabledPluginsProxyModel(nullptr),

                                                                enabledPluginsProxyModel(nullptr) ,

                                                                projectPluginsProxyModel(nullptr)

                                                                 {
    setupProxyModels();
    AllListsSelectionModel = new QItemSelectionModel;
}

PluginManager::~PluginManager() {

    delete enabledPluginsModel;
    delete enabledPluginsProxyModel;

    delete disabledPluginsModel;
    delete disabledPluginsProxyModel;

    delete projectPluginsProxyModel;
    delete projectPluginsModel;

}

void PluginManager::setMainWindowInstance(MainWindow* mainWindow) {
    mainWindowInstance = mainWindow;
}

void PluginManager::Fill_Plugin_lists_recursive(QStandardItem* parent, const QString& directory, QJsonArray& pluginsArray) {
    QDir dir(directory);
    QStringList nameFilters;
    nameFilters << "*.uplugin";

    QStringList upluginFiles = dir.entryList(nameFilters, QDir::Files);

    for (const QString& upluginFile : upluginFiles) {
        QString filePath = directory + QDir::separator() + upluginFile;

        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            bool isEnabledByDefault = false;
            QString pluginName; // Store the plugin name
            while (!in.atEnd()) {
                QString line = in.readLine();
                if (line.contains("\"EnabledByDefault\": true")) {
                    isEnabledByDefault = true;
                } else if (line.contains("\"EnabledByDefault\": false")) {
                    isEnabledByDefault = false;
                } else if (line.contains("\"Name\":")) {
                    // Extract the plugin name
                    pluginName = line.split(":")[1].trimmed().remove(QRegExp("[\",]"));
                }
            }
            file.close();

            // Check if the item is already present in the list to avoid duplicates
            QStandardItemModel* pluginsModel = isEnabledByDefault ?
                                                   PluginManager::getInstance().getEnabledPluginsModel() :
                                                   PluginManager::getInstance().getDisabledPluginsModel();

            bool itemFound = false;
            for (int row = 0; row < pluginsModel->rowCount(); ++row) {
                QStandardItem* item = pluginsModel->item(row);
                if (item && item->text() == pluginName) { // Check by plugin name
                    itemFound = true;
                    break;
                }
            }

            // Add to the appropriate list only if not found
            if (!itemFound) {
                QStandardItem* item = new QStandardItem(pluginName);
                if (isEnabledByDefault) {
                    PluginManager::getInstance().getEnabledPluginsModel()->appendRow(item);
                } else {
                    PluginManager::getInstance().getDisabledPluginsModel()->appendRow(item);
                }

                // Add plugin information to the JSON array
                QJsonObject pluginObject;
                pluginObject["PluginName"] = pluginName;
                pluginObject["PluginPath"] = filePath;
                pluginObject["IsEnabled"] = isEnabledByDefault;
                pluginsArray.append(pluginObject);
            }
        }
    }

    // Recursively process subdirectories
    QStringList subDirs = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    for (const QString& subDir : subDirs) {
        QString subDirPath = dir.filePath(subDir); // Use filePath to get the full path
        // Recursively fill the subdirectory
        Fill_Plugin_lists_recursive(parent, subDirPath, pluginsArray);
    }
}



void PluginManager::FillProjectPluginsList(const QString& uprojectPath, const QString& projectName, QStandardItem* parent) {

    qDebug() << "Trying to open UProject file: " << uprojectPath;

    QString uprojectFilePath = uprojectPath + QDir::separator() + projectName + ".uproject";
    QFile uprojectFile(uprojectFilePath);

    if (!uprojectFile.exists()) {
        qDebug() << "UProject file not found.";
        return;
    }

    if (!uprojectFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open UProject file. Error: " << uprojectFile.errorString();
        return;
    }

    QTextStream in(&uprojectFile);
    QString uprojectContent = in.readAll();
    uprojectFile.close();

    qDebug() << "UProject content read successfully.";

    // Clear the existing model
    parent->removeRows(0, parent->rowCount());

    // Look for the "Plugins" key
    int pluginsIndex = uprojectContent.indexOf("\"Plugins\":");
    if (pluginsIndex == -1) {
        qDebug() << "No 'Plugins' entry found in UProject file.";
        return;
    }

    QStringList lines = uprojectContent.mid(pluginsIndex).split('\n');

    // Skip the first line
    bool skipFirstPlugin = true;

    for (const QString& line : lines) {
        if (skipFirstPlugin) {
            // Skip the first plugin
            skipFirstPlugin = false;
            continue;
        }

        if (line.contains("Name")) {
            QString pluginName = line.split(":")[1].trimmed().remove(QRegExp("[\",]"));
            // Add the plugin name to the list
            QStandardItem* pluginItem = new QStandardItem(pluginName);
            parent->appendRow(pluginItem);
        }
    }
}

QModelIndex PluginManager::FindModelIndex(QStandardItemModel* model, const QString& pluginName) const {
    for (int row = 0; row < model->rowCount(); ++row) {
        QStandardItem* item = model->item(row);
        if (item && item->text() == pluginName) {
            return model->index(row, 0);
        }
    }

    return QModelIndex();  // Return an invalid index if not found
}

void PluginManager::setupProxyModels() {
    // Clear existing models if they exist
    delete enabledPluginsModel;
    delete disabledPluginsModel;
    delete projectPluginsModel;

    // Initialize enabled plugins model
    enabledPluginsModel = new QStandardItemModel;

    // Initialize disabled plugins model
    disabledPluginsModel = new QStandardItemModel;

    // Initialize Project plugins Model
    projectPluginsModel = new QStandardItemModel;

    // Clear existing proxy models if they exist
    delete enabledPluginsProxyModel;
    delete disabledPluginsProxyModel;
    delete projectPluginsProxyModel;

    // Initialize enabled plugins proxy model
    enabledPluginsProxyModel = new QSortFilterProxyModel;
    enabledPluginsProxyModel->setSourceModel(enabledPluginsModel);

    // Initialize disabled plugins proxy model
    disabledPluginsProxyModel = new QSortFilterProxyModel;
    disabledPluginsProxyModel->setSourceModel(disabledPluginsModel);

    // Initialize project plugins proxy model
    projectPluginsProxyModel = new QSortFilterProxyModel;
    projectPluginsProxyModel->setSourceModel(projectPluginsModel);
}
void PluginManager::setupListView(QListView* listView, QSortFilterProxyModel* proxyModel) {
    // Disconnect previous connections
    QObject::disconnect(listView->selectionModel(), &QItemSelectionModel::selectionChanged, nullptr, nullptr);

    // Set the selection mode to SingleSelection
    listView->setSelectionMode(QAbstractItemView::SingleSelection);

    // Set the global selection model on the list view
    listView->setSelectionModel(AllListsSelectionModel);

    // Connect the selectionChanged signal of the view to a slot or function that handles the selection change
    QObject::connect(listView->selectionModel(), &QItemSelectionModel::selectionChanged, [listView, proxyModel, this]() {
        // Handle the selection change here
        QModelIndexList selectedIndexes = listView->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty()) {
            qDebug() << "No item selected in " << listView->objectName();
        } else {
            QModelIndex sourceIndex = proxyModel->mapToSource(selectedIndexes.first());
//            qDebug() << "Selected item in " << listView->objectName() << ": " << sourceIndex.data().toString();

//            qDebug() << "Object name: " << listView->objectName();
            enableFlag = (listView->objectName().trimmed() == "Enabled_Plugins_List");
            //qDebug() << "Enable Set to " << (enableFlag ? "TRUE" : "FALSE");
        }
    });
}


bool PluginManager::set_list_flag() const {
    return enableFlag;
}



void PluginManager::EnablePluginForProject(const QString& projectName, const QString& pluginName) {


    QString uprojectPath = getUProjectPath()+ QDir::separator() + projectName + ".uproject";

    qDebug() <<getUProjectPath()<<" DIRECTORY .......";
    if (uprojectPath.isEmpty()) {
        qDebug() << "Error: UProject path is empty for project" << projectName;
        return;
    }

    QFile uprojectFile(uprojectPath);

    if (!uprojectFile.exists()) {
        qDebug() << "Error: UProject file not found for project" << projectName;
        return;
    }

    if (!uprojectFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Error: Failed to open UProject file for writing. Error: " << uprojectFile.errorString();
        return;
    }

    QTextStream in(&uprojectFile);
    QString uprojectContent = in.readAll();

    uprojectFile.seek(0);

    // Check if the plugin is already enabled
    if (uprojectContent.contains("\"Name\": \"" + pluginName + "\",\n\"Enabled\": true")) {
        qDebug() << "Plugin" << pluginName << "is already enabled for project" << projectName;
        uprojectFile.close();
        return;
    }

    // Find the position to insert the new plugin entry
    int pluginsIndex = uprojectContent.indexOf("\"Plugins\":");
    if (pluginsIndex == -1) {
        qDebug() << "Error: 'Plugins' entry not found in UProject file for project" << projectName;
        uprojectFile.close();
        return;
    }

    int insertIndex = uprojectContent.indexOf(']', pluginsIndex);

    // Check if there are existing plugins
    if (uprojectContent.indexOf("\"Plugins\": []") == -1) {
        // Add a comma if not the first plugin in the list
        uprojectFile.seek(insertIndex - 1);
        uprojectFile.write(",\n");
    }

    // Insert the new plugin entry
    QString newPluginEntry = QString("    {\n        \"Name\": \"%1\",\n        \"Enabled\": true\n    }\n	]\n}").arg(pluginName);
    uprojectFile.write(newPluginEntry.toUtf8());

    uprojectFile.close();

    qDebug() << "Plugin" << pluginName << "enabled for project" << projectName;
}

void PluginManager::DisablePluginForProject(const QString& projectName, const QString& pluginName) {
    QString uprojectPath = getUProjectPath() + QDir::separator() + projectName + ".uproject";

    if (uprojectPath.isEmpty()) {
        qDebug() << "Error: UProject path is empty for project" << projectName;
        return;
    }

    QFile uprojectFile(uprojectPath);

    if (!uprojectFile.exists()) {
        qDebug() << "Error: UProject file not found for project" << projectName;
        return;
    }

    if (!uprojectFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Error: Failed to open UProject file for writing. Error: " << uprojectFile.errorString();
        return;
    }

    // Read the content from the .uproject file
    QTextStream in(&uprojectFile);
    QString uprojectContent = in.readAll();

    uprojectFile.close();  // Close the file before making changes

    // Create a QJsonDocument from the JSON-like content
    QJsonDocument jsonDoc = QJsonDocument::fromJson(uprojectContent.toUtf8());
    QJsonObject jsonObj = jsonDoc.object();

    // Modify jsonObj to remove the plugin entry
    QJsonArray pluginsArray = jsonObj["Plugins"].toArray();

    for (int i = 0; i < pluginsArray.size(); ++i) {
        QJsonObject pluginObject = pluginsArray[i].toObject();
        if (pluginObject["Name"].toString() == pluginName) {
            pluginsArray.removeAt(i);
            break;
        }
    }

    jsonObj["Plugins"] = pluginsArray;

    // Convert the modified QJsonObject back to a JSON-like string
    uprojectContent = QString::fromUtf8(QJsonDocument(jsonObj).toJson());

    // Write the changes back to the .uproject file
    if (uprojectFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&uprojectFile);
        out << uprojectContent;
        uprojectFile.close();
        qDebug() << "Plugin" << pluginName << "deleted for project" << projectName;
    } else {
        qDebug() << "Error: Failed to write changes to UProject file. Error: " << uprojectFile.errorString();
    }
}

void PluginManager::DisableEnablePluginsGlobal(const QString& projectName, const QString& pluginName, bool isDisabled) {
    if (mainWindowInstance) {

        qDebug() << "MainWindow instance is set in PluginManager.";

        QString jsonFilePath = QDir::currentPath() + QDir::separator() + "plugins.json";

        // Read the JSON file
        QFile jsonFile(jsonFilePath);
        if (!jsonFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << "Failed to open JSON file for reading:" << jsonFilePath;
            return;
        }

        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonFile.readAll());
        QJsonArray jsonArray = jsonDocument.array();
        jsonFile.close();

        // Find the corresponding entry for the plugin name
        for (QJsonValueRef pluginRef : jsonArray) {
            QJsonObject pluginObject = pluginRef.toObject();
            if (pluginObject["PluginName"].toString() == pluginName) {
                // Update the "IsEnabled" property
                pluginObject["IsEnabled"] = isDisabled;

                // Update the member variable in MainWindow
                mainWindowInstance->setJsonArray(jsonArray);

                // Write the modified JSON back to the file
                mainWindowInstance->writeJsonFile(mainWindowInstance->getJsonArray(), jsonFilePath);

                qDebug() << "Plugin" << pluginName << "is now" << (isDisabled ? "disabled" : "enabled");
                return;  // Exit the loop once the plugin is found and updated
            }
        }

        qDebug() << "Plugin" << pluginName << "not found in JSON array.";
    } else {
        qDebug() << "MainWindow instance is not set in PluginManager.";
    }
}


