#include "pluginsmanager.h"
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


void PluginManager::Fill_Plugin_lists_recursive(QStandardItem* parent, const QString& directory) {
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
            }
        }
    }

    // Recursively process subdirectories
    QStringList subDirs = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    for (const QString& subDir : subDirs) {
        QString subDirPath = directory + QDir::separator() + subDir;

        // Recursively fill the subdirectory
        Fill_Plugin_lists_recursive(parent, subDirPath);
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
    QObject::connect(listView->selectionModel(), &QItemSelectionModel::selectionChanged, [listView, proxyModel]() {
        // Handle the selection change here
        QModelIndexList selectedIndexes = listView->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty()) {
            qDebug() << "No item selected in " << listView->objectName();
        } else {
            QModelIndex sourceIndex = proxyModel->mapToSource(selectedIndexes.first());
            qDebug() << "Selected item in " << listView->objectName() << ": " << sourceIndex.data().toString();
            // Add logic to handle the selected item from the source model
        }
    });
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
