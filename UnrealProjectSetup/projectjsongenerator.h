#ifndef PROJECTJSONGENERATOR_H
#define PROJECTJSONGENERATOR_H

#include <QJsonObject>

class ProjectGenerator
{
public:
    ProjectGenerator();

    // Function to create folders and files based on the JSON structure
    void createFoldersAndFiles(const QString& jsonFilePath, const QString& basePath);

private:
    // Declare the printJsonStructure function as a private member
    void printJsonStructure(const QJsonObject& jsonObject, const QString& basePath);
};

#endif // PROJECTJSONGENERATOR_H
