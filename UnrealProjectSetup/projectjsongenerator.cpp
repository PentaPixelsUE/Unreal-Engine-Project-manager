// projectjsongenerator.cpp
#include <fstream>
#include "projectjsongenerator.h"
#include "qjsondocument.h"
#include <QDebug>
#include <QDir>
#include <nlohmann/json.hpp>




ProjectGenerator::ProjectGenerator()
{
    // Constructor logic
}

void ProjectGenerator::createFoldersAndFiles(const QString& jsonFilePath, const QString& basePath, const QString project_name)
{
    qDebug() << "Creating folders and files in: " << basePath;

    // Read the JSON file
    QFile jsonFile(jsonFilePath);
    if (!jsonFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open JSON file:" << jsonFilePath;
        return;
    }

    // Read the contents of the JSON file
    QString jsonString = jsonFile.readAll();
    jsonFile.close();

    // Convert the JSON string to a QJsonDocument
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonString.toUtf8());

    // Check if the conversion was successful
    if (jsonDocument.isNull())
    {
        qDebug() << "Failed to parse JSON from file:" << jsonFilePath;
        return;
    }

    // Extract the JSON object from the document
    QJsonObject jsonObject = jsonDocument.object();

    // Print the JSON structure
    qDebug() << "JSON Structure:";
    qDebug().noquote() << QJsonDocument(jsonObject).toJson(QJsonDocument::Indented);

    // Call the printJsonStructure function
    printJsonStructure(jsonObject, basePath);
     createStructure(jsonObject, basePath, project_name);
}



void ProjectGenerator::printJsonStructure(const QJsonObject& jsonObject, const QString& basePath)
{
    // Iterate over the keys in the JSON object
    for (const auto& key : jsonObject.keys()) {
        // Combine the basePath with the current key
        QString currentPath = QDir::cleanPath(basePath + QDir::separator() + key);

        // Check if the current value is an object (folder)
        if (jsonObject[key].isObject()) {
            qDebug() << "Folder:" << currentPath;
            // Recursively call the function for the nested object
            printJsonStructure(jsonObject[key].toObject(), currentPath);
        } else {
            // Current value is not an object, so it's a file
            qDebug() << "File:" << currentPath;

            if (jsonObject[key].isString()) {
                // Print the file content
                qDebug().noquote() << "Contents:" << jsonObject[key].toString();
            }
        }
    }
}
void ProjectGenerator::createStructure(const QJsonObject& jsonObject, const QString& basePath, const QString& project_name)
{
    for (const auto& key : jsonObject.keys()) {
        QString currentPath = QDir::cleanPath(basePath + QDir::separator() + replaceprojectname(key, project_name));

        if (jsonObject[key].isObject()) {
            qDebug() << "Folder:" << currentPath;
            // Create the folder using QDir::mkpath
            QDir().mkpath(currentPath);
            createStructure(jsonObject[key].toObject(), currentPath, project_name);

        } else {
            qDebug() << "File:" << currentPath;
            // Create the file using QFile
            QFile file(currentPath);
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream stream(&file);
                if (jsonObject[key].isString()) {
                    stream << replaceprojectname(jsonObject[key].toString(), project_name);

                }
                file.close();
            } else {
                qDebug() << "Failed to create file:" << currentPath;
            }
        }
    }
}




QString ProjectGenerator::replaceprojectname(const QString& input, const QString& project_name)
{
    QString output = input;
    output.replace("~Project_Name~", project_name);
    return output;

}

QString ProjectGenerator::Replace_Engine_Path(const QString& input, const QString& engine_path)
{
    QString output = input;
    output.replace("~Engine-Path~", engine_path);
    return output;
}

QString ProjectGenerator::Replace_Project_Path(const QString& input, const QString& project_path)
{
    QString output = input;
    output.replace("~Project_Path~", project_path);
    return output;
}
