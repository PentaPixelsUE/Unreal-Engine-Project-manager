#ifndef BUILDSETUP_H
#define BUILDSETUP_H

#include <QString>

class buildsetup
{
public:
    buildsetup();

    // Add member functions here if needed
    void executeBuildAndRunScripts(const QString& buildScriptPath, const QString& runScriptPath);

private:
         // Add member variables or private helper functions here if needed
};

#endif // BUILDSETUP_H
