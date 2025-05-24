#include "buildsetup.h"
#include "mainwindow.h"
#include <QtConcurrent/QtConcurrent>
#include "qdir.h"
#include <QProcess>
#include <QDebug>
#include <QFile>
#include <QSysInfo> // Added for OS checking, though #ifdef is used

buildsetup::buildsetup()
{
    // Constructor implementation, if needed
}



void buildsetup::getBuildFilePath(const QString& buildfilepath)
{
    // Function implementation using buildfilepath
    qDebug() << "ProjectPath = " << buildfilepath;

    QString scriptName = "build.sh";
    #ifdef _WIN32
    scriptName = "build.bat";
    #endif
    QString buildScriptPath = buildfilepath + QDir::separator() + scriptName;

    qDebug() << "BuildFilePath = " << buildScriptPath;


    // Check if the build file exists
    QFile buildFile(buildScriptPath);
    if (buildFile.exists()) {

        qDebug() << "Build file exists.";
        QProcess buildProcess;
        #ifdef _WIN32
        buildProcess.start("cmd.exe", QStringList() << "/c" << buildScriptPath);
        #else
        buildProcess.start("bash", QStringList() << buildScriptPath);
        #endif
        buildProcess.waitForFinished(-1);
        QString buildOutput = buildProcess.readAllStandardOutput();
        QString buildError = buildProcess.readAllStandardError();

        qDebug() << "Build Script Output:\n" << buildOutput;
        qDebug() << "Build Script Error:\n" << buildError;
    } else {

        qDebug() << "Build file does not exist at path: " << buildScriptPath;

    }
}



void buildsetup::getRunFilePath(const QString& runfilepath, RunMode selectedMode, const QString &enginePath, const QString &projectPath, const QString &projectName)
{
    MainWindow MainWindowInstance;

    QString scriptName = "run.sh";
    #ifdef _WIN32
    scriptName = "run.bat";
    #endif
    QString runScriptPath = runfilepath + QDir::separator() + scriptName;
    qDebug() << "RunFilePath = " << runScriptPath;

    QFile runFile(runScriptPath);

    if (runFile.exists()) {
        qDebug() << "Run file exists.";

        QProcess runProcess;

        #ifdef _WIN32
        if (selectedMode == EditorMode) {
            runProcess.start("cmd.exe", QStringList() << "/c" << runScriptPath << "editor");
        } else if (selectedMode == GameMode) {
            runProcess.start("cmd.exe", QStringList() << "/c" << runScriptPath << "game");
        } else if (selectedMode == StandaloneMode) {
            runProcess.start("cmd.exe", QStringList() << "/c" << runScriptPath << "standalone");
        }
        #else
        if (selectedMode == EditorMode) {
            runProcess.start("bash", QStringList() << runScriptPath << "editor");
        } else if (selectedMode == GameMode) {
            runProcess.start("bash", QStringList() << runScriptPath << "game");
        } else if (selectedMode == StandaloneMode) {
            runProcess.start("bash", QStringList() << runScriptPath << "standalone");
        }
        #endif
        else { // Should match one of the modes
            qDebug() << "Invalid mode selected for run script.";
            return;
        }
        
        // Handle Sublime Text opening for EditorMode (outside of script execution)
        if (selectedMode == EditorMode) {
            #ifdef _WIN32
            qDebug() << "Sublime Text integration: Path configuration for Windows is required.";
            // Optionally, you could try to call openSublimeWithFolders with an empty sublimePath 
            // or a placeholder and let that function handle it, or just disable it.
            // For now, just a debug message.
            #else
            MainWindowInstance.openSublimeWithFolders(enginePath + QDir::separator() + "Source" + QDir::separator() + "Runtime",
                                       projectPath + QDir::separator() + projectName + QDir::separator() + "Source",
                                       "/opt/sublime_text/sublime_text");
            #endif
        }


        runProcess.waitForFinished(-1);

        QString runOutput = runProcess.readAllStandardOutput();
        QString runError = runProcess.readAllStandardError();
        qDebug() << "Run Script Output:\n" << runOutput;
        qDebug() << "Run Script Error:\n" << runError;
    } else {
        qDebug() << "Run file does not exist at path: " << runScriptPath;
    }
}




