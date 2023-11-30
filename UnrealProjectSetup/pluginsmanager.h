// pluginsmanager.h
#ifndef PLUGINSMANAGER_H
#define PLUGINSMANAGER_H

#include "mainwindow.h"
#include "qjsonarray.h"
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

     QModelIndex FindModelIndex(QStandardItemModel* model, const QString& pluginName) const;

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
        void setMainWindowInstance(MainWindow* mainWindow);
    void setupListView(QListView* listView,QSortFilterProxyModel* proxyModel);
   void Fill_Plugin_lists_recursive(QStandardItem* parent, const QString& directory, QJsonArray& pluginsArray);
    //void Fill_Disabled_Plugin_lists_recursive(QStandardItem* parent, const QString& directory);
    void FillProjectPluginsList(const QString& uprojectPath,const QString& projectName,QStandardItem* parent);
    void EnablePluginForProject(const QString& projectName, const QString& pluginName);
    void DisablePluginForProject(const QString& projectName, const QString& pluginName) ;
    void DisableEnablePluginsGlobal(const QString& projectName, const QString& pluginName, bool isDisabled);
    bool set_list_flag()const;



private:
     QJsonArray pluginsArray;
    bool enableFlag;
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

    MainWindow* mainWindowInstance;
    void setupProxyModels() ;



    // Make the constructor private to enforce the singleton pattern

    PluginManager();
    ~PluginManager();
    PluginManager(const PluginManager&) = delete;
    PluginManager& operator=(const PluginManager&) = delete;
};

#endif  // PLUGINSMANAGER
