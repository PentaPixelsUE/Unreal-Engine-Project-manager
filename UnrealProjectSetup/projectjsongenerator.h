#ifndef PROJECTJSONGENERATOR_H
#define PROJECTJSONGENERATOR_H

#include <QJsonObject>

class ProjectGenerator
{
public:
    ProjectGenerator();

    // Function to create folders and files based on the JSON structure
    void createFoldersAndFiles(const QJsonObject& json, const QString& basePath);
};

#endif // PROJECTJSONGENERATOR_H
