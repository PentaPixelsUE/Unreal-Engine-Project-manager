#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qjsonarray.h"
#include "qjsonobject.h"
#include "qsortfilterproxymodel.h"
#include <QMainWindow>

enum RunMode {
    GameMode,
    EditorMode,
    StandaloneMode,
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Open Sublime Text with specified folders
    void openSublimeWithFolders(const QString& engineRuntimePath, const QString& projectSourcePath, const QString& sublimePath);
    void writeJsonFile(const QJsonArray& jsonArray, const QString& filePath);

//    void updateJsonArray();
    QJsonArray getJsonArray() const ;

   void setJsonArray(const QJsonArray& array);

private:

    Ui::MainWindow *ui;
    QJsonObject jsonObject;
     QJsonArray jsonArray;
    QString selectedProjectFolderPath;
    QSortFilterProxyModel* filterProxyModel;

    RunMode selectedMode;

    bool openSublimeFlag;
    // Update the list of disabled plugins
    void updateDisabledPluginsList();
    void updateEnabledPluginsList();
    void RefreshEnabledDisabledPluginLists();
    void RefreshProjectPluginList();
    void loadengineplugins();

private slots:
    //Slot for handeling the "Enable Plugin For Project" Button Clicker
    void onEnablePluginForProjectBtnClickr();
    // Slot for handling the "Browse" button click to select the project path
    void onProjectPathBrowseBtnClicker();

    // Slot for handling the "Browse" button click to select the engine source path
    void onEngineSourcePathBtnClicker();

    // Slot for setting up project files
    void onSetupProjectFilesBtnClicker();

    // Validate the project name
    bool validateProjectName();

    // Update the label for standalone mode
    void updateStandaloneLabel();

    // Update the error label with a given error message
    void updateErrorLabel(const QString& errorMessage);

    //Update the Project Plugin Lists
    void UpdateProjectPluginsList();

    // Slot for handling the "Build" button click
    void onBuildClicker();

    // Slot for handling the "Run" button click
    void onRunClicker();

    // Slot for switching to game mode
    void onGameMode();

    // Slot for switching to standalone mode
    void onStandaloneMode();

    // Slot for switching to editor mode
    void onEditorMode();

    // Slot for disabling a plugin
    void onDisablePluginClickr();

    // Slot for updating the plugins list based on the filter
    void onFilterPluginsUpdate();

    // Slot for toggling the "Open Sublime" checkbox
    void onOpenSublimeCheckboxToggled(bool checked);
    void onEnableDisableProjectPluginBtnsClickr(bool enable);
    void onToggleDefaultPluginSettingBtnClickr();

};

#endif // MAINWINDOW_H
