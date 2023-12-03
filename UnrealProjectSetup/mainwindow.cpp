#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "buildsetup.h"
#include "projectjsongenerator.h"
#include "pluginsmanager.h"
#include <QSortFilterProxyModel>
#include<QSettings>
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





    setWindowTitle("Unreal Engine Project Manager");


    setMinimumSize(900, 750);

    filterProxyModel = new QSortFilterProxyModel(this);


    QSettings settings;
    QString lastProjectPath = settings.value("projectPath", "").toString();

    if(!lastProjectPath.isEmpty()){
        ui->UE_Source_Path_Txt->setText(lastProjectPath);
        loadengineplugins();
    }


    //Main UI

    connect(ui->Project_Path_Browse_Btn, &QPushButton::clicked, this, &::MainWindow::onProjectPathBrowseBtnClicker);
    connect(ui->UE_Source_Path_Browse_Btn, &QPushButton::clicked, this, &::MainWindow::onEngineSourcePathBtnClicker);
    connect(ui->Generate_Project_Files_Btn,&QPushButton::clicked,this, &::MainWindow::onSetupProjectFilesBtnClicker);
    connect(ui->Build_Btn,&QPushButton::clicked,this,&MainWindow::onBuildClicker);
    connect(ui->Run_Btn,&QPushButton::clicked,this,&MainWindow::onRunClicker);


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

 //Plugins Buttons
    connect(ui->Disable_Plugins_Btn,&QPushButton::clicked,this,&MainWindow::onDisablePluginClickr);
    connect(ui->Enable_Project_Plugins_Button, &QPushButton::clicked,this, &MainWindow::onEnablePluginForProjectBtnClickr);
    connect(ui->Toggle_Global_Plugin_Btn, &QPushButton::clicked, this, &MainWindow::onToggleDefaultPluginSettingBtnClickr);
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

void MainWindow::onProjectPathBrowseBtnClicker() {
    QString selectedProjectFolderPath = QFileDialog::getExistingDirectory(this, "Select Project Folder", QDir::homePath(), QFileDialog::ShowDirsOnly);

    if (!selectedProjectFolderPath.isEmpty()) {
        // Set the selected folder path to the QLineEdit
        ui->Project_Path_Txt->setText(selectedProjectFolderPath);
        ui->Enabled_Plugins_List->clearSelection();
        ui->Disabled_Plugins_List->clearSelection();
        ui->Project_Plugins_List->clearSelection();

        // Set filtered models for both lists
        ui->Enabled_Plugins_List->setModel(PluginManager::getInstance().getEnabledPluginsProxyModel());
        ui->Disabled_Plugins_List->setModel(PluginManager::getInstance().getDisabledPluginsProxyModel());
        ui->Project_Plugins_List->setModel(PluginManager::getInstance().getProjectPluginsProxyModel());
        QMessageBox::information(this, "Folder Selected", "Project folder set to: " + selectedProjectFolderPath);


    } else {
        QMessageBox::critical(this, "Folder Selected", "Please select a folder");
    }
}


//Set The Engine Source Path



    void MainWindow::onEngineSourcePathBtnClicker() {
        QString defaultPath = QDir::homePath();

        // Retrieve the last saved project path from settings
        QSettings settings;
        QString lastProjectPath = settings.value("projectPath", "").toString();

        QString projectPath = QFileDialog::getExistingDirectory(this, "Select Project Folder", lastProjectPath, QFileDialog::ShowDirsOnly);

        if (projectPath.isEmpty()) {
            // User canceled the selection, or an error occurred
            return;
        }

        // Save the new project path to settings
        settings.setValue("projectPath", projectPath);

        if (lastProjectPath.isEmpty()) {
            // Show a message box when the project path is set for the first time
            QMessageBox::information(this, "Project Source Set", "Project source has been set to default.");
        }


        // Use the projectPath for both the project and engine paths
        ui->UE_Source_Path_Txt->setText(projectPath);
        QString pluginPath = ui->UE_Source_Path_Txt->text() + QDir::separator() + "Plugins";

        PluginManager::getInstance().setEnginePath(pluginPath);

       loadengineplugins();


 }

void MainWindow::loadengineplugins() {

        PluginManager::getInstance().setMainWindowInstance(this);
        QMessageBox* loadingBox = new QMessageBox(this);
        loadingBox->setWindowTitle("Loading");
        loadingBox->setText("Loading Plugins...");

        Qt::WindowFlags flags = loadingBox->windowFlags();
        flags |= Qt::CustomizeWindowHint;
        loadingBox->setWindowFlags(flags);

        loadingBox->show();
        QApplication::processEvents();  // Ensure the message box is displayed

        // Clear the existing models
        ui->Enabled_Plugins_List->setModel(nullptr);
        ui->Disabled_Plugins_List->setModel(nullptr);
        QString pluginPath = ui->UE_Source_Path_Txt->text() + QDir::separator() + "Plugins";
        QJsonArray pluginsArray;

        PluginManager::getInstance().Fill_Plugin_lists_recursive(
            PluginManager::getInstance().getEnabledPluginsModel()->invisibleRootItem(),
            pluginPath,
            pluginsArray
            );

        PluginManager::getInstance().Fill_Plugin_lists_recursive(
            PluginManager::getInstance().getDisabledPluginsModel()->invisibleRootItem(),
            pluginPath,
            pluginsArray
            );



        writeJsonFile(pluginsArray, QDir::currentPath() + QDir::separator() + "plugins.json");

       RefreshEnabledDisabledPluginLists();


        loadingBox->close();
        delete loadingBox;
    }


    void MainWindow::writeJsonFile(const QJsonArray& jsonArray, const QString& filePath) {
        if (!jsonArray.isEmpty()) {
            QFile jsonFile(filePath);
            if (jsonFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
                jsonFile.write(QJsonDocument(jsonArray).toJson());
                jsonFile.close();
                qDebug() << "JSON file successfully updated at:" << filePath;
            } else {
                qDebug() << "Failed to open JSON file for writing:" << filePath;
                qDebug() << "Error: " << jsonFile.errorString();
            }
        } else {
            qDebug() << "JSON array is empty. Cannot write to file:" << filePath;
            qDebug() << "Content of the empty array: " << jsonArray;
        }
    }


    // Update the member variable
    void MainWindow::setJsonArray(const QJsonArray& array) {
        jsonArray = array;
    }

    // Retrieve the member variable
    QJsonArray MainWindow::getJsonArray() const {
        return jsonArray;
    }


//    void MainWindow::updateJsonArray() {
//        QJsonObject newObject;
//        newObject["key"] = "value";
//        jsonArray.append(newObject);
//        setJsonArray(jsonArray);
//    }


//Project files setup;
void MainWindow::onSetupProjectFilesBtnClicker()
{

    if (validateProjectName()) {
         QMessageBox::warning(this, "Invalid Project Name", "Cannot Create Project");
        return;
    }

    QString project_name = ui->Project_Name_Txt->text();

    if (!project_name.isEmpty())
    {

        ProjectGenerator projectGenerator;
        QMessageBox::information(this, "Project Name", "Project Name: " + project_name);

        QString executablePath = QCoreApplication::applicationDirPath();
        QString jsonFilePath =   ":/QtDesign_Resources/linuxconfig.json";


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

bool MainWindow::validateProjectName() {
    // Clear the error label at the beginning of the function
    updateErrorLabel("");

    QString projectName = ui->Project_Name_Txt->text();
    QString projectPath = ui->Project_Path_Txt->text();

    // Check if projectName contains only alphanumerics
    QRegExp regex("^[a-zA-Z0-9]+$");
    QDir projectDir(projectPath);
    QStringList projectDirs = projectDir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);

    if (projectName.isEmpty()) {
        updateErrorLabel("Error: Project name cannot be empty.");
        return false;
    } else if (!regex.exactMatch(projectName)) {
        updateErrorLabel("Error: Project name must contain only alphanumerics.");
        return false;
    } else if (projectDirs.contains(projectName, Qt::CaseSensitive)) {
        updateErrorLabel("Warning: Project with the same name already exists in the selected path.");

        QString uprojectPath = projectPath + QDir::separator() + projectName;

        // Check if the uprojectPath has changed
        if (uprojectPath != PluginManager::getInstance().getUProjectPath()) {
            // Clear the model before updating
            qDebug() << uprojectPath << " COMPARING" << PluginManager::getInstance().getUProjectPath();
      //      ui->Project_Plugins_List->setModel(nullptr);

            // Update the model and set the project path
            PluginManager::getInstance().setUProjectPath(uprojectPath);
            PluginManager::getInstance().setProjectName(projectName);
            PluginManager::getInstance().FillProjectPluginsList(uprojectPath, projectName, PluginManager::getInstance().getProjectPluginsModel()->invisibleRootItem());
            UpdateProjectPluginsList();
           RefreshProjectPluginList();
        }

        return true;
    }

    // If validation fails, clear the model
    ui->Project_Plugins_List->setModel(nullptr);
    return false;
}




void MainWindow::updateStandaloneLabel() {
    if (ui->Standalone_Mode_Tick->isChecked()) {
        ui->Standalone_Warning_Lbl->setText("This Mode Uses the 'Cook' Command , It can Take A while ! ");
    }else{
        ui->Standalone_Warning_Lbl->setText("");
    }
}







void MainWindow::onBuildClicker() {
        buildsetup buildSetupInstance;
        QString buildfile =ui->Project_Path_Txt->text() +QDir::separator() +ui->Project_Name_Txt->text() ;
        QMessageBox* loadingBox = new QMessageBox(this);
        loadingBox->setWindowTitle("Loading");
        loadingBox->setText("Building Project...");

        Qt::WindowFlags flags = loadingBox->windowFlags();
        flags |= Qt::CustomizeWindowHint;
        loadingBox->setWindowFlags(flags);

        loadingBox->show();
        QApplication::processEvents();  // Ensure the message box is displayed


        buildSetupInstance.getBuildFilePath(buildfile);
        // Close the loading message box
        loadingBox->close();
        delete loadingBox;

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


void MainWindow::onFilterPluginsUpdate() {


        qDebug() << "Filter function called!";

        QString filterText = ui->Plugins_Filter->text();
        qDebug() << "Typed" << filterText;

        QRegularExpression regExp(filterText, QRegularExpression::CaseInsensitiveOption);

        // Set the filter on the source models of both lists
        PluginManager::getInstance().getEnabledPluginsProxyModel()->setFilterRegularExpression(regExp);
        PluginManager::getInstance().getDisabledPluginsProxyModel()->setFilterRegularExpression(regExp);
        PluginManager::getInstance().getProjectPluginsProxyModel()->setFilterRegularExpression(regExp);



        updateEnabledPluginsList();
       updateDisabledPluginsList();
        UpdateProjectPluginsList();

       RefreshEnabledDisabledPluginLists();
       RefreshProjectPluginList();

}





void MainWindow::updateEnabledPluginsList() {
        qDebug() << "Updating Enabled Plugins List";

        QSortFilterProxyModel* enabledPluginsProxyModel = PluginManager::getInstance().getEnabledPluginsProxyModel();
        enabledPluginsProxyModel->setSourceModel(PluginManager::getInstance().getEnabledPluginsModel());

        ui->Enabled_Plugins_List->setModel(enabledPluginsProxyModel);


}


void MainWindow::updateDisabledPluginsList() {
        qDebug() << "Updating Disabled Plugins List";

        QSortFilterProxyModel* disabledPluginsProxyModel = PluginManager::getInstance().getDisabledPluginsProxyModel();
        disabledPluginsProxyModel->setSourceModel(PluginManager::getInstance().getDisabledPluginsModel());

        ui->Disabled_Plugins_List->setModel(disabledPluginsProxyModel);

}

void MainWindow::UpdateProjectPluginsList(){

        qDebug() <<"Updating Project plugin List()";
        QSortFilterProxyModel* projectPluginProxyModel = PluginManager::getInstance().getProjectPluginsProxyModel();
        projectPluginProxyModel->setSourceModel(PluginManager::getInstance().getProjectPluginsModel());

        ui->Project_Plugins_List->setModel(projectPluginProxyModel);
}





void MainWindow::RefreshEnabledDisabledPluginLists() {
        // Set filtered models for both lists
        ui->Enabled_Plugins_List->setModel(PluginManager::getInstance().getEnabledPluginsProxyModel());
        ui->Disabled_Plugins_List->setModel(PluginManager::getInstance().getDisabledPluginsProxyModel());

        // Clear selections
        ui->Enabled_Plugins_List->clearSelection();
        ui->Disabled_Plugins_List->clearSelection();

        // Call the setupListView function after changing the filter
        PluginManager::getInstance().setupListView(ui->Disabled_Plugins_List, PluginManager::getInstance().getDisabledPluginsProxyModel());
        PluginManager::getInstance().setupListView(ui->Enabled_Plugins_List, PluginManager::getInstance().getEnabledPluginsProxyModel());
}

void MainWindow::RefreshProjectPluginList() {
        // Set filtered model for the project list
        ui->Project_Plugins_List->setModel(PluginManager::getInstance().getProjectPluginsProxyModel());

        // Clear selection
        ui->Project_Plugins_List->clearSelection();

        // Update the selection model directly from the list view
        ui->Project_Plugins_List->setSelectionModel(ui->Project_Plugins_List->selectionModel());

        // Call the setupListView function after changing the filter
        PluginManager::getInstance().setupListView(ui->Project_Plugins_List, PluginManager::getInstance().getProjectPluginsProxyModel());
}

//void MainWindow::onEnablePluginForProjectBtnClickr() {

//        QString projectName = ui->Project_Name_Txt->text();
//        QString projectPath = ui->Project_Path_Txt->text();

//        // Get the selected item from the Disabled Plugins List
//        QModelIndexList selectedIndexes = ui->Disabled_Plugins_List->selectionModel()->selectedIndexes();

//        if (!selectedIndexes.isEmpty()) {
//            // Get the selected item's text (plugin name)
//            QString pluginName = PluginManager::getInstance().getDisabledPluginsProxyModel()->data(
//                                                                                                PluginManager::getInstance().getDisabledPluginsProxyModel()->index(selectedIndexes.first().row(), 0)
//                                                                                                ).toString();
//            QString uprojectPath = projectPath + QDir::separator() + projectName;
//            // Call EnablePluginForProject with the selected project name and plugin name
//            PluginManager::getInstance().EnablePluginForProject(projectName, pluginName);
//            PluginManager::getInstance().setUProjectPath(uprojectPath);
//            PluginManager::getInstance().setProjectName(projectName);
//            PluginManager::getInstance().FillProjectPluginsList(uprojectPath, projectName, PluginManager::getInstance().getProjectPluginsModel()->invisibleRootItem());
//            RefreshEnabledDisabledPluginLists();
//            RefreshProjectPluginList();
//            updateEnabledPluginsList();
//            updateDisabledPluginsList();
//            UpdateProjectPluginsList();

//        } else {
//            qDebug() << "No item selected in the Disabled Plugins List.";
//        }
//}
void MainWindow::onEnableDisableProjectPluginBtnsClickr(bool enable) {
        QString projectName = ui->Project_Name_Txt->text();
        QString projectPath = ui->Project_Path_Txt->text();

        QModelIndexList selectedIndexes = enable ?
                                              ui->Disabled_Plugins_List->selectionModel()->selectedIndexes() :
                                              ui->Project_Plugins_List->selectionModel()->selectedIndexes();

        if (!selectedIndexes.isEmpty()) {
            QString pluginName = enable ?
                                     PluginManager::getInstance().getDisabledPluginsProxyModel()->data(
                                                                                                    PluginManager::getInstance().getDisabledPluginsProxyModel()->index(selectedIndexes.first().row(), 0)
                                                                                                    ).toString() :
                                     PluginManager::getInstance().getProjectPluginsProxyModel()->data(
                                                                                                   PluginManager::getInstance().getProjectPluginsProxyModel()->index(selectedIndexes.first().row(), 0)
                                                                                                   ).toString();

            QString uprojectPath = projectPath + QDir::separator() + projectName;

            if (enable) {
            PluginManager::getInstance().EnablePluginForProject(projectName, pluginName);
           PluginManager::getInstance().setUProjectPath(uprojectPath);
           PluginManager::getInstance().setProjectName(projectName);
           PluginManager::getInstance().FillProjectPluginsList(uprojectPath, projectName, PluginManager::getInstance().getProjectPluginsModel()->invisibleRootItem());
            } else {
            PluginManager::getInstance().DisablePluginForProject(projectName, pluginName);
           PluginManager::getInstance().setUProjectPath(uprojectPath);
           PluginManager::getInstance().setProjectName(projectName);
           PluginManager::getInstance().FillProjectPluginsList(uprojectPath, projectName, PluginManager::getInstance().getProjectPluginsModel()->invisibleRootItem());
            }




            updateEnabledPluginsList();
           updateDisabledPluginsList();
            UpdateProjectPluginsList();
           RefreshEnabledDisabledPluginLists();
           RefreshProjectPluginList();
        } else {
            qDebug() << "No item selected.";
        }
}

void MainWindow::onEnablePluginForProjectBtnClickr() {
        onEnableDisableProjectPluginBtnsClickr(true);
}

void MainWindow::onDisablePluginClickr() {
        onEnableDisableProjectPluginBtnsClickr(false);
}

void MainWindow::onToggleDefaultPluginSettingBtnClickr() {
        QString projectPath = ui->Project_Path_Txt->text();
        QString projectName = ui->Project_Name_Txt->text();

        // Get the enable flag from the setupListView function
        bool enableFlag = PluginManager::getInstance().set_list_flag();

        // Get the correct list view based on the enable flag
        QListView* listView = enableFlag ? ui->Enabled_Plugins_List : ui->Disabled_Plugins_List;

        // Get the selected item from the Plugins List (assume a single selection)
        QModelIndexList selectedIndexes = listView->selectionModel()->selectedIndexes();

        if (!selectedIndexes.isEmpty()) {
            QString pluginName = enableFlag ?
                                     PluginManager::getInstance().getEnabledPluginsProxyModel()->data(
                                                                                                   PluginManager::getInstance().getEnabledPluginsProxyModel()->index(selectedIndexes.first().row(), 0)
                                                                                                   ).toString() :
                                     PluginManager::getInstance().getDisabledPluginsProxyModel()->data(
                                                                                                    PluginManager::getInstance().getDisabledPluginsProxyModel()->index(selectedIndexes.first().row(), 0)
                                                                                                    ).toString();

            QString uprojectPath = projectPath + QDir::separator() + projectName;

            qDebug() << "ENABLE STATE :" << enableFlag;
            qDebug() << "Selected item in " << listView->objectName() << ": " << pluginName;

            PluginManager::getInstance().DisableEnablePluginsGlobal(projectName, pluginName, !enableFlag);
            // Some part of your code where you want to update the JSON array
            updateEnabledPluginsList();
            updateDisabledPluginsList();
            RefreshEnabledDisabledPluginLists();

        } else {
            qDebug() << "No item selected in the Plugins List.";
        }
}


