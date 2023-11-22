#ifndef PROJECTJSONGENERATOR_H
#define PROJECTJSONGENERATOR_H

#include <QJsonObject>

class ProjectGenerator
{
public:
    ProjectGenerator();

    void createFoldersAndFiles(const QString& jsonFilePath, const QString& basePath,const QString project_name);
    void createStructure (const QJsonObject& jsonObject, const QString& basePath, const QString& project_name)  ;

private:


    void printJsonStructure(const QJsonObject& jsonObject, const QString& basePath);
    QString replaceprojectname(const QString& input, const QString& project_name);
    QString Replace_Engine_Path(const QString& input, const QString& project_path);
    QString Replace_Project_Path(const QString& input, const QString& project_path);


};

#endif // PROJECTJSONGENERATOR_H
