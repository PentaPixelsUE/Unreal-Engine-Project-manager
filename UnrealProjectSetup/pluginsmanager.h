// pluginsmanager.h
#ifndef PLUGINSMANAGER_H
#define PLUGINSMANAGER_H

#include <QString>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>

class PluginManager {
public:
    static PluginManager& getInstance() {
        static PluginManager instance;
        return instance;
    }
//PROXY MODELS
    QSortFilterProxyModel* getDisabledPluginsProxyModel() const {
        return disabledPluginsProxyModel;
    }

    QSortFilterProxyModel* getEnabledPluginsProxyModel() const {
        return enabledPluginsProxyModel;
    }

    const QString& getEnginePath() const {
        return enginePath;
    }

    void setEnginePath(const QString& path) {
        enginePath = path;
    }
//Plugin Models
    QStandardItemModel* getEnabledPluginsModel() const {
        return enabledPluginsModel;
    }

    QStandardItemModel* getDisabledPluginsModel() const {
        return disabledPluginsModel;
    }

    void Fill_Plugin_lists_recursive(QStandardItem* parent, const QString& directory);
    void Fill_Disabled_Plugin_lists_recursive(QStandardItem* parent, const QString& directory);


private:

    QString enginePath;
    QStandardItemModel* enabledPluginsModel;
     QSortFilterProxyModel* enabledPluginsProxyModel;
    QSortFilterProxyModel* disabledPluginsProxyModel;
    QStandardItemModel* disabledPluginsModel;


    void setupProxyModels() ;



    // Make the constructor private to enforce the singleton pattern

    PluginManager();
    ~PluginManager();
    PluginManager(const PluginManager&) = delete;
    PluginManager& operator=(const PluginManager&) = delete;
};

#endif  // PLUGINSMANAGER
