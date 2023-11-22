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
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *MainLayout;
    QHBoxLayout *ProjectPath_Hbox;
    QLabel *Project_Path_Label;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *Project_Path_Txt;
    QPushButton *Project_Path_Browse_Btn;
    QHBoxLayout *UE_Source_Path_Hbox;
    QLabel *UE_Source_Path_Label;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *UE_Source_Path_Txt;
    QPushButton *UE_Source_Path_Browse_Btn;
    QHBoxLayout *Project_Name_HBOX;
    QLabel *ProjectName;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *Project_Name_Txt;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *Error_Msg_HBOX;
    QSpacerItem *horizontalSpacer_7;
    QLabel *Project_Name_Error;
    QHBoxLayout *Button_Build_and_run_HBOX;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Generate_Project_Files_Btn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Build_And_Run_Btn;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(878, 285);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0)"));
        Project_Path_Hbox = new QWidget(MainWindow);
        Project_Path_Hbox->setObjectName(QString::fromUtf8("Project_Path_Hbox"));
        verticalLayout_2 = new QVBoxLayout(Project_Path_Hbox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MainLayout = new QVBoxLayout();
        MainLayout->setSpacing(10);
        MainLayout->setObjectName(QString::fromUtf8("MainLayout"));
        MainLayout->setContentsMargins(-1, -1, -1, 0);
        ProjectPath_Hbox = new QHBoxLayout();
        ProjectPath_Hbox->setSpacing(10);
        ProjectPath_Hbox->setObjectName(QString::fromUtf8("ProjectPath_Hbox"));
        ProjectPath_Hbox->setSizeConstraint(QLayout::SetDefaultConstraint);
        ProjectPath_Hbox->setContentsMargins(-1, 0, -1, 0);
        Project_Path_Label = new QLabel(Project_Path_Hbox);
        Project_Path_Label->setObjectName(QString::fromUtf8("Project_Path_Label"));
        Project_Path_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: #007bff; /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        ProjectPath_Hbox->addWidget(Project_Path_Label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProjectPath_Hbox->addItem(horizontalSpacer_8);

        Project_Path_Txt = new QLineEdit(Project_Path_Hbox);
        Project_Path_Txt->setObjectName(QString::fromUtf8("Project_Path_Txt"));
        Project_Path_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: #282c34;\n"
"  border-radius: 5px;\n"
"  border: 1px solid #40444b;\n"
"  color: #fff;\n"
"  padding: 5px 10px;\n"
"  font-size: 14px;\n"
"}"));
        Project_Path_Txt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        ProjectPath_Hbox->addWidget(Project_Path_Txt);

        Project_Path_Browse_Btn = new QPushButton(Project_Path_Hbox);
        Project_Path_Browse_Btn->setObjectName(QString::fromUtf8("Project_Path_Browse_Btn"));
        Project_Path_Browse_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"  background-color: #282c34;\n"
"  border-radius: 5px;\n"
"  border: 1px solid #40444b;\n"
"  color: #fff;\n"
"  padding: 5px 10px;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #32363b;\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #40444b;\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        ProjectPath_Hbox->addWidget(Project_Path_Browse_Btn);

        ProjectPath_Hbox->setStretch(0, 5);
        ProjectPath_Hbox->setStretch(2, 30);
        ProjectPath_Hbox->setStretch(3, 5);

        MainLayout->addLayout(ProjectPath_Hbox);

        UE_Source_Path_Hbox = new QHBoxLayout();
        UE_Source_Path_Hbox->setSpacing(10);
        UE_Source_Path_Hbox->setObjectName(QString::fromUtf8("UE_Source_Path_Hbox"));
        UE_Source_Path_Hbox->setSizeConstraint(QLayout::SetMaximumSize);
        UE_Source_Path_Label = new QLabel(Project_Path_Hbox);
        UE_Source_Path_Label->setObjectName(QString::fromUtf8("UE_Source_Path_Label"));
        UE_Source_Path_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: #007bff; /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        UE_Source_Path_Hbox->addWidget(UE_Source_Path_Label);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        UE_Source_Path_Hbox->addItem(horizontalSpacer_9);

        UE_Source_Path_Txt = new QLineEdit(Project_Path_Hbox);
        UE_Source_Path_Txt->setObjectName(QString::fromUtf8("UE_Source_Path_Txt"));
        UE_Source_Path_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: #282c34;\n"
"  border-radius: 5px;\n"
"  border: 1px solid #40444b;\n"
"  color: #fff;\n"
"  padding: 5px 10px;\n"
"  font-size: 14px;\n"
"}"));

        UE_Source_Path_Hbox->addWidget(UE_Source_Path_Txt);

        UE_Source_Path_Browse_Btn = new QPushButton(Project_Path_Hbox);
        UE_Source_Path_Browse_Btn->setObjectName(QString::fromUtf8("UE_Source_Path_Browse_Btn"));
        UE_Source_Path_Browse_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"  background-color: #282c34;\n"
"  border-radius: 5px;\n"
"  border: 1px solid #40444b;\n"
"  color: #fff;\n"
"  padding: 5px 10px;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #32363b;\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #40444b;\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        UE_Source_Path_Hbox->addWidget(UE_Source_Path_Browse_Btn);

        UE_Source_Path_Hbox->setStretch(2, 35);
        UE_Source_Path_Hbox->setStretch(3, 14);

        MainLayout->addLayout(UE_Source_Path_Hbox);

        Project_Name_HBOX = new QHBoxLayout();
        Project_Name_HBOX->setObjectName(QString::fromUtf8("Project_Name_HBOX"));
        ProjectName = new QLabel(Project_Path_Hbox);
        ProjectName->setObjectName(QString::fromUtf8("ProjectName"));
        ProjectName->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(38, 162, 105); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Project_Name_HBOX->addWidget(ProjectName);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Project_Name_HBOX->addItem(horizontalSpacer_10);

        Project_Name_Txt = new QLineEdit(Project_Path_Hbox);
        Project_Name_Txt->setObjectName(QString::fromUtf8("Project_Name_Txt"));
        Project_Name_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: #282c34;\n"
"  border-radius: 5px;\n"
"  border: 1px solid #40444b;\n"
"  color: #fff;\n"
"  padding: 5px 10px;\n"
"  font-size: 14px;\n"
"}"));
        Project_Name_Txt->setInputMethodHints(Qt::ImhLatinOnly);

        Project_Name_HBOX->addWidget(Project_Name_Txt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Project_Name_HBOX->addItem(horizontalSpacer_3);

        Project_Name_HBOX->setStretch(1, 6);
        Project_Name_HBOX->setStretch(2, 30);
        Project_Name_HBOX->setStretch(3, 32);

        MainLayout->addLayout(Project_Name_HBOX);

        Error_Msg_HBOX = new QHBoxLayout();
        Error_Msg_HBOX->setObjectName(QString::fromUtf8("Error_Msg_HBOX"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Error_Msg_HBOX->addItem(horizontalSpacer_7);

        Project_Name_Error = new QLabel(Project_Path_Hbox);
        Project_Name_Error->setObjectName(QString::fromUtf8("Project_Name_Error"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Project_Name_Error->setFont(font);
        Project_Name_Error->setStyleSheet(QString::fromUtf8("color: red;"));

        Error_Msg_HBOX->addWidget(Project_Name_Error);

        Error_Msg_HBOX->setStretch(0, 1);
        Error_Msg_HBOX->setStretch(1, 5);

        MainLayout->addLayout(Error_Msg_HBOX);

        Button_Build_and_run_HBOX = new QHBoxLayout();
        Button_Build_and_run_HBOX->setObjectName(QString::fromUtf8("Button_Build_and_run_HBOX"));
        Button_Build_and_run_HBOX->setContentsMargins(10, 10, 10, 10);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Button_Build_and_run_HBOX->addItem(horizontalSpacer_2);

        Generate_Project_Files_Btn = new QPushButton(Project_Path_Hbox);
        Generate_Project_Files_Btn->setObjectName(QString::fromUtf8("Generate_Project_Files_Btn"));
        Generate_Project_Files_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #282c34;\n"
"    border-radius: 5px;\n"
"    border: 1px solid #40444b;\n"
"    color: #fff;\n"
"    padding: 5px 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32363b;\n"
"    border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #40444b;\n"
"    border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #52565a;\n"
"    border-color: #64686c;\n"
"    color: #888888;\n"
"}\n"
""));

        Button_Build_and_run_HBOX->addWidget(Generate_Project_Files_Btn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Button_Build_and_run_HBOX->addItem(horizontalSpacer_5);

        Build_And_Run_Btn = new QPushButton(Project_Path_Hbox);
        Build_And_Run_Btn->setObjectName(QString::fromUtf8("Build_And_Run_Btn"));
        Build_And_Run_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #282c34;\n"
"    border-radius: 5px;\n"
"    border: 1px solid #40444b;\n"
"    color: #fff;\n"
"    padding: 5px 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32363b;\n"
"    border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #40444b;\n"
"    border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #52565a;\n"
"    border-color: #64686c;\n"
"    color: #888888;\n"
"}\n"
""));

        Button_Build_and_run_HBOX->addWidget(Build_And_Run_Btn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Button_Build_and_run_HBOX->addItem(horizontalSpacer_6);


        MainLayout->addLayout(Button_Build_and_run_HBOX);

        MainLayout->setStretch(0, 1);
        MainLayout->setStretch(1, 1);
        MainLayout->setStretch(2, 1);

        horizontalLayout->addLayout(MainLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(Project_Path_Hbox);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 878, 22));
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
        Project_Path_Label->setText(QCoreApplication::translate("MainWindow", "Project Path      ", nullptr));
        Project_Path_Browse_Btn->setText(QCoreApplication::translate("MainWindow", "Set Project Path", nullptr));
        UE_Source_Path_Label->setText(QCoreApplication::translate("MainWindow", "UE Source Path", nullptr));
        UE_Source_Path_Browse_Btn->setText(QCoreApplication::translate("MainWindow", "Engine Path", nullptr));
        ProjectName->setText(QCoreApplication::translate("MainWindow", "Project Name  ", nullptr));
        Project_Name_Error->setText(QString());
        Generate_Project_Files_Btn->setText(QCoreApplication::translate("MainWindow", "Setup Project Files", nullptr));
        Build_And_Run_Btn->setText(QCoreApplication::translate("MainWindow", "Build and Run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
