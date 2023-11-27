
//For each .uplugin file found in the current directory, it creates a new QStandardItem (pluginItem) with the name of the plugin file (pluginFile).

//  If the line in the file contains "EnabledByDefault": true, it appends the pluginItem to the parent item (which can be either a folder or the root item).

//    It then proceeds to process subdirectories. For each subdirectory, it creates a new QStandardItem (folderItem) with the name of the subdirectory (subDir) and appends it to the parent item. It then recursively calls Fill_Plugin_lists_recursive on the subdirectory.

//    So, when a file with "EnabledByDefault": true is found, it adds a new item to the tree. When a subdirectory is encountered, it adds a new folder item to the tree and recursively processes the contents of that subdirectory.

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

                                                                projectPluginsProxyModel(nullptr)  {
    setupProxyModels();
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
            while (!in.atEnd()) {
                QString line = in.readLine();
                if (line.contains("\"EnabledByDefault\": true")) {
                    isEnabledByDefault = true;
                    break;
                } else if (line.contains("\"EnabledByDefault\": false")) {
                    isEnabledByDefault = false;
                    break;
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
                if (item && item->text() == upluginFile) {
                    itemFound = true;
                    break;
                }
            }

            // Add to the appropriate list only if not found
            if (!itemFound) {
                // Remove ".uplugin" extension
                QString pluginName = upluginFile.left(upluginFile.lastIndexOf('.'));

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
    // Initialize enabled plugins model
    enabledPluginsModel = new QStandardItemModel;

    // Initialize disabled plugins model
    disabledPluginsModel = new QStandardItemModel;

    //Initialize Project plugins Model
    projectPluginsModel = new QStandardItemModel;

    // Initialize enabled plugins proxy model
    enabledPluginsProxyModel = new QSortFilterProxyModel;
    enabledPluginsProxyModel->setSourceModel(enabledPluginsModel);

    // Initialize disabled plugins proxy model
    disabledPluginsProxyModel = new QSortFilterProxyModel;
    disabledPluginsProxyModel->setSourceModel(disabledPluginsModel);

    projectPluginsProxyModel = new QSortFilterProxyModel;
    projectPluginsProxyModel->setSourceModel(projectPluginsModel);
}

