#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qjsonobject.h"
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
    void openSublimeWithFolders(const QString& engineRuntimePath, const QString& projectSourcePath, const QString& sublimePath);

private:
    Ui::MainWindow *ui;
    QJsonObject jsonObject;
    QString selectedProjectFolderPath;
    bool openSublimeFlag;
    RunMode selectedMode;

private slots:
    void onProjectPathBrowseBtnClicker();
    void onEngineSourcePathBtnClicker();
    void onSetupProjectFilesBtnClicker();
    bool validateProjectName();
    void updateStandaloneLabel();
    void updateErrorLabel(const QString& errorMessage);
    void onBuildClicker();
    void onRunClicker();
    void onGameMode();
    void onStandaloneMode();
    void onEditorMode();
    void onDisablePlugin();

    void onOpenSublimeCheckboxToggled(bool checked);

};
#endif // MAINWINDOW_H
