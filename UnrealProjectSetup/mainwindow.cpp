#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "projectjsongenerator.h"
#include <QObject>
#include <QDir>
#include <QFileSystemModel>
#include <QMessageBox>
#include <QFileDialog>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

        // Set text color to white
    //QMessageBox::setStyleSheet("QLabel { color: #ffffff; }");  // Set text color to white




    setMinimumSize(900, 350);
    setMaximumSize(900,350);

    // Connect the button click signal to a slot (function) in the MainWindow class
    connect(ui->Project_Path_Browse_Btn, &QPushButton::clicked, this, &::MainWindow::onProjectPathBrowseBtnClicker);
    connect(ui->UE_Source_Path_Browse_Btn, &QPushButton::clicked, this, &::MainWindow::onEngineSourcePathBtnClicker);
    connect(ui->Generate_Project_Files_Btn,&QPushButton::clicked,this, &::MainWindow::onSetupProjectFilesBtnClicker);
    connect(ui->Project_Name_Txt, &QLineEdit::textChanged, this, &MainWindow::validateProjectName);

}


MainWindow::~MainWindow()
{
    delete ui;
}


//Set The Project Path

void MainWindow::onProjectPathBrowseBtnClicker()
{
    QString selectedProjectFolderPath = QFileDialog::getExistingDirectory(this, "Select Project Folder", QDir::homePath(), QFileDialog::ShowDirsOnly);

    if (!selectedProjectFolderPath.isEmpty())
    {
        QDir directory(selectedProjectFolderPath);

        if (!directory.isEmpty()) {
            QMessageBox::critical(this, "Folder Selected", "Please select an empty folder");

        } else {
            // Set the selected folder path to the QLineEdit
            ui->Project_Path_Txt->setText(selectedProjectFolderPath);
            QMessageBox::information(this, "Folder Selected", "Project folder set to: " + selectedProjectFolderPath);
        }
    }
    else
    {
        QMessageBox::critical(this, "Folder Selected", "Please select a folder");
    }
}


//Set The Engine Source Path

void MainWindow::onEngineSourcePathBtnClicker()
{
    QString EnginePath = QFileDialog::getExistingDirectory(this,"Select Engine Folder",QDir::homePath(),QFileDialog::ShowDirsOnly);

    ui->UE_Source_Path_Txt->setText(EnginePath);
    QMessageBox::information(this, "Folder Selected", "Engine Source folder set to: " + EnginePath);


}


//Project files setup;
void MainWindow::onSetupProjectFilesBtnClicker()
{
    QString jsonFilePath = QDir::currentPath() + QDir::separator() + "linuxconfig.json";


    // Get the text from the Project_Name_Txt QLineEdit

    QString project_name = ui->Project_Name_Txt->text();

    QRegExp regex("^[a-zA-Z0-9]+$");

    if (!regex.exactMatch(project_name)) {

        // Show an error message if validation fails

        QMessageBox::warning(this, "Invalid Project Name", "Cannot Create Project");

        // Optionally, clear the text in the Project_Name_Txt field

        ui->Project_Name_Txt->clear();

        // Exit the function to prevent further execution

        return;
    }

    // Check if the text is not empty

    if (!project_name.isEmpty())
    {
        ProjectGenerator projectGenerator;
        QMessageBox::information(this, "Project Name", "Project Name: " + project_name);

        QString executablePath = QCoreApplication::applicationDirPath();
        QString jsonFilePath = executablePath + "/linuxconfig.json";


        QString projectFolderPath = ui->Project_Path_Txt->text() + QDir::separator() + project_name;
        QString engineSourcePath = ui->UE_Source_Path_Txt->text();

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




void MainWindow::validateProjectName() {
    QString projectName = ui->Project_Name_Txt->text();

    // Example validation: Check if projectName contains only alphanumerics
    QRegExp regex("^[a-zA-Z0-9]+$");

    if (projectName.isEmpty()) {
        updateErrorLabel("Error: Project name cannot be empty.");
    } else if (!regex.exactMatch(projectName)) {
        updateErrorLabel("Error: Project name must contain only alphanumerics.");
    } else {
        updateErrorLabel("");  // Clear the error message if validation passes
    }
}












