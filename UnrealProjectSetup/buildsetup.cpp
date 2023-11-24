#include "buildsetup.h"
#include "mainwindow.h"
#include "qdir.h"
#include <QProcess>
#include <QDebug>
#include <QFile>

buildsetup::buildsetup()
{
    // Constructor implementation, if needed
}



void buildsetup::getBuildFilePath(const QString& buildfilepath)
{
    // Function implementation using buildfilepath
    qDebug() << "ProjectPath = " << buildfilepath;

    // Construct the full path to the build.sh and run.sh files
    QString buildfile = buildfilepath + QDir::separator() + "build.sh";

    qDebug() << "BuildFilePath = " << buildfile;


    // Check if the build file exists
    QFile buildFile(buildfile);
    if (buildFile.exists()) {

        qDebug() << "Build file exists.";
        QProcess buildProcess;
        buildProcess.start("bash", QStringList() << buildfile);
        buildProcess.waitForFinished(-1);
        QString buildOutput = buildProcess.readAllStandardOutput();
        QString buildError = buildProcess.readAllStandardError();

        qDebug() << "Build Script Output:\n" << buildOutput;
        qDebug() << "Build Script Error:\n" << buildError;
    } else {

        qDebug() << "Build file does not exist.";

    }
}



void buildsetup::getRunFilePath(const QString& runfilepath, RunMode selectedMode)
{



    QString runfile = runfilepath + QDir::separator() + "run.sh";
    qDebug() << "RunFilePath = " << runfile;

    QFile runFile(runfile);

    if (runFile.exists()) {
        qDebug() << "Run file exists.";

        QProcess runProcess;


        switch (selectedMode) {
        case GameMode:
            runProcess.start("bash", QStringList() << runfile<<"game");
            break;
        case EditorMode:
            runProcess.start("bash", QStringList() << runfile << "editor");
            break;
        case StandaloneMode:

            runProcess.start("bash", QStringList() << runfile << "standalone");



            break;
        default:
            qDebug() << "Invalid mode selected.";
            return;
        }

        runProcess.waitForFinished(-1);

        QString runOutput = runProcess.readAllStandardOutput();
        QString runError = runProcess.readAllStandardError();
        qDebug() << "Run Script Output:\n" << runOutput;
        qDebug() << "Run Script Error:\n" << runError;
    } else {
        qDebug() << "Run file does not exist.";
    }
}


bool buildsetup::doesConfigFolderExist(const QString& projectPath,const QString& projectName)
{
    QDir configFolder(projectPath+ QDir::separator()+projectName + QDir::separator() + "Config");
    return configFolder.exists();
}



