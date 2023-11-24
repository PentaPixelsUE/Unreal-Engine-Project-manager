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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *Project_Path_Hbox;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *Project_Path_Label;
    QLabel *UE_Source_Path_Label;
    QLabel *ProjectName;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *Project_Path_Txt;
    QLineEdit *UE_Source_Path_Txt;
    QLineEdit *Project_Name_Txt;
    QSpacerItem *verticalSpacer_6;
    QLabel *Project_Name_Error;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QPushButton *Project_Path_Browse_Btn;
    QPushButton *UE_Source_Path_Browse_Btn;
    QPushButton *Generate_Project_Files_Btn;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Build_Config_Lbl;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *Editor_Mode_Tick;
    QRadioButton *Standalone_Mode_Tick;
    QRadioButton *Game_Mode_Tick;
    QSpacerItem *horizontalSpacer;
    QCheckBox *Open_Sublime_CheckBox;
    QPushButton *Run_Btn;
    QPushButton *Build_Btn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Standalone_Warning_Lbl;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("color:rgb(26, 95, 180)"));
        Project_Path_Hbox = new QWidget(MainWindow);
        Project_Path_Hbox->setObjectName(QString::fromUtf8("Project_Path_Hbox"));
        formLayout = new QFormLayout(Project_Path_Hbox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        Project_Path_Label = new QLabel(Project_Path_Hbox);
        Project_Path_Label->setObjectName(QString::fromUtf8("Project_Path_Label"));
        Project_Path_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        verticalLayout_3->addWidget(Project_Path_Label);

        UE_Source_Path_Label = new QLabel(Project_Path_Hbox);
        UE_Source_Path_Label->setObjectName(QString::fromUtf8("UE_Source_Path_Label"));
        UE_Source_Path_Label->setMinimumSize(QSize(150, 34));
        UE_Source_Path_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        verticalLayout_3->addWidget(UE_Source_Path_Label);

        ProjectName = new QLabel(Project_Path_Hbox);
        ProjectName->setObjectName(QString::fromUtf8("ProjectName"));
        ProjectName->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        verticalLayout_3->addWidget(ProjectName);

        verticalSpacer_8 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_8);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_7 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7);

        Project_Path_Txt = new QLineEdit(Project_Path_Hbox);
        Project_Path_Txt->setObjectName(QString::fromUtf8("Project_Path_Txt"));
        Project_Path_Txt->setMinimumSize(QSize(0, 34));
        Project_Path_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: #282c34;\n"
"  border-radius: 5px;\n"
"  border: 1px solid #40444b;\n"
"  color: #fff;\n"
"  padding: 5px 10px;\n"
"  font-size: 14px;\n"
"}"));
        Project_Path_Txt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(Project_Path_Txt);

        UE_Source_Path_Txt = new QLineEdit(Project_Path_Hbox);
        UE_Source_Path_Txt->setObjectName(QString::fromUtf8("UE_Source_Path_Txt"));
        UE_Source_Path_Txt->setMinimumSize(QSize(0, 34));
        UE_Source_Path_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: #282c34;\n"
"  border-radius: 5px;\n"
"  border: 1px solid #40444b;\n"
"  color: #fff;\n"
"  padding: 5px 10px;\n"
"  font-size: 14px;\n"
"}"));

        verticalLayout_2->addWidget(UE_Source_Path_Txt);

        Project_Name_Txt = new QLineEdit(Project_Path_Hbox);
        Project_Name_Txt->setObjectName(QString::fromUtf8("Project_Name_Txt"));
        Project_Name_Txt->setMinimumSize(QSize(0, 34));
        Project_Name_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: #282c34;\n"
"  border-radius: 5px;\n"
"  border: 1px solid #40444b;\n"
"  color: #fff;\n"
"  padding: 5px 10px;\n"
"  font-size: 14px;\n"
"}"));
        Project_Name_Txt->setInputMethodHints(Qt::ImhLatinOnly);

        verticalLayout_2->addWidget(Project_Name_Txt);

        verticalSpacer_6 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        Project_Name_Error = new QLabel(Project_Path_Hbox);
        Project_Name_Error->setObjectName(QString::fromUtf8("Project_Name_Error"));
        Project_Name_Error->setMinimumSize(QSize(0, 0));
        Project_Name_Error->setBaseSize(QSize(0, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Project_Name_Error->setFont(font);
        Project_Name_Error->setStyleSheet(QString::fromUtf8("color: red;"));

        verticalLayout_2->addWidget(Project_Name_Error);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        verticalSpacer_5 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        Project_Path_Browse_Btn = new QPushButton(Project_Path_Hbox);
        Project_Path_Browse_Btn->setObjectName(QString::fromUtf8("Project_Path_Browse_Btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Project_Path_Browse_Btn->sizePolicy().hasHeightForWidth());
        Project_Path_Browse_Btn->setSizePolicy(sizePolicy1);
        Project_Path_Browse_Btn->setMinimumSize(QSize(146, 34));
        Project_Path_Browse_Btn->setSizeIncrement(QSize(0, 0));
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
        Project_Path_Browse_Btn->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(Project_Path_Browse_Btn);

        UE_Source_Path_Browse_Btn = new QPushButton(Project_Path_Hbox);
        UE_Source_Path_Browse_Btn->setObjectName(QString::fromUtf8("UE_Source_Path_Browse_Btn"));
        sizePolicy1.setHeightForWidth(UE_Source_Path_Browse_Btn->sizePolicy().hasHeightForWidth());
        UE_Source_Path_Browse_Btn->setSizePolicy(sizePolicy1);
        UE_Source_Path_Browse_Btn->setMinimumSize(QSize(146, 34));
        UE_Source_Path_Browse_Btn->setSizeIncrement(QSize(0, 0));
        UE_Source_Path_Browse_Btn->setBaseSize(QSize(0, 0));
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
        UE_Source_Path_Browse_Btn->setIconSize(QSize(16, 18));

        verticalLayout->addWidget(UE_Source_Path_Browse_Btn);

        Generate_Project_Files_Btn = new QPushButton(Project_Path_Hbox);
        Generate_Project_Files_Btn->setObjectName(QString::fromUtf8("Generate_Project_Files_Btn"));
        sizePolicy1.setHeightForWidth(Generate_Project_Files_Btn->sizePolicy().hasHeightForWidth());
        Generate_Project_Files_Btn->setSizePolicy(sizePolicy1);
        Generate_Project_Files_Btn->setMinimumSize(QSize(146, 34));
        Generate_Project_Files_Btn->setSizeIncrement(QSize(0, 0));
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

        verticalLayout->addWidget(Generate_Project_Files_Btn);

        verticalSpacer_4 = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Build_Config_Lbl = new QLabel(Project_Path_Hbox);
        Build_Config_Lbl->setObjectName(QString::fromUtf8("Build_Config_Lbl"));
        Build_Config_Lbl->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(Build_Config_Lbl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Editor_Mode_Tick = new QRadioButton(Project_Path_Hbox);
        Editor_Mode_Tick->setObjectName(QString::fromUtf8("Editor_Mode_Tick"));
        Editor_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(97, 53, 131);\n"
"  font-family: 'Roboto', sans-serif; \n"
"  font-size: 20px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(Editor_Mode_Tick);

        Standalone_Mode_Tick = new QRadioButton(Project_Path_Hbox);
        Standalone_Mode_Tick->setObjectName(QString::fromUtf8("Standalone_Mode_Tick"));
        Standalone_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(Standalone_Mode_Tick);

        Game_Mode_Tick = new QRadioButton(Project_Path_Hbox);
        Game_Mode_Tick->setObjectName(QString::fromUtf8("Game_Mode_Tick"));
        Game_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(Game_Mode_Tick);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Open_Sublime_CheckBox = new QCheckBox(Project_Path_Hbox);
        Open_Sublime_CheckBox->setObjectName(QString::fromUtf8("Open_Sublime_CheckBox"));

        horizontalLayout_2->addWidget(Open_Sublime_CheckBox);

        Run_Btn = new QPushButton(Project_Path_Hbox);
        Run_Btn->setObjectName(QString::fromUtf8("Run_Btn"));
        Run_Btn->setMinimumSize(QSize(146, 34));
        Run_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
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

        horizontalLayout_2->addWidget(Run_Btn);

        Build_Btn = new QPushButton(Project_Path_Hbox);
        Build_Btn->setObjectName(QString::fromUtf8("Build_Btn"));
        Build_Btn->setMinimumSize(QSize(146, 34));
        Build_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
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

        horizontalLayout_2->addWidget(Build_Btn);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(158, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        Standalone_Warning_Lbl = new QLabel(Project_Path_Hbox);
        Standalone_Warning_Lbl->setObjectName(QString::fromUtf8("Standalone_Warning_Lbl"));
        Standalone_Warning_Lbl->setStyleSheet(QString::fromUtf8("color: red;"));

        horizontalLayout_3->addWidget(Standalone_Warning_Lbl);


        verticalLayout_4->addLayout(horizontalLayout_3);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_4);

        MainWindow->setCentralWidget(Project_Path_Hbox);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 22));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Project_Path_Label->setText(QCoreApplication::translate("MainWindow", "Project Path", nullptr));
        UE_Source_Path_Label->setText(QCoreApplication::translate("MainWindow", "Engine Path", nullptr));
        ProjectName->setText(QCoreApplication::translate("MainWindow", "Project Name     ", nullptr));
        UE_Source_Path_Txt->setText(QCoreApplication::translate("MainWindow", "PLease Select the '~/Engine' Folder", nullptr));
        Project_Name_Error->setText(QString());
        Project_Path_Browse_Btn->setText(QCoreApplication::translate("MainWindow", "Set Project Path", nullptr));
        UE_Source_Path_Browse_Btn->setText(QCoreApplication::translate("MainWindow", "Engine Path", nullptr));
        Generate_Project_Files_Btn->setText(QCoreApplication::translate("MainWindow", "Setup Project Files", nullptr));
        Build_Config_Lbl->setText(QCoreApplication::translate("MainWindow", "Mode", nullptr));
        Editor_Mode_Tick->setText(QCoreApplication::translate("MainWindow", "Editor", nullptr));
        Standalone_Mode_Tick->setText(QCoreApplication::translate("MainWindow", "Standalone", nullptr));
        Game_Mode_Tick->setText(QCoreApplication::translate("MainWindow", "Game", nullptr));
        Open_Sublime_CheckBox->setText(QCoreApplication::translate("MainWindow", "Sublime", nullptr));
        Run_Btn->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        Build_Btn->setText(QCoreApplication::translate("MainWindow", "Build", nullptr));
        Standalone_Warning_Lbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
