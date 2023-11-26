
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

PluginManager::PluginManager() : pluginsModel(new QStandardItemModel), disabledPluginsModel(nullptr), disabledPluginsProxyModel(nullptr) {
    setupProxyModels();
}

PluginManager::~PluginManager() {
    delete pluginsModel;
    delete disabledPluginsModel;
    delete disabledPluginsProxyModel;
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

            // Add to the appropriate list
            QStandardItem* item = new QStandardItem(upluginFile);
            if (isEnabledByDefault) {
                PluginManager::getInstance().getPluginsModel()->appendRow(item);
            } else {
                PluginManager::getInstance().getDisabledPluginsModel()->appendRow(item);
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

void PluginManager::setupProxyModels() {
    // Initialize disabled plugins model
    disabledPluginsModel = new QStandardItemModel;

    // Initialize disabled plugins proxy model
    disabledPluginsProxyModel = new QSortFilterProxyModel;
    disabledPluginsProxyModel->setSourceModel(disabledPluginsModel);
}



