// projectjsongenerator.cpp

#include "projectjsongenerator.h"
#include "qjsondocument.h"
#include <QDebug>
#include <QDir>
#include <nlohmann/json.hpp>

ProjectGenerator::ProjectGenerator()
{
    // Constructor logic, if needed
}

void ProjectGenerator::createFoldersAndFiles(const QString& jsonFilePath, const QString& basePath)
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
        }
    }
}
