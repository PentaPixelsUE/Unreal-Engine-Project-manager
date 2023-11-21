#include <iostream>
#include <fstream>
#include <filesystem>
#include <nlohmann/json.hpp>
#include "projectjsongenerator.h"
#include "qjsondocument.h"
#include <QDir>
#include <QDebug>

using json = nlohmann::json;
namespace fs = std::filesystem;

ProjectGenerator::ProjectGenerator()
{
    // Constructor logic, if needed
}

void ProjectGenerator::createFoldersAndFiles(const QJsonObject& json, const QString& basePath)
{
    // Your logic to create folders and files based on the JSON structure
    // Replace ~Project_Name~ with the actual project name

    qDebug() << "Creating folders and files in: " << basePath;

    // Example: Print the JSON structure for demonstration
    qDebug() << "JSON Structure:";
    qDebug().noquote() << QJsonDocument(json).toJson(QJsonDocument::Indented);
}
