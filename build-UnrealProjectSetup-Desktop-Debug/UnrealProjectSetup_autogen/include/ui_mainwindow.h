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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *Project_Path_Hbox;
    QFormLayout *formLayout;
    QTabWidget *Main_Menu_Tabs;
    QWidget *Project_Structure_Tab;
    QHBoxLayout *horizontalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_6;
    QTreeWidget *treeWidget;
    QTreeView *treeView;
    QWidget *Build_Setup_Tab;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *Build_Setup_Frame;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *Build_Setup_VBOX;
    QHBoxLayout *Paths_HBOX;
    QVBoxLayout *Path_Labels_VBOX;
    QSpacerItem *verticalSpacer_3;
    QLabel *Project_Path_Label;
    QLabel *UE_Source_Path_Label;
    QLabel *Project_Name_Label;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *Input_Paths_VBOX;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *Project_Path_Txt;
    QLineEdit *UE_Source_Path_Txt;
    QLineEdit *Project_Name_Txt;
    QSpacerItem *verticalSpacer_6;
    QLabel *Project_Name_Error;
    QVBoxLayout *Build_SetupButtons_VBOX;
    QSpacerItem *verticalSpacer_5;
    QPushButton *Project_Path_Browse_Btn;
    QPushButton *UE_Source_Path_Browse_Btn;
    QPushButton *Generate_Project_Files_Btn;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *Modes_Build_Run_HBOX;
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
    QHBoxLayout *Standalone_Warning_HBOX;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Standalone_Warning_Lbl;
    QFrame *Plugins_Frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *PLugins_Lables_HBOX;
    QLabel *Plugins_Enabled_Lbl;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Plugins_Available_Lbl;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QScrollArea *Enabled_Plugins_Scroll_Area;
    QWidget *Enabled_Plugins_Area;
    QGridLayout *gridLayout;
    QListView *Enabled_Plugins_List;
    QVBoxLayout *Plugins_In_Out_Button_VBOX;
    QSpacerItem *verticalSpacer_10;
    QPushButton *To_Enable_Plugins_List;
    QSpacerItem *verticalSpacer_2;
    QPushButton *To_Disable_Plugins_Btn;
    QSpacerItem *verticalSpacer_9;
    QScrollArea *Disabled_Plugins_Scroll_Area;
    QWidget *Disabled_Pluginsl_Area;
    QGridLayout *gridLayout_2;
    QListView *Disabled_Plugins_List;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1045, 859);
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
        Main_Menu_Tabs = new QTabWidget(Project_Path_Hbox);
        Main_Menu_Tabs->setObjectName(QString::fromUtf8("Main_Menu_Tabs"));
        Main_Menu_Tabs->setTabPosition(QTabWidget::West);
        Main_Menu_Tabs->setTabShape(QTabWidget::Rounded);
        Main_Menu_Tabs->setDocumentMode(false);
        Main_Menu_Tabs->setTabsClosable(false);
        Main_Menu_Tabs->setMovable(true);
        Main_Menu_Tabs->setTabBarAutoHide(false);
        Project_Structure_Tab = new QWidget();
        Project_Structure_Tab->setObjectName(QString::fromUtf8("Project_Structure_Tab"));
        Project_Structure_Tab->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_5 = new QHBoxLayout(Project_Structure_Tab);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        scrollArea = new QScrollArea(Project_Structure_Tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 970, 773));
        horizontalLayout_6 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        treeWidget = new QTreeWidget(scrollAreaWidgetContents);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        horizontalLayout_6->addWidget(treeWidget);

        treeView = new QTreeView(scrollAreaWidgetContents);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        horizontalLayout_6->addWidget(treeView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);

        Main_Menu_Tabs->addTab(Project_Structure_Tab, QString());
        Build_Setup_Tab = new QWidget();
        Build_Setup_Tab->setObjectName(QString::fromUtf8("Build_Setup_Tab"));
        horizontalLayout_4 = new QHBoxLayout(Build_Setup_Tab);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        Build_Setup_Frame = new QFrame(Build_Setup_Tab);
        Build_Setup_Frame->setObjectName(QString::fromUtf8("Build_Setup_Frame"));
        Build_Setup_Frame->setFrameShape(QFrame::StyledPanel);
        Build_Setup_Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(Build_Setup_Frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Build_Setup_VBOX = new QVBoxLayout();
        Build_Setup_VBOX->setObjectName(QString::fromUtf8("Build_Setup_VBOX"));
        Paths_HBOX = new QHBoxLayout();
        Paths_HBOX->setObjectName(QString::fromUtf8("Paths_HBOX"));
        Path_Labels_VBOX = new QVBoxLayout();
        Path_Labels_VBOX->setObjectName(QString::fromUtf8("Path_Labels_VBOX"));
        verticalSpacer_3 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Path_Labels_VBOX->addItem(verticalSpacer_3);

        Project_Path_Label = new QLabel(Build_Setup_Frame);
        Project_Path_Label->setObjectName(QString::fromUtf8("Project_Path_Label"));
        Project_Path_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Path_Labels_VBOX->addWidget(Project_Path_Label);

        UE_Source_Path_Label = new QLabel(Build_Setup_Frame);
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

        Path_Labels_VBOX->addWidget(UE_Source_Path_Label);

        Project_Name_Label = new QLabel(Build_Setup_Frame);
        Project_Name_Label->setObjectName(QString::fromUtf8("Project_Name_Label"));
        Project_Name_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Path_Labels_VBOX->addWidget(Project_Name_Label);

        verticalSpacer_8 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Path_Labels_VBOX->addItem(verticalSpacer_8);


        Paths_HBOX->addLayout(Path_Labels_VBOX);

        Input_Paths_VBOX = new QVBoxLayout();
        Input_Paths_VBOX->setObjectName(QString::fromUtf8("Input_Paths_VBOX"));
        verticalSpacer_7 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Input_Paths_VBOX->addItem(verticalSpacer_7);

        Project_Path_Txt = new QLineEdit(Build_Setup_Frame);
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

        Input_Paths_VBOX->addWidget(Project_Path_Txt);

        UE_Source_Path_Txt = new QLineEdit(Build_Setup_Frame);
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

        Input_Paths_VBOX->addWidget(UE_Source_Path_Txt);

        Project_Name_Txt = new QLineEdit(Build_Setup_Frame);
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

        Input_Paths_VBOX->addWidget(Project_Name_Txt);

        verticalSpacer_6 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Input_Paths_VBOX->addItem(verticalSpacer_6);

        Project_Name_Error = new QLabel(Build_Setup_Frame);
        Project_Name_Error->setObjectName(QString::fromUtf8("Project_Name_Error"));
        Project_Name_Error->setMinimumSize(QSize(0, 0));
        Project_Name_Error->setBaseSize(QSize(0, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Project_Name_Error->setFont(font);
        Project_Name_Error->setStyleSheet(QString::fromUtf8("color: red;"));

        Input_Paths_VBOX->addWidget(Project_Name_Error);


        Paths_HBOX->addLayout(Input_Paths_VBOX);

        Build_SetupButtons_VBOX = new QVBoxLayout();
        Build_SetupButtons_VBOX->setSpacing(6);
        Build_SetupButtons_VBOX->setObjectName(QString::fromUtf8("Build_SetupButtons_VBOX"));
        Build_SetupButtons_VBOX->setSizeConstraint(QLayout::SetDefaultConstraint);
        Build_SetupButtons_VBOX->setContentsMargins(0, -1, -1, -1);
        verticalSpacer_5 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Build_SetupButtons_VBOX->addItem(verticalSpacer_5);

        Project_Path_Browse_Btn = new QPushButton(Build_Setup_Frame);
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

        Build_SetupButtons_VBOX->addWidget(Project_Path_Browse_Btn);

        UE_Source_Path_Browse_Btn = new QPushButton(Build_Setup_Frame);
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

        Build_SetupButtons_VBOX->addWidget(UE_Source_Path_Browse_Btn);

        Generate_Project_Files_Btn = new QPushButton(Build_Setup_Frame);
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

        Build_SetupButtons_VBOX->addWidget(Generate_Project_Files_Btn);

        verticalSpacer_4 = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Build_SetupButtons_VBOX->addItem(verticalSpacer_4);


        Paths_HBOX->addLayout(Build_SetupButtons_VBOX);


        Build_Setup_VBOX->addLayout(Paths_HBOX);

        Modes_Build_Run_HBOX = new QHBoxLayout();
        Modes_Build_Run_HBOX->setObjectName(QString::fromUtf8("Modes_Build_Run_HBOX"));
        Build_Config_Lbl = new QLabel(Build_Setup_Frame);
        Build_Config_Lbl->setObjectName(QString::fromUtf8("Build_Config_Lbl"));
        Build_Config_Lbl->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Modes_Build_Run_HBOX->addWidget(Build_Config_Lbl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        Modes_Build_Run_HBOX->addItem(horizontalSpacer_2);

        Editor_Mode_Tick = new QRadioButton(Build_Setup_Frame);
        Editor_Mode_Tick->setObjectName(QString::fromUtf8("Editor_Mode_Tick"));
        Editor_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(97, 53, 131);\n"
"  font-family: 'Roboto', sans-serif; \n"
"  font-size: 20px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Modes_Build_Run_HBOX->addWidget(Editor_Mode_Tick);

        Standalone_Mode_Tick = new QRadioButton(Build_Setup_Frame);
        Standalone_Mode_Tick->setObjectName(QString::fromUtf8("Standalone_Mode_Tick"));
        Standalone_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Modes_Build_Run_HBOX->addWidget(Standalone_Mode_Tick);

        Game_Mode_Tick = new QRadioButton(Build_Setup_Frame);
        Game_Mode_Tick->setObjectName(QString::fromUtf8("Game_Mode_Tick"));
        Game_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color: rgb(0, 0, 0); /* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Modes_Build_Run_HBOX->addWidget(Game_Mode_Tick);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        Modes_Build_Run_HBOX->addItem(horizontalSpacer);

        Open_Sublime_CheckBox = new QCheckBox(Build_Setup_Frame);
        Open_Sublime_CheckBox->setObjectName(QString::fromUtf8("Open_Sublime_CheckBox"));

        Modes_Build_Run_HBOX->addWidget(Open_Sublime_CheckBox);

        Run_Btn = new QPushButton(Build_Setup_Frame);
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

        Modes_Build_Run_HBOX->addWidget(Run_Btn);

        Build_Btn = new QPushButton(Build_Setup_Frame);
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

        Modes_Build_Run_HBOX->addWidget(Build_Btn);


        Build_Setup_VBOX->addLayout(Modes_Build_Run_HBOX);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Build_Setup_VBOX->addItem(verticalSpacer);

        Standalone_Warning_HBOX = new QHBoxLayout();
        Standalone_Warning_HBOX->setSpacing(0);
        Standalone_Warning_HBOX->setObjectName(QString::fromUtf8("Standalone_Warning_HBOX"));
        Standalone_Warning_HBOX->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(158, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        Standalone_Warning_HBOX->addItem(horizontalSpacer_3);

        Standalone_Warning_Lbl = new QLabel(Build_Setup_Frame);
        Standalone_Warning_Lbl->setObjectName(QString::fromUtf8("Standalone_Warning_Lbl"));
        Standalone_Warning_Lbl->setMinimumSize(QSize(0, 37));
        Standalone_Warning_Lbl->setStyleSheet(QString::fromUtf8("color: red;"));

        Standalone_Warning_HBOX->addWidget(Standalone_Warning_Lbl);


        Build_Setup_VBOX->addLayout(Standalone_Warning_HBOX);


        horizontalLayout_2->addLayout(Build_Setup_VBOX);


        verticalLayout_2->addWidget(Build_Setup_Frame);

        Plugins_Frame = new QFrame(Build_Setup_Tab);
        Plugins_Frame->setObjectName(QString::fromUtf8("Plugins_Frame"));
        Plugins_Frame->setFrameShape(QFrame::StyledPanel);
        Plugins_Frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(Plugins_Frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        PLugins_Lables_HBOX = new QHBoxLayout();
        PLugins_Lables_HBOX->setObjectName(QString::fromUtf8("PLugins_Lables_HBOX"));
        PLugins_Lables_HBOX->setContentsMargins(-1, -1, -1, 0);
        Plugins_Enabled_Lbl = new QLabel(Plugins_Frame);
        Plugins_Enabled_Lbl->setObjectName(QString::fromUtf8("Plugins_Enabled_Lbl"));

        PLugins_Lables_HBOX->addWidget(Plugins_Enabled_Lbl);

        horizontalSpacer_4 = new QSpacerItem(376, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        PLugins_Lables_HBOX->addItem(horizontalSpacer_4);

        Plugins_Available_Lbl = new QLabel(Plugins_Frame);
        Plugins_Available_Lbl->setObjectName(QString::fromUtf8("Plugins_Available_Lbl"));

        PLugins_Lables_HBOX->addWidget(Plugins_Available_Lbl);

        horizontalSpacer_5 = new QSpacerItem(286, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        PLugins_Lables_HBOX->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(PLugins_Lables_HBOX);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        Enabled_Plugins_Scroll_Area = new QScrollArea(Plugins_Frame);
        Enabled_Plugins_Scroll_Area->setObjectName(QString::fromUtf8("Enabled_Plugins_Scroll_Area"));
        Enabled_Plugins_Scroll_Area->setWidgetResizable(true);
        Enabled_Plugins_Area = new QWidget();
        Enabled_Plugins_Area->setObjectName(QString::fromUtf8("Enabled_Plugins_Area"));
        Enabled_Plugins_Area->setGeometry(QRect(0, 0, 425, 401));
        gridLayout = new QGridLayout(Enabled_Plugins_Area);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Enabled_Plugins_List = new QListView(Enabled_Plugins_Area);
        Enabled_Plugins_List->setObjectName(QString::fromUtf8("Enabled_Plugins_List"));

        gridLayout->addWidget(Enabled_Plugins_List, 0, 2, 1, 1);

        Enabled_Plugins_Scroll_Area->setWidget(Enabled_Plugins_Area);

        horizontalLayout->addWidget(Enabled_Plugins_Scroll_Area);

        Plugins_In_Out_Button_VBOX = new QVBoxLayout();
        Plugins_In_Out_Button_VBOX->setObjectName(QString::fromUtf8("Plugins_In_Out_Button_VBOX"));
        Plugins_In_Out_Button_VBOX->setContentsMargins(-1, -1, 0, -1);
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Plugins_In_Out_Button_VBOX->addItem(verticalSpacer_10);

        To_Enable_Plugins_List = new QPushButton(Plugins_Frame);
        To_Enable_Plugins_List->setObjectName(QString::fromUtf8("To_Enable_Plugins_List"));

        Plugins_In_Out_Button_VBOX->addWidget(To_Enable_Plugins_List);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Plugins_In_Out_Button_VBOX->addItem(verticalSpacer_2);

        To_Disable_Plugins_Btn = new QPushButton(Plugins_Frame);
        To_Disable_Plugins_Btn->setObjectName(QString::fromUtf8("To_Disable_Plugins_Btn"));

        Plugins_In_Out_Button_VBOX->addWidget(To_Disable_Plugins_Btn);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Plugins_In_Out_Button_VBOX->addItem(verticalSpacer_9);


        horizontalLayout->addLayout(Plugins_In_Out_Button_VBOX);

        Disabled_Plugins_Scroll_Area = new QScrollArea(Plugins_Frame);
        Disabled_Plugins_Scroll_Area->setObjectName(QString::fromUtf8("Disabled_Plugins_Scroll_Area"));
        Disabled_Plugins_Scroll_Area->setWidgetResizable(true);
        Disabled_Pluginsl_Area = new QWidget();
        Disabled_Pluginsl_Area->setObjectName(QString::fromUtf8("Disabled_Pluginsl_Area"));
        Disabled_Pluginsl_Area->setGeometry(QRect(0, 0, 425, 401));
        gridLayout_2 = new QGridLayout(Disabled_Pluginsl_Area);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Disabled_Plugins_List = new QListView(Disabled_Pluginsl_Area);
        Disabled_Plugins_List->setObjectName(QString::fromUtf8("Disabled_Plugins_List"));

        gridLayout_2->addWidget(Disabled_Plugins_List, 0, 0, 1, 1);

        Disabled_Plugins_Scroll_Area->setWidget(Disabled_Pluginsl_Area);

        horizontalLayout->addWidget(Disabled_Plugins_Scroll_Area);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(Plugins_Frame);


        horizontalLayout_4->addLayout(verticalLayout_2);

        Main_Menu_Tabs->addTab(Build_Setup_Tab, QString());

        formLayout->setWidget(0, QFormLayout::FieldRole, Main_Menu_Tabs);

        MainWindow->setCentralWidget(Project_Path_Hbox);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1045, 22));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        Main_Menu_Tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Project Folder Structure (Game/)", nullptr));
        Main_Menu_Tabs->setTabText(Main_Menu_Tabs->indexOf(Project_Structure_Tab), QCoreApplication::translate("MainWindow", "Project Structure", nullptr));
        Project_Path_Label->setText(QCoreApplication::translate("MainWindow", "Project Path", nullptr));
        UE_Source_Path_Label->setText(QCoreApplication::translate("MainWindow", "Engine Path", nullptr));
        Project_Name_Label->setText(QCoreApplication::translate("MainWindow", "Project Name     ", nullptr));
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
        Plugins_Enabled_Lbl->setText(QCoreApplication::translate("MainWindow", "Enabled Plugins", nullptr));
        Plugins_Available_Lbl->setText(QCoreApplication::translate("MainWindow", "Disabled Plugins", nullptr));
        To_Enable_Plugins_List->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        To_Disable_Plugins_Btn->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        Main_Menu_Tabs->setTabText(Main_Menu_Tabs->indexOf(Build_Setup_Tab), QCoreApplication::translate("MainWindow", "Build Setup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
