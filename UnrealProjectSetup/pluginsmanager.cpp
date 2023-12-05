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
                } else if (line.contains("\"FriendlyName\":")) {
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

                // Extract the last part of the plugin path without the extension
                QFileInfo fileInfo(filePath);
                QString inEngineName = fileInfo.baseName();  // baseName returns the file name without the extension
                pluginObject["InEngineName"] = inEngineName;

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


    QString uprojectFilePath = uprojectPath + QDir::separator() + projectName + ".uproject";
    QFile uprojectFile(uprojectFilePath);
    qDebug() << "Trying to open UProject file: " << uprojectPath;
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
           qDebug() << "Selected item in " << listView->objectName() << ": " << sourceIndex.data().toString();

//            qDebug() << "Object name: " << listView->objectName();
            enableFlag = (listView->objectName().trimmed() == "Enabled_Plugins_List");
            //qDebug() << "Enable Set to " << (enableFlag ? "TRUE" : "FALSE");
        }
    });
}


bool PluginManager::set_list_flag() const {
    return enableFlag;
}


/********************************************************************************************************************************/

QMap<QString, QString> PluginManager::getPluginNameMapping() {
    QMap<QString, QString> pluginNameMapping;
    QString pluginsFilepath =QDir::currentPath() + QDir::separator() + "plugins.json";
    QFile pluginsFile(pluginsFilepath);

    if (!pluginsFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error: Failed to open plugins.json for reading. Error: " << pluginsFile.errorString();
        return pluginNameMapping;
    }

    // Read the content from plugins.json
    QTextStream pluginsIn(&pluginsFile);
    QString pluginsContent = pluginsIn.readAll();

    // Close the file after reading
    pluginsFile.close();

    // Create a QJsonDocument from the JSON-like content
    QJsonDocument pluginsJsonDoc = QJsonDocument::fromJson(pluginsContent.toUtf8());
    QJsonArray pluginsJsonArray = pluginsJsonDoc.array();

    // Populate the mapping
    for (const auto& plugin : pluginsJsonArray) {
        QJsonObject pluginObject = plugin.toObject();
        QString pluginName = pluginObject["PluginName"].toString();
        QString inEngineName = pluginObject["InEngineName"].toString();
        pluginNameMapping[pluginName] = inEngineName;
    }

    return pluginNameMapping;
}
void PluginManager::EnablePluginForProject(const QString& projectName, const QString& pluginName) {
    // Get the map of plugin names to in-engine names
    QMap<QString, QString> pluginNameMapping = getPluginNameMapping();

    // Check if the plugin is already enabled
    bool pluginAlreadyEnabled = false;
    QString inEngineName = pluginNameMapping.value(pluginName, pluginName);
    QString uprojectFilePath = getUProjectPath() + QDir::separator() + projectName + ".uproject";

    if (uprojectFilePath.isEmpty()) {
        qDebug() << "Error: UProject path is empty for project" << projectName;
        return;
    }

    QFile uprojectFile(uprojectFilePath);

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

    // Close the file before making changes
    uprojectFile.close();

    // Create a QJsonDocument from the JSON-like content
    QJsonDocument jsonDoc = QJsonDocument::fromJson(uprojectContent.toUtf8());
    QJsonObject jsonObj = jsonDoc.object();

    // Ensure that the "Plugins" array exists
    if (!jsonObj.contains("Plugins")) {
        jsonObj["Plugins"] = QJsonArray();
    }

    // Get the "Plugins" array
    QJsonArray pluginsArray = jsonObj["Plugins"].toArray();

    // Check if the plugin is already enabled
    for (const auto& plugin : pluginsArray) {
        QJsonObject pluginObject = plugin.toObject();
        if (pluginObject["Name"].toString() == pluginName) {
            qDebug() << "Plugin" << pluginName << " is already enabled for project" << projectName;
            return;
        }
    }

    // Add the new plugin entry
    QJsonObject newPlugin;
    newPlugin["Name"] = inEngineName;  // Use inEngineName instead of pluginName
    newPlugin["Enabled"] = true;

    // Find the corresponding entry in plugins.json to get the InEngineName
    for (const auto& pluginEntry : pluginsArray) {
        QJsonObject pluginObject = pluginEntry.toObject();
        if (pluginObject["PluginName"].toString() == pluginName) {
            newPlugin["Name"] = pluginObject["InEngineName"].toString();
            break;
        }
    }

    pluginsArray.append(newPlugin);

    // Update the "Plugins" array in the JSON object
    jsonObj["Plugins"] = pluginsArray;

    // Convert the modified QJsonObject back to a JSON-like string
    uprojectContent = QString::fromUtf8(QJsonDocument(jsonObj).toJson());

    // Write the changes back to the .uproject file
    if (uprojectFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&uprojectFile);
        out << uprojectContent;
        uprojectFile.close();
        qDebug() << "Plugin" << pluginName << " enabled for project" << projectName << ". Written Name: " << newPlugin["Name"].toString();
    } else {
        qDebug() << "Error: Failed to write changes to UProject file. Error: " << uprojectFile.errorString();
    }
}



/********************************************************************************************************************************/
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

    // Close the file before making changes
    uprojectFile.close();

    // Create a QJsonDocument from the JSON-like content
    QJsonDocument jsonDoc = QJsonDocument::fromJson(uprojectContent.toUtf8());
    QJsonObject jsonObj = jsonDoc.object();

    // Ensure that the "Plugins" array exists
    if (!jsonObj.contains("Plugins")) {
        qDebug() << "Error: 'Plugins' entry not found in UProject file for project" << projectName;
        return;
    }

    // Get the "Plugins" array
    QJsonArray pluginsArray = jsonObj["Plugins"].toArray();

    // Find and remove the plugin entry
    for (int i = 0; i < pluginsArray.size(); ++i) {
        QJsonObject pluginObject = pluginsArray[i].toObject();
        if (pluginObject["Name"].toString() == pluginName && pluginObject["Enabled"].toBool()) {
            pluginsArray.removeAt(i);
            break;
        }
    }

    // Update the "Plugins" array in the JSON object
    jsonObj["Plugins"] = pluginsArray;

    // Convert the modified QJsonObject back to a JSON-like string
    uprojectContent = QString::fromUtf8(QJsonDocument(jsonObj).toJson());

    // Write the changes back to the .uproject file
    if (uprojectFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&uprojectFile);
        out << uprojectContent;
        uprojectFile.close();
        qDebug() << "Plugin" << pluginName << "disabled for project" << projectName;
    } else {
        qDebug() << "Error: Failed to write changes to UProject file. Error: " << uprojectFile.errorString();
    }
}







void PluginManager::Fill_Plugin_lists_from_map(QStandardItem* parent, const QMap<QString, bool>& pluginMap) {
    // Clear existing items in both lists
    getEnabledPluginsModel()->invisibleRootItem()->removeRows(0, getEnabledPluginsModel()->rowCount());
    getDisabledPluginsModel()->invisibleRootItem()->removeRows(0, getDisabledPluginsModel()->rowCount());

    for (auto it = pluginMap.begin(); it != pluginMap.end(); ++it) {
        const QString& pluginName = it.key();
        const bool isEnabled = it.value();

        QStandardItem* item = new QStandardItem(pluginName);

        if (isEnabled) {
            // Add to the enabled plugins list
            getEnabledPluginsModel()->invisibleRootItem()->appendRow(item);
        } else {
            // Add to the disabled plugins list
            getDisabledPluginsModel()->invisibleRootItem()->appendRow(item);
        }
    }
}

/********************************************************************************************************************************/

void PluginManager::DisableEnablePluginsGlobal(const QString& projectName, const QString& pluginName, bool isDisabled) {
    if (mainWindowInstance) {
        QString jsonFilePath = QDir::currentPath() + QDir::separator() + "plugins.json";

        // Read the main JSON file
        QFile jsonFile(jsonFilePath);
        if (!jsonFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << "Failed to open JSON file for reading:" << jsonFilePath;
            return;
        }

        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonFile.readAll());
        QJsonArray jsonArray = jsonDocument.array();

        // Find the corresponding entry for the plugin name
        for (int i = 0; i < jsonArray.size(); ++i) {
            QJsonObject pluginObject = jsonArray[i].toObject();
            if (pluginObject["PluginName"].toString() == pluginName) {
                // Access the "PluginPath" entry
                QString pluginPath = pluginObject["PluginPath"].toString();
                qDebug() << "Plugin" << pluginName << "Path:" << pluginPath;

                // Read the .uplugin file
                QFile upluginFile(pluginPath);
                if (!upluginFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
                    qDebug() << "Failed to open .uplugin file for reading:" << pluginPath;
                    return;
                }

                // Read the content of .uplugin file
                QTextStream upluginStream(&upluginFile);
                QString upluginContent = upluginStream.readAll();
                upluginFile.close();

                // Modify the JSON content in memory
                QJsonDocument upluginDocument = QJsonDocument::fromJson(upluginContent.toUtf8());
                QJsonObject upluginObject = upluginDocument.object();
                upluginObject["EnabledByDefault"] = isDisabled;
                upluginDocument.setObject(upluginObject);

                // Write the modified .uplugin content back to the file
                if (!upluginFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
                    qDebug() << "Failed to open .uplugin file for writing:" << pluginPath;
                    return;
                }
                QTextStream out(&upluginFile);
                out << upluginDocument.toJson();
                upluginFile.close();

                // Update the "IsEnabled" property in the main JSON array
                pluginObject["IsEnabled"] = isDisabled;
                qDebug() << "Plugin" << pluginName << "is now" << (isDisabled ? "enabled" : "disabled");

                // Replace the modified JSON object in the main array
                jsonArray[i] = pluginObject;

                // Update the member variable in MainWindow
                mainWindowInstance->setJsonArray(jsonArray);

                // Write the modified main JSON back to the file
                mainWindowInstance->writeJsonFile(mainWindowInstance->getJsonArray(), jsonFilePath);
                jsonFile.close();

                return;  // Exit the loop once the plugin is found and updated
            }
        }

        qDebug() << "Plugin" << pluginName << "not found in JSON array.";
    } else {
        qDebug() << "MainWindow instance is not set in PluginManager.";
    }
}
