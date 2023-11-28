// pluginsmanager.h
#ifndef PLUGINSMANAGER_H
#define PLUGINSMANAGER_H

#include <QString>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QListView>

class PluginManager {
public:
    static PluginManager& getInstance() {
        static PluginManager instance;
        return instance;
    }

    QItemSelectionModel* getAllListsSelectionModel() const {
        return AllListsSelectionModel;
    }
//PROXY MODELS
    QSortFilterProxyModel* getDisabledPluginsProxyModel() const {
        return disabledPluginsProxyModel;
    }

    QSortFilterProxyModel* getEnabledPluginsProxyModel() const {
        return enabledPluginsProxyModel;
    }

    QSortFilterProxyModel* getProjectPluginsProxyModel() const {
        return projectPluginsProxyModel;
    }

  //Getters and setters for paths
    const QString& getEnginePath() const {
        return enginePath;
    }

    void setEnginePath(const QString& path) {
        enginePath = path;
    }


    const QString& getUProjectPath() const {
        return uprojectPath;
    }

    void setUProjectPath(const QString& path) {
        uprojectPath = path;
    }

    const QString& getProjectName() const {
        return projectName;
    }

    void setProjectName(const QString& name) {
        projectName = name;
    }

//Plugin Models
    QStandardItemModel* getEnabledPluginsModel() const {
        return enabledPluginsModel;
    }

    QStandardItemModel* getDisabledPluginsModel() const {
        return disabledPluginsModel;
    }
    QStandardItemModel* getProjectPluginsModel() const {
        return projectPluginsModel;
    }

    void setupListView(QListView* listView,QSortFilterProxyModel* proxyModel);
    void Fill_Plugin_lists_recursive(QStandardItem* parent, const QString& directory);
    void Fill_Disabled_Plugin_lists_recursive(QStandardItem* parent, const QString& directory);
    void FillProjectPluginsList(const QString& uprojectPath,const QString& projectName,QStandardItem* parent);
    void EnablePluginForProject(const QString& projectName, const QString& pluginName);

private:
    QString projectName;
    QString enginePath;
    QString uprojectPath;
    QStandardItemModel* enabledPluginsModel;
     QSortFilterProxyModel* enabledPluginsProxyModel;
    QSortFilterProxyModel* disabledPluginsProxyModel;
    QStandardItemModel* disabledPluginsModel;
    QStandardItemModel* projectPluginsModel;
    QSortFilterProxyModel* projectPluginsProxyModel;
    QItemSelectionModel* AllListsSelectionModel;


    void setupProxyModels() ;



    // Make the constructor private to enforce the singleton pattern

    PluginManager();
    ~PluginManager();
    PluginManager(const PluginManager&) = delete;
    PluginManager& operator=(const PluginManager&) = delete;
};

#endif  // PLUGINSMANAGER
