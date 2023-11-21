// mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qjsonobject.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QJsonObject jsonObject;
    QString selectedProjectFolderPath;


private slots:
    void onProjectPathBrowseBtnClicker();
    void onEngineSourcePathBtnClicker();
    void onSetupProjectFilesBtnClicker();
    void validateProjectName();
    void updateErrorLabel(const QString& errorMessage);  // Add this line
};

#endif // MAINWINDOW_H
