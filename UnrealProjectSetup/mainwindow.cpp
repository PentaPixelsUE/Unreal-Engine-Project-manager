#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "buildsetup.h"
#include "projectjsongenerator.h"
#include "pluginsmanager.h"
#include <QSortFilterProxyModel>

#include <QObject>
#include <QDir>
#include <QFileSystemModel>
#include <QMessageBox>
#include <QFileDialog>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QCoreApplication>
#include<QThread>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,openSublimeFlag(false)
    ,filterProxyModel(new QSortFilterProxyModel(this))

{
    ui->setupUi(this);


    //filterProxyModel->setSourceModel(PluginManager::getInstance().getPluginsModel());

 setWindowTitle("Unreal Engine Project Manager");


    setMinimumSize(900, 550);

    filterProxyModel = new QSortFilterProxyModel(this);

    //Main UI

    connect(ui->Project_Path_Browse_Btn, &QPushButton::clicked, this, &::MainWindow::onProjectPathBrowseBtnClicker);
    connect(ui->UE_Source_Path_Browse_Btn, &QPushButton::clicked, this, &::MainWindow::onEngineSourcePathBtnClicker);
    connect(ui->Generate_Project_Files_Btn,&QPushButton::clicked,this, &::MainWindow::onSetupProjectFilesBtnClicker);
    connect(ui->Build_Btn,&QPushButton::clicked,this,&MainWindow::onBuildClicker);
    connect(ui->Run_Btn,&QPushButton::clicked,this,&MainWindow::onRunClicker);
    connect(ui->To_Disable_Plugins_Btn,&QPushButton::clicked,this,&MainWindow::onDisablePluginClickr);

    //Radio Buttons
    connect(ui->Standalone_Mode_Tick, &QRadioButton::clicked, this, [=]() {// Lambda Function
        selectedMode = StandaloneMode;
        updateStandaloneLabel();
    });
    connect(ui->Game_Mode_Tick, &QRadioButton::clicked, this, [=]() { selectedMode = GameMode;
    updateStandaloneLabel();
    });
    connect(ui->Editor_Mode_Tick, &QRadioButton::clicked, this, [=]() { selectedMode = EditorMode;
    updateStandaloneLabel();
    });


    //Labels

   connect(ui->Project_Name_Txt, &QLineEdit::textChanged, this, &MainWindow::validateProjectName);
    connect(ui->Standalone_Mode_Tick, &QRadioButton::clicked, this, &MainWindow::updateStandaloneLabel);

//CheckBox
    connect(ui->Open_Sublime_CheckBox, &QCheckBox::clicked,this,&MainWindow::onOpenSublimeCheckboxToggled);
//Plugin Filters

    connect(ui->Plugins_Filter, &QLineEdit::textChanged, this, &MainWindow::onFilterPluginsUpdate);




}

void MainWindow::onGameMode()
{
    selectedMode = GameMode;
}

void MainWindow::onEditorMode()
{
    selectedMode = EditorMode;
}

void MainWindow::onStandaloneMode()
{
    selectedMode = StandaloneMode;
}



MainWindow::~MainWindow()
{
    delete ui;

    delete filterProxyModel;
}


//Set The Project Path

void MainWindow::onProjectPathBrowseBtnClicker()
{
    QString selectedProjectFolderPath = QFileDialog::getExistingDirectory(this, "Select Project Folder", QDir::homePath(), QFileDialog::ShowDirsOnly);

    if (!selectedProjectFolderPath.isEmpty())
    {
        // Set the selected folder path to the QLineEdit
        ui->Project_Path_Txt->setText(selectedProjectFolderPath);
        QMessageBox::information(this, "Folder Selected", "Project folder set to: " + selectedProjectFolderPath);
    }
    else
    {
        QMessageBox::critical(this, "Folder Selected", "Please select a folder");
    }
}



//Set The Engine Source Path


void MainWindow::onEngineSourcePathBtnClicker() {
    QString EnginePath = QFileDialog::getExistingDirectory(this, "Select Engine Folder", QDir::homePath(), QFileDialog::ShowDirsOnly);

    ui->UE_Source_Path_Txt->setText(EnginePath);
    QMessageBox::information(this, "Folder Selected", "Engine Source folder set to: " + EnginePath);

    QString pluginPath = ui->UE_Source_Path_Txt->text() + QDir::separator() + "Plugins";
    PluginManager::getInstance().setEnginePath(pluginPath);

    // Clear the existing models
    ui->Enabled_Plugins_List->setModel(nullptr);
    ui->Disabled_Plugins_List->setModel(nullptr);

    // Populate the models
    PluginManager::getInstance().Fill_Plugin_lists_recursive(PluginManager::getInstance().getPluginsModel()->invisibleRootItem(), pluginPath);
    PluginManager::getInstance().Fill_Plugin_lists_recursive(PluginManager::getInstance().getDisabledPluginsModel()->invisibleRootItem(), pluginPath);

    // Set the models to the list views
    ui->Enabled_Plugins_List->setModel(PluginManager::getInstance().getPluginsModel());
    ui->Disabled_Plugins_List->setModel(PluginManager::getInstance().getDisabledPluginsModel());


}



//Project files setup;
void MainWindow::onSetupProjectFilesBtnClicker()
{

    if (!validateProjectName()) {
         QMessageBox::warning(this, "Invalid Project Name", "Cannot Create Project");
        return;
    }

    QString project_name = ui->Project_Name_Txt->text();

    if (!project_name.isEmpty())
    {

        ProjectGenerator projectGenerator;
        QMessageBox::information(this, "Project Name", "Project Name: " + project_name);

        QString executablePath = QCoreApplication::applicationDirPath();
        QString jsonFilePath = executablePath + "/linuxconfig.json";


        QString projectFolderPath = ui->Project_Path_Txt->text() ;
        QString engineSourcePath = ui->UE_Source_Path_Txt->text();
        projectGenerator.setPaths(engineSourcePath, projectFolderPath);

        // Call the createFoldersAndFiles function with the JSON file path
        projectGenerator.createFoldersAndFiles(jsonFilePath, projectFolderPath,project_name);

    }

    else
    {
        // Handle the case where the text field is empty
        QMessageBox::warning(this, "Empty Project Name", "Please enter a project name.");
    }
}


void MainWindow::updateErrorLabel(const QString& errorMessage) {
    ui->Project_Name_Error->setText(errorMessage);
}


void MainWindow::updateStandaloneLabel() {
    if (ui->Standalone_Mode_Tick->isChecked()) {
        ui->Standalone_Warning_Lbl->setText("This Mode Uses the 'Cook' Command , It can Take A while ! ");
    }else{
        ui->Standalone_Warning_Lbl->setText("");
    }
}



bool MainWindow::validateProjectName() {
    QString projectName = ui->Project_Name_Txt->text();
    QString projectPath = ui->Project_Path_Txt->text();

    // Check if projectName contains only alphanumerics
    QRegExp regex("^[a-zA-Z0-9]+$");
    QDir projectDir(projectPath);
    QStringList projectDirs = projectDir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    if (projectName.isEmpty()) {
        updateErrorLabel("Error: Project name cannot be empty.");
    } else if (!regex.exactMatch(projectName)) {
        updateErrorLabel("Error: Project name must contain only alphanumerics.");
    } else if  (projectDirs.contains(projectName, Qt::CaseSensitive)){

             updateErrorLabel("Warning: Project with the same name already exists in the selected path.");
        return true;
        } else {
            updateErrorLabel("");  // Clear the error message if validation passes
            return true;
    }
    return false;
}

void MainWindow::onBuildClicker() {
        buildsetup buildSetupInstance;
        QString buildfile =ui->Project_Path_Txt->text() +QDir::separator() +ui->Project_Name_Txt->text() ;

        buildSetupInstance.getBuildFilePath(buildfile);
         QMessageBox::information(this, "Build Info", "Build Successful: ");
}


void MainWindow::onRunClicker() {
        buildsetup buildSetupInstance;

        QString runfile = ui->Project_Path_Txt->text() + QDir::separator() + ui->Project_Name_Txt->text();
        QString projectName = ui->Project_Name_Txt->text();
        QString projectPath = ui->Project_Path_Txt->text();
        QString enginePath = ui->UE_Source_Path_Txt->text();
       buildSetupInstance.getRunFilePath(runfile, selectedMode,enginePath,projectPath,projectName);

}




void MainWindow::openSublimeWithFolders(const QString& engineRuntimePath, const QString& projectSourcePath, const QString& sublimePath) {
        QStringList arguments;
        arguments.append(engineRuntimePath);
        arguments.append(projectSourcePath);
       // arguments.append(projectConfigPath);
        arguments.append(sublimePath);

        QProcess sublimeProcess;
        if (sublimeProcess.startDetached(sublimePath, arguments)) {
            qDebug() << "Successfully opened Sublime Text with specified folders.";
        } else {
            qDebug() << "Failed to open Sublime Text. Check the path and arguments.";
        }
}


void MainWindow::onOpenSublimeCheckboxToggled(bool checked)
{
        openSublimeFlag = checked;

}

void MainWindow::onDisablePluginClickr() {


}


void MainWindow::onFilterPluginsUpdate() {
        QString filterText = ui->Plugins_Filter->text();
        QRegExp regExp(filterText, Qt::CaseInsensitive, QRegExp::Wildcard);

        filterProxyModel->setFilterRegExp(regExp);

        // Set filtered models for both lists
        ui->Enabled_Plugins_List->setModel(filterProxyModel);
        ui->Disabled_Plugins_List->setModel(filterProxyModel);

        // Update your UI or perform any other actions when the filter changes
        updateEnabledPluginsList();
        updateDisabledPluginsList();
}

void MainWindow::updateEnabledPluginsList() {
        qDebug() << "Updating Enabled Plugins List";

        // Assuming you have a QStandardItemModel for the enabled plugins list
        QStandardItemModel* enabledPluginsModel = PluginManager::getInstance().getPluginsModel();

        // Set the filtered model for the enabled plugins list
        ui->Enabled_Plugins_List->setModel(filterProxyModel);

        // If using a filter proxy model, set the source model
        filterProxyModel->setSourceModel(enabledPluginsModel);
}

void MainWindow::updateDisabledPluginsList() {
        qDebug() << "Updating Disabled Plugins List";

        // Assuming you have a QStandardItemModel for the disabled plugins list
        QStandardItemModel* disabledPluginsModel = PluginManager::getInstance().getDisabledPluginsModel();

        // Set the filtered model for the disabled plugins list
        ui->Disabled_Plugins_List->setModel(filterProxyModel);

        // If using a filter proxy model, set the source model
        filterProxyModel->setSourceModel(disabledPluginsModel);
}


