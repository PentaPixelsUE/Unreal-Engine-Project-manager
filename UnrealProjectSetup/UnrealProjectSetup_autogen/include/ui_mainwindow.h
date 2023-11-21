/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *Project_Path_Hbox;
    QPushButton *Generate_Project_Files_Btn;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *MainLayout;
    QHBoxLayout *ProjectPath_Hbox;
    QLabel *Project_Path_Label;
    QLineEdit *Project_Path_Txt;
    QPushButton *Project_Path_Browse_Btn;
    QHBoxLayout *UE_Source_Path_Hbox;
    QLabel *UE_Source_Path_Label;
    QLineEdit *UE_Source_Path_Txt;
    QPushButton *UE_Source_Path_Browse_Btn;
    QHBoxLayout *Project_Name_HBOX;
    QLabel *ProjectName;
    QLineEdit *Project_Name_Txt;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *Project_Name_Error;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1239, 800);
        Project_Path_Hbox = new QWidget(MainWindow);
        Project_Path_Hbox->setObjectName(QString::fromUtf8("Project_Path_Hbox"));
        Generate_Project_Files_Btn = new QPushButton(Project_Path_Hbox);
        Generate_Project_Files_Btn->setObjectName(QString::fromUtf8("Generate_Project_Files_Btn"));
        Generate_Project_Files_Btn->setGeometry(QRect(490, 430, 171, 25));
        horizontalLayoutWidget_3 = new QWidget(Project_Path_Hbox);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 30, 1061, 260));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MainLayout = new QVBoxLayout();
        MainLayout->setSpacing(50);
        MainLayout->setObjectName(QString::fromUtf8("MainLayout"));
        MainLayout->setContentsMargins(-1, -1, -1, 0);
        ProjectPath_Hbox = new QHBoxLayout();
        ProjectPath_Hbox->setSpacing(6);
        ProjectPath_Hbox->setObjectName(QString::fromUtf8("ProjectPath_Hbox"));
        ProjectPath_Hbox->setSizeConstraint(QLayout::SetDefaultConstraint);
        ProjectPath_Hbox->setContentsMargins(-1, 5, -1, 5);
        Project_Path_Label = new QLabel(horizontalLayoutWidget_3);
        Project_Path_Label->setObjectName(QString::fromUtf8("Project_Path_Label"));

        ProjectPath_Hbox->addWidget(Project_Path_Label);

        Project_Path_Txt = new QLineEdit(horizontalLayoutWidget_3);
        Project_Path_Txt->setObjectName(QString::fromUtf8("Project_Path_Txt"));

        ProjectPath_Hbox->addWidget(Project_Path_Txt);

        Project_Path_Browse_Btn = new QPushButton(horizontalLayoutWidget_3);
        Project_Path_Browse_Btn->setObjectName(QString::fromUtf8("Project_Path_Browse_Btn"));

        ProjectPath_Hbox->addWidget(Project_Path_Browse_Btn);

        ProjectPath_Hbox->setStretch(1, 30);
        ProjectPath_Hbox->setStretch(2, 11);

        MainLayout->addLayout(ProjectPath_Hbox);

        UE_Source_Path_Hbox = new QHBoxLayout();
        UE_Source_Path_Hbox->setObjectName(QString::fromUtf8("UE_Source_Path_Hbox"));
        UE_Source_Path_Label = new QLabel(horizontalLayoutWidget_3);
        UE_Source_Path_Label->setObjectName(QString::fromUtf8("UE_Source_Path_Label"));

        UE_Source_Path_Hbox->addWidget(UE_Source_Path_Label);

        UE_Source_Path_Txt = new QLineEdit(horizontalLayoutWidget_3);
        UE_Source_Path_Txt->setObjectName(QString::fromUtf8("UE_Source_Path_Txt"));

        UE_Source_Path_Hbox->addWidget(UE_Source_Path_Txt);

        UE_Source_Path_Browse_Btn = new QPushButton(horizontalLayoutWidget_3);
        UE_Source_Path_Browse_Btn->setObjectName(QString::fromUtf8("UE_Source_Path_Browse_Btn"));

        UE_Source_Path_Hbox->addWidget(UE_Source_Path_Browse_Btn);

        UE_Source_Path_Hbox->setStretch(1, 30);
        UE_Source_Path_Hbox->setStretch(2, 11);

        MainLayout->addLayout(UE_Source_Path_Hbox);

        Project_Name_HBOX = new QHBoxLayout();
        Project_Name_HBOX->setObjectName(QString::fromUtf8("Project_Name_HBOX"));
        ProjectName = new QLabel(horizontalLayoutWidget_3);
        ProjectName->setObjectName(QString::fromUtf8("ProjectName"));

        Project_Name_HBOX->addWidget(ProjectName);

        Project_Name_Txt = new QLineEdit(horizontalLayoutWidget_3);
        Project_Name_Txt->setObjectName(QString::fromUtf8("Project_Name_Txt"));
        Project_Name_Txt->setInputMethodHints(Qt::ImhLatinOnly);

        Project_Name_HBOX->addWidget(Project_Name_Txt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Project_Name_HBOX->addItem(horizontalSpacer_3);

        Project_Name_HBOX->setStretch(1, 30);
        Project_Name_HBOX->setStretch(2, 11);

        MainLayout->addLayout(Project_Name_HBOX);


        horizontalLayout->addLayout(MainLayout);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 45);
        horizontalLayout->setStretch(2, 1);
        Project_Name_Error = new QLabel(Project_Path_Hbox);
        Project_Name_Error->setObjectName(QString::fromUtf8("Project_Name_Error"));
        Project_Name_Error->setGeometry(QRect(200, 300, 881, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Project_Name_Error->setFont(font);
        Project_Name_Error->setStyleSheet(QString::fromUtf8("color: red;"));
        MainWindow->setCentralWidget(Project_Path_Hbox);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1239, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Generate_Project_Files_Btn->setText(QCoreApplication::translate("MainWindow", "Setup Project Files", nullptr));
        Project_Path_Label->setText(QCoreApplication::translate("MainWindow", "Project Path      ", nullptr));
        Project_Path_Browse_Btn->setText(QCoreApplication::translate("MainWindow", "Set Project Path", nullptr));
        UE_Source_Path_Label->setText(QCoreApplication::translate("MainWindow", "UE Source Path", nullptr));
        UE_Source_Path_Browse_Btn->setText(QCoreApplication::translate("MainWindow", " Engine Path", nullptr));
        ProjectName->setText(QCoreApplication::translate("MainWindow", "Project Name   ", nullptr));
        Project_Name_Error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
