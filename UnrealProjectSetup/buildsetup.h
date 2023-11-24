#ifndef BUILDSETUP_H
#define BUILDSETUP_H
#include "mainwindow.h"
#include <QString>

class buildsetup
{
public:
    buildsetup();

        void getRunFilePath(const QString& runfilepath, RunMode selectedMode);
        void getBuildFilePath(const QString& buildfilepath);



private:



};

#endif // BUILDSETUP_H
