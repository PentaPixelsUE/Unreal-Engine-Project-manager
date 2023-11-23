#include "buildsetup.h"
#include "qdir.h"
#include <QProcess>
#include <QDebug>
#include <QFile>

buildsetup::buildsetup()
{
    // Constructor implementation, if needed
}

void buildsetup::getBuildandrunFilePath(const QString& buildfilepath, const QString& runfilepath)
{
    // Function implementation using buildfilepath
    qDebug() << "ProjectPath = " << buildfilepath;

    // Construct the full path to the build.sh and run.sh files
    QString buildfile = buildfilepath + QDir::separator() + "build.sh";
    QString runfile = runfilepath + QDir::separator() + "run.sh";

    qDebug() << "BuildFilePath = " << buildfile;
    qDebug() << "RunFilePath = " << runfile;

    // Check if the build file exists
    QFile buildFile(buildfile);
    if (buildFile.exists()) {
        // Build file exists, proceed with your logic
        qDebug() << "Build file exists.";
        QProcess buildProcess;
        buildProcess.start("bash", QStringList() << buildfile);
        buildProcess.waitForFinished(-1);
        QString buildOutput = buildProcess.readAllStandardOutput();
        QString buildError = buildProcess.readAllStandardError();

        qDebug() << "Build Script Output:\n" << buildOutput;
        qDebug() << "Build Script Error:\n" << buildError;
    } else {
        // Build file doesn't exist, handle the exception
        qDebug() << "Build file does not exist.";
        // You can throw an exception or handle the situation as per your application's needs
        // For example, you could emit a signal or show an error message.
    }

    // Check if the run file exists
    QFile runFile(runfile);
    if (runFile.exists()) {
        // Run file exists, proceed with your logic
        qDebug() << "Run file exists.";
        QProcess runProcess;
        runProcess.start("bash", QStringList() << runfile);
        runProcess.waitForFinished(-1);
        QString runOutput = runProcess.readAllStandardOutput();
        QString runError = runProcess.readAllStandardError();

        qDebug() << "Run Script Output:\n" << runOutput;
        qDebug() << "Run Script Error:\n" << runError;
    } else {
        // Run file doesn't exist, handle the exception
        qDebug() << "Run file does not exist.";
        // You can throw an exception or handle the situation as per your application's needs
        // For example, you could emit a signal or show an error message.
    }
}
