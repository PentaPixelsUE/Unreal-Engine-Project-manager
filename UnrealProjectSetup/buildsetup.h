#ifndef BUILDSETUP_H
#define BUILDSETUP_H


#include "mainwindow.h"
#include "qprocess.h"
#include <QString>

class buildsetup
{
public:
    buildsetup();



    void getRunFilePath(const QString& runfilepath, RunMode selectedMode);
    void getBuildFilePath(const QString& buildfilepath);
    bool  doesConfigFolderExist(const QString& projectPath,const QString& projectName);

private:
    QProcess runProcess;


};

#endif // BUILDSETUP_H
