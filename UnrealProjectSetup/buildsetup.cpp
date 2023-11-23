#include "buildsetup.h"
#include <QProcess>
#include <QDebug>

buildsetup::buildsetup()
{
    // Constructor implementation, if needed
}

void buildsetup::executeBuildAndRunScripts(const QString& buildScriptPath, const QString& runScriptPath)
{
    QProcess process;

    // Execute the build script
    process.start("bash", QStringList() << buildScriptPath);
    process.waitForFinished(-1);
    QString buildOutput = process.readAllStandardOutput();
    QString buildError = process.readAllStandardError();

    qDebug() << "Build Script Output:\n" << buildOutput;
    qDebug() << "Build Script Error:\n" << buildError;

    // Execute the run script
    process.start("bash", QStringList() << runScriptPath);
    process.waitForFinished(-1);
    QString runOutput = process.readAllStandardOutput();
    QString runError = process.readAllStandardError();

    qDebug() << "Run Script Output:\n" << runOutput;
    qDebug() << "Run Script Error:\n" << runError;
}
