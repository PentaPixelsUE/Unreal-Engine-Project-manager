// pluginsmanager.h
#ifndef PLUGINSMANAGER_H
#define PLUGINSMANAGER_H

#include <QString>
#include <QStandardItemModel>

class PluginManager {
public:
    static PluginManager& getInstance() {
        static PluginManager instance;
        return instance;
    }

    const QString& getEnginePath() const {
        return enginePath;
    }

    void setEnginePath(const QString& path) {
        enginePath = path;
    }

    void Fill_Plugin_lists_recursive(QStandardItem* parent, const QString& directory);
    void Fill_Disabled_Plugin_lists_recursive(QStandardItem* parent, const QString& directory);

    QStandardItemModel* getPluginsModel() const {
        return pluginsModel;
    }

    QStandardItemModel* getDisabledPluginsModel() const {
        return disabledPluginsModel;
    }

private:
    QString enginePath;
    QStandardItemModel* pluginsModel;
    QStandardItemModel* disabledPluginsModel;

    // Make the constructor private to enforce the singleton pattern
    PluginManager();
    ~PluginManager();
    PluginManager(const PluginManager&) = delete;
    PluginManager& operator=(const PluginManager&) = delete;
};

#endif  // PLUGINSMANAGER
