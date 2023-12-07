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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *Project_Path_Hbox;
    QFormLayout *formLayout;
    QTabWidget *Main_Menu_Tabs;
    QWidget *Build_Page;
    QHBoxLayout *horizontalLayout_3;
    QFrame *Plugins_Frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Search_Plugin_Lbl;
    QLineEdit *Plugins_Filter;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *PLugins_Lables_HBOX;
    QLabel *Plugins_Available_Lbl;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Plugins_Enabled_Lbl;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QScrollArea *Disabled_Plugins_Scroll_Area;
    QWidget *Disabled_Pluginsl_Area;
    QGridLayout *gridLayout_2;
    QListView *Disabled_Plugins_List;
    QVBoxLayout *Plugins_In_Out_Button_VBOX;
    QSpacerItem *verticalSpacer_10;
    QPushButton *Toggle_Global_Plugin_Btn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Enable_Project_Plugins_Button;
    QPushButton *Disable_Plugins_Btn;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *Enabled_Plugins_Scroll_Area;
    QWidget *Enabled_Plugins_Area;
    QGridLayout *gridLayout;
    QListView *Enabled_Plugins_List;
    QLabel *label;
    QScrollArea *Project_Plugins_Scroll_Area;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QListView *Project_Plugins_List;
    QWidget *Project_Structure_Tab;
    QHBoxLayout *horizontalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QPushButton *Add_Folder_Btn;
    QPushButton *Remove_Folder_Btn;
    QPushButton *Create_hierarchy_Btn;
    QTreeView *CurrentProject_Tree;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *SuggestedStructures_CBOX;
    QPushButton *Apply_Preset_Btn;
    QTreeView *SuggestedStructuresGame_Tree;
    QFrame *PathsFrame;
    QGridLayout *gridLayout_3;
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
    QSpacerItem *verticalSpacer_11;
    QVBoxLayout *Build_SetupButtons_VBOX;
    QSpacerItem *verticalSpacer_5;
    QPushButton *Project_Path_Browse_Btn;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *UE_Source_Path_Browse_Btn;
    QPushButton *Generate_Project_Files_Btn;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *UE5_Logo_Lbl;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QFrame *Build_Setup_Frame;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *Build_Setup_VBOX;
    QHBoxLayout *Modes_Build_Run_HBOX;
    QLabel *Build_Config_Lbl;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *Editor_Mode_Tick;
    QRadioButton *Standalone_Mode_Tick;
    QRadioButton *Game_Mode_Tick;
    QSpacerItem *horizontalSpacer;
    QCheckBox *Open_Sublime_CheckBox;
    QPushButton *Build_Btn;
    QPushButton *Run_Btn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *Standalone_Warning_HBOX;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Standalone_Warning_Lbl;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1052, 1163);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: rgb(46, 47, 48);\n"
"    color: #ffffff;\n"
"}"));
        Project_Path_Hbox = new QWidget(MainWindow);
        Project_Path_Hbox->setObjectName(QString::fromUtf8("Project_Path_Hbox"));
        formLayout = new QFormLayout(Project_Path_Hbox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Main_Menu_Tabs = new QTabWidget(Project_Path_Hbox);
        Main_Menu_Tabs->setObjectName(QString::fromUtf8("Main_Menu_Tabs"));
        QFont font;
        font.setPointSize(14);
        Main_Menu_Tabs->setFont(font);
        Main_Menu_Tabs->setAutoFillBackground(false);
        Main_Menu_Tabs->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"\n"
"}\n"
"\n"
"/* Set the background color and styles for individual tabs in QTabWidget */\n"
"QTabWidget::tab-bar {\n"
"    alignment: left;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #555555;\n"
"}\n"
""));
        Main_Menu_Tabs->setTabPosition(QTabWidget::North);
        Main_Menu_Tabs->setTabShape(QTabWidget::Rounded);
        Main_Menu_Tabs->setElideMode(Qt::ElideNone);
        Main_Menu_Tabs->setUsesScrollButtons(true);
        Main_Menu_Tabs->setDocumentMode(false);
        Main_Menu_Tabs->setTabsClosable(false);
        Main_Menu_Tabs->setMovable(true);
        Main_Menu_Tabs->setTabBarAutoHide(false);
        Build_Page = new QWidget();
        Build_Page->setObjectName(QString::fromUtf8("Build_Page"));
        horizontalLayout_3 = new QHBoxLayout(Build_Page);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Plugins_Frame = new QFrame(Build_Page);
        Plugins_Frame->setObjectName(QString::fromUtf8("Plugins_Frame"));
        Plugins_Frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color:  rgb(46, 47, 48);\n"
"    border-radius: 10px;\n"
"    color: #ffffff;\n"
"}"));
        Plugins_Frame->setFrameShape(QFrame::NoFrame);
        Plugins_Frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(Plugins_Frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        Search_Plugin_Lbl = new QLabel(Plugins_Frame);
        Search_Plugin_Lbl->setObjectName(QString::fromUtf8("Search_Plugin_Lbl"));
        Search_Plugin_Lbl->setMinimumSize(QSize(150, 34));
        Search_Plugin_Lbl->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        horizontalLayout_4->addWidget(Search_Plugin_Lbl);

        Plugins_Filter = new QLineEdit(Plugins_Frame);
        Plugins_Filter->setObjectName(QString::fromUtf8("Plugins_Filter"));
        Plugins_Filter->setMinimumSize(QSize(0, 34));
        Plugins_Filter->setAutoFillBackground(false);
        Plugins_Filter->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 3px;\n"
"}"));

        horizontalLayout_4->addWidget(Plugins_Filter);

        horizontalSpacer_8 = new QSpacerItem(592, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        PLugins_Lables_HBOX = new QHBoxLayout();
        PLugins_Lables_HBOX->setObjectName(QString::fromUtf8("PLugins_Lables_HBOX"));
        PLugins_Lables_HBOX->setContentsMargins(-1, -1, -1, 0);
        Plugins_Available_Lbl = new QLabel(Plugins_Frame);
        Plugins_Available_Lbl->setObjectName(QString::fromUtf8("Plugins_Available_Lbl"));
        Plugins_Available_Lbl->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        PLugins_Lables_HBOX->addWidget(Plugins_Available_Lbl);

        horizontalSpacer_4 = new QSpacerItem(409, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        PLugins_Lables_HBOX->addItem(horizontalSpacer_4);

        Plugins_Enabled_Lbl = new QLabel(Plugins_Frame);
        Plugins_Enabled_Lbl->setObjectName(QString::fromUtf8("Plugins_Enabled_Lbl"));
        Plugins_Enabled_Lbl->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        PLugins_Lables_HBOX->addWidget(Plugins_Enabled_Lbl);

        horizontalSpacer_5 = new QSpacerItem(194, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        PLugins_Lables_HBOX->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(PLugins_Lables_HBOX);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        Disabled_Plugins_Scroll_Area = new QScrollArea(Plugins_Frame);
        Disabled_Plugins_Scroll_Area->setObjectName(QString::fromUtf8("Disabled_Plugins_Scroll_Area"));
        Disabled_Plugins_Scroll_Area->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        Disabled_Plugins_Scroll_Area->setWidgetResizable(true);
        Disabled_Pluginsl_Area = new QWidget();
        Disabled_Pluginsl_Area->setObjectName(QString::fromUtf8("Disabled_Pluginsl_Area"));
        Disabled_Pluginsl_Area->setGeometry(QRect(0, 0, 404, 470));
        gridLayout_2 = new QGridLayout(Disabled_Pluginsl_Area);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Disabled_Plugins_List = new QListView(Disabled_Pluginsl_Area);
        Disabled_Plugins_List->setObjectName(QString::fromUtf8("Disabled_Plugins_List"));
        Disabled_Plugins_List->setFont(font);
        Disabled_Plugins_List->setStyleSheet(QString::fromUtf8("QListView {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"   border-radius: 5px;\n"
"}\n"
"\n"
"/* Set the background color and font for QListView items */\n"
"QListView::item {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for selected items in QListView */\n"
"QListView::item:selected {\n"
"    background-color: rgb(240, 125, 126);\n"
"}\n"
"\n"
"/* Set the font color and size for text in selected items */\n"
"QListView::item:selected:active {\n"
"    color: black;\n"
"    font-size: 20px;\n"
"}\n"
""));
        Disabled_Plugins_List->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Disabled_Plugins_List->setProperty("showDropIndicator", QVariant(false));

        gridLayout_2->addWidget(Disabled_Plugins_List, 0, 0, 1, 1);

        Disabled_Plugins_Scroll_Area->setWidget(Disabled_Pluginsl_Area);

        horizontalLayout->addWidget(Disabled_Plugins_Scroll_Area);

        Plugins_In_Out_Button_VBOX = new QVBoxLayout();
        Plugins_In_Out_Button_VBOX->setObjectName(QString::fromUtf8("Plugins_In_Out_Button_VBOX"));
        Plugins_In_Out_Button_VBOX->setContentsMargins(-1, -1, 0, -1);
        verticalSpacer_10 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Plugins_In_Out_Button_VBOX->addItem(verticalSpacer_10);

        Toggle_Global_Plugin_Btn = new QPushButton(Plugins_Frame);
        Toggle_Global_Plugin_Btn->setObjectName(QString::fromUtf8("Toggle_Global_Plugin_Btn"));
        Toggle_Global_Plugin_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        Plugins_In_Out_Button_VBOX->addWidget(Toggle_Global_Plugin_Btn);

        verticalSpacer_2 = new QSpacerItem(20, 199, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Plugins_In_Out_Button_VBOX->addItem(verticalSpacer_2);

        Enable_Project_Plugins_Button = new QPushButton(Plugins_Frame);
        Enable_Project_Plugins_Button->setObjectName(QString::fromUtf8("Enable_Project_Plugins_Button"));
        Enable_Project_Plugins_Button->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        Plugins_In_Out_Button_VBOX->addWidget(Enable_Project_Plugins_Button);

        Disable_Plugins_Btn = new QPushButton(Plugins_Frame);
        Disable_Plugins_Btn->setObjectName(QString::fromUtf8("Disable_Plugins_Btn"));
        Disable_Plugins_Btn->setMinimumSize(QSize(146, 34));
        Disable_Plugins_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        Plugins_In_Out_Button_VBOX->addWidget(Disable_Plugins_Btn);

        verticalSpacer_9 = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Plugins_In_Out_Button_VBOX->addItem(verticalSpacer_9);


        horizontalLayout->addLayout(Plugins_In_Out_Button_VBOX);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, 0);
        Enabled_Plugins_Scroll_Area = new QScrollArea(Plugins_Frame);
        Enabled_Plugins_Scroll_Area->setObjectName(QString::fromUtf8("Enabled_Plugins_Scroll_Area"));
        Enabled_Plugins_Scroll_Area->setWidgetResizable(true);
        Enabled_Plugins_Area = new QWidget();
        Enabled_Plugins_Area->setObjectName(QString::fromUtf8("Enabled_Plugins_Area"));
        Enabled_Plugins_Area->setGeometry(QRect(0, 0, 402, 211));
        gridLayout = new QGridLayout(Enabled_Plugins_Area);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Enabled_Plugins_List = new QListView(Enabled_Plugins_Area);
        Enabled_Plugins_List->setObjectName(QString::fromUtf8("Enabled_Plugins_List"));
        Enabled_Plugins_List->setFont(font);
        Enabled_Plugins_List->setStyleSheet(QString::fromUtf8("QListView {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"   border-radius: 5px;\n"
"}\n"
"\n"
"/* Set the background color and font for QListView items */\n"
"QListView::item {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for selected items in QListView */\n"
"QListView::item:selected {\n"
"    background-color: rgb(240, 125, 126);\n"
"}\n"
"\n"
"/* Set the font color and size for text in selected items */\n"
"QListView::item:selected:active {\n"
"    color: black;\n"
"    font-size: 20px;\n"
"}\n"
""));
        Enabled_Plugins_List->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Enabled_Plugins_List->setProperty("showDropIndicator", QVariant(false));

        gridLayout->addWidget(Enabled_Plugins_List, 1, 2, 1, 1);

        Enabled_Plugins_Scroll_Area->setWidget(Enabled_Plugins_Area);

        verticalLayout_3->addWidget(Enabled_Plugins_Scroll_Area);

        label = new QLabel(Plugins_Frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        verticalLayout_3->addWidget(label);

        Project_Plugins_Scroll_Area = new QScrollArea(Plugins_Frame);
        Project_Plugins_Scroll_Area->setObjectName(QString::fromUtf8("Project_Plugins_Scroll_Area"));
        Project_Plugins_Scroll_Area->setStyleSheet(QString::fromUtf8("QScrollAreaWidgetContents {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"}"));
        Project_Plugins_Scroll_Area->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 402, 211));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Project_Plugins_List = new QListView(scrollAreaWidgetContents_2);
        Project_Plugins_List->setObjectName(QString::fromUtf8("Project_Plugins_List"));
        Project_Plugins_List->setFont(font);
        Project_Plugins_List->setStyleSheet(QString::fromUtf8("QListView {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"   border-radius: 5px;\n"
"}\n"
"\n"
"/* Set the background color and font for QListView items */\n"
"QListView::item {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for selected items in QListView */\n"
"QListView::item:selected {\n"
"    background-color: rgb(240, 125, 126);\n"
"}\n"
"\n"
"/* Set the font color and size for text in selected items */\n"
"QListView::item:selected:active {\n"
"    color: black;\n"
"    font-size: 20px;\n"
"}\n"
""));
        Project_Plugins_List->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Project_Plugins_List->setProperty("showDropIndicator", QVariant(false));

        verticalLayout_4->addWidget(Project_Plugins_List);

        Project_Plugins_Scroll_Area->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(Project_Plugins_Scroll_Area);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(Plugins_Frame);

        Main_Menu_Tabs->addTab(Build_Page, QString());
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1004, 572));
        horizontalLayout_6 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 34));
        label_2->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        horizontalLayout_11->addWidget(label_2);

        Add_Folder_Btn = new QPushButton(scrollAreaWidgetContents);
        Add_Folder_Btn->setObjectName(QString::fromUtf8("Add_Folder_Btn"));
        Add_Folder_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        horizontalLayout_11->addWidget(Add_Folder_Btn);

        Remove_Folder_Btn = new QPushButton(scrollAreaWidgetContents);
        Remove_Folder_Btn->setObjectName(QString::fromUtf8("Remove_Folder_Btn"));
        Remove_Folder_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        horizontalLayout_11->addWidget(Remove_Folder_Btn);

        Create_hierarchy_Btn = new QPushButton(scrollAreaWidgetContents);
        Create_hierarchy_Btn->setObjectName(QString::fromUtf8("Create_hierarchy_Btn"));
        Create_hierarchy_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/UE5Logo/Saveicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Create_hierarchy_Btn->setIcon(icon);
        Create_hierarchy_Btn->setIconSize(QSize(23, 23));

        horizontalLayout_11->addWidget(Create_hierarchy_Btn);


        verticalLayout_5->addLayout(horizontalLayout_11);

        CurrentProject_Tree = new QTreeView(scrollAreaWidgetContents);
        CurrentProject_Tree->setObjectName(QString::fromUtf8("CurrentProject_Tree"));
        CurrentProject_Tree->setFont(font);
        CurrentProject_Tree->setStyleSheet(QString::fromUtf8("QTreeView {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Set the background color and font for QTreeView items */\n"
"QTreeView::item {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for selected items in QTreeView */\n"
"QTreeView::item:selected {\n"
"    background-color: rgb(240, 125, 126);\n"
"}\n"
"\n"
"/* Set the font color and size for text in selected items */\n"
"QTreeView::item:selected:active {\n"
"    color: black;\n"
"    font-size: 20px;\n"
"}\n"
"\n"
""));
        CurrentProject_Tree->setSelectionBehavior(QAbstractItemView::SelectRows);
        CurrentProject_Tree->setHeaderHidden(true);
        CurrentProject_Tree->header()->setVisible(false);

        verticalLayout_5->addWidget(CurrentProject_Tree);


        horizontalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, -1, 0);
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_4);

        horizontalSpacer_9 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        SuggestedStructures_CBOX = new QComboBox(scrollAreaWidgetContents);
        SuggestedStructures_CBOX->setObjectName(QString::fromUtf8("SuggestedStructures_CBOX"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(14);
        SuggestedStructures_CBOX->setFont(font1);
        SuggestedStructures_CBOX->setStyleSheet(QString::fromUtf8("/* ComboBox */\n"
"QComboBox {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    background-color: rgb(214, 187, 152);\n"
"    border-color: #585c62;\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox:disabled {\n"
"    background-color: #52565a;\n"
"    border-color: #64686c;\n"
"    color: #888888;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none; /* Remove the default arrow button */\n"
"}\n"
"\n"
"\n"
"\n"
"/* ComboBox Popup */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #2a2a2a;\n"
"    color: #000000; /* Font color when the list view is open */\n"
"    border: 1px solid #ffffff;\n"
"    selection-background-color: rgb(240, 125, 126); /* Color when an item is pressed */\n"
"	\n"
"}\n"
"\n"
"/* Selected Item */\n"
"QComboBox::item:selected {\n"
"    background-color: rgb(240, 125, 126);\n"
"}"
                        "\n"
""));

        horizontalLayout_10->addWidget(SuggestedStructures_CBOX);

        Apply_Preset_Btn = new QPushButton(scrollAreaWidgetContents);
        Apply_Preset_Btn->setObjectName(QString::fromUtf8("Apply_Preset_Btn"));
        Apply_Preset_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        horizontalLayout_10->addWidget(Apply_Preset_Btn);


        verticalLayout_2->addLayout(horizontalLayout_10);

        SuggestedStructuresGame_Tree = new QTreeView(scrollAreaWidgetContents);
        SuggestedStructuresGame_Tree->setObjectName(QString::fromUtf8("SuggestedStructuresGame_Tree"));
        SuggestedStructuresGame_Tree->setFont(font);
        SuggestedStructuresGame_Tree->setStyleSheet(QString::fromUtf8("QTreeView {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Set the background color and font for QTreeView items */\n"
"QTreeView::item {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for selected items in QTreeView */\n"
"QTreeView::item:selected {\n"
"    background-color: rgb(240, 125, 126);\n"
"}\n"
"\n"
"/* Set the font color and size for text in selected items */\n"
"QTreeView::item:selected:active {\n"
"    color: black;\n"
"    font-size: 20px;\n"
"}\n"
""));
        SuggestedStructuresGame_Tree->setLineWidth(1);
        SuggestedStructuresGame_Tree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        SuggestedStructuresGame_Tree->setProperty("showDropIndicator", QVariant(false));
        SuggestedStructuresGame_Tree->setItemsExpandable(true);
        SuggestedStructuresGame_Tree->setAnimated(false);
        SuggestedStructuresGame_Tree->header()->setVisible(false);

        verticalLayout_2->addWidget(SuggestedStructuresGame_Tree);


        horizontalLayout_9->addLayout(verticalLayout_2);


        horizontalLayout_6->addLayout(horizontalLayout_9);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);

        Main_Menu_Tabs->addTab(Project_Structure_Tab, QString());

        formLayout->setWidget(1, QFormLayout::FieldRole, Main_Menu_Tabs);

        PathsFrame = new QFrame(Project_Path_Hbox);
        PathsFrame->setObjectName(QString::fromUtf8("PathsFrame"));
        PathsFrame->setFrameShape(QFrame::NoFrame);
        PathsFrame->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(PathsFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        Paths_HBOX = new QHBoxLayout();
        Paths_HBOX->setObjectName(QString::fromUtf8("Paths_HBOX"));
        Path_Labels_VBOX = new QVBoxLayout();
        Path_Labels_VBOX->setObjectName(QString::fromUtf8("Path_Labels_VBOX"));
        verticalSpacer_3 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Path_Labels_VBOX->addItem(verticalSpacer_3);

        Project_Path_Label = new QLabel(PathsFrame);
        Project_Path_Label->setObjectName(QString::fromUtf8("Project_Path_Label"));
        Project_Path_Label->setMinimumSize(QSize(150, 34));
        Project_Path_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Path_Labels_VBOX->addWidget(Project_Path_Label);

        UE_Source_Path_Label = new QLabel(PathsFrame);
        UE_Source_Path_Label->setObjectName(QString::fromUtf8("UE_Source_Path_Label"));
        UE_Source_Path_Label->setMinimumSize(QSize(150, 34));
        UE_Source_Path_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Path_Labels_VBOX->addWidget(UE_Source_Path_Label);

        Project_Name_Label = new QLabel(PathsFrame);
        Project_Name_Label->setObjectName(QString::fromUtf8("Project_Name_Label"));
        Project_Name_Label->setMinimumSize(QSize(0, 34));
        Project_Name_Label->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(214, 187, 152);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Path_Labels_VBOX->addWidget(Project_Name_Label);

        verticalSpacer_8 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Path_Labels_VBOX->addItem(verticalSpacer_8);


        Paths_HBOX->addLayout(Path_Labels_VBOX);

        Input_Paths_VBOX = new QVBoxLayout();
        Input_Paths_VBOX->setObjectName(QString::fromUtf8("Input_Paths_VBOX"));
        verticalSpacer_7 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Input_Paths_VBOX->addItem(verticalSpacer_7);

        Project_Path_Txt = new QLineEdit(PathsFrame);
        Project_Path_Txt->setObjectName(QString::fromUtf8("Project_Path_Txt"));
        Project_Path_Txt->setMinimumSize(QSize(0, 34));
        Project_Path_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 3px;\n"
"}"));
        Project_Path_Txt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        Input_Paths_VBOX->addWidget(Project_Path_Txt);

        UE_Source_Path_Txt = new QLineEdit(PathsFrame);
        UE_Source_Path_Txt->setObjectName(QString::fromUtf8("UE_Source_Path_Txt"));
        UE_Source_Path_Txt->setMinimumSize(QSize(0, 34));
        UE_Source_Path_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 3px;\n"
"}"));

        Input_Paths_VBOX->addWidget(UE_Source_Path_Txt);

        Project_Name_Txt = new QLineEdit(PathsFrame);
        Project_Name_Txt->setObjectName(QString::fromUtf8("Project_Name_Txt"));
        Project_Name_Txt->setMinimumSize(QSize(0, 34));
        Project_Name_Txt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #333333;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 3px;\n"
"}"));
        Project_Name_Txt->setInputMethodHints(Qt::ImhLatinOnly);

        Input_Paths_VBOX->addWidget(Project_Name_Txt);

        verticalSpacer_6 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Input_Paths_VBOX->addItem(verticalSpacer_6);

        Project_Name_Error = new QLabel(PathsFrame);
        Project_Name_Error->setObjectName(QString::fromUtf8("Project_Name_Error"));
        Project_Name_Error->setMinimumSize(QSize(0, 0));
        Project_Name_Error->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Roboto"));
        font2.setBold(false);
        font2.setWeight(50);
        Project_Name_Error->setFont(font2);
        Project_Name_Error->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(211, 133, 59);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Input_Paths_VBOX->addWidget(Project_Name_Error);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Input_Paths_VBOX->addItem(verticalSpacer_11);


        Paths_HBOX->addLayout(Input_Paths_VBOX);

        Build_SetupButtons_VBOX = new QVBoxLayout();
        Build_SetupButtons_VBOX->setSpacing(6);
        Build_SetupButtons_VBOX->setObjectName(QString::fromUtf8("Build_SetupButtons_VBOX"));
        Build_SetupButtons_VBOX->setSizeConstraint(QLayout::SetDefaultConstraint);
        Build_SetupButtons_VBOX->setContentsMargins(0, -1, -1, -1);
        verticalSpacer_5 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Build_SetupButtons_VBOX->addItem(verticalSpacer_5);

        Project_Path_Browse_Btn = new QPushButton(PathsFrame);
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
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
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

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, 0, 0);
        UE_Source_Path_Browse_Btn = new QPushButton(PathsFrame);
        UE_Source_Path_Browse_Btn->setObjectName(QString::fromUtf8("UE_Source_Path_Browse_Btn"));
        sizePolicy1.setHeightForWidth(UE_Source_Path_Browse_Btn->sizePolicy().hasHeightForWidth());
        UE_Source_Path_Browse_Btn->setSizePolicy(sizePolicy1);
        UE_Source_Path_Browse_Btn->setMinimumSize(QSize(146, 34));
        UE_Source_Path_Browse_Btn->setSizeIncrement(QSize(0, 0));
        UE_Source_Path_Browse_Btn->setBaseSize(QSize(0, 0));
        UE_Source_Path_Browse_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
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

        horizontalLayout_8->addWidget(UE_Source_Path_Browse_Btn);


        Build_SetupButtons_VBOX->addLayout(horizontalLayout_8);

        Generate_Project_Files_Btn = new QPushButton(PathsFrame);
        Generate_Project_Files_Btn->setObjectName(QString::fromUtf8("Generate_Project_Files_Btn"));
        sizePolicy1.setHeightForWidth(Generate_Project_Files_Btn->sizePolicy().hasHeightForWidth());
        Generate_Project_Files_Btn->setSizePolicy(sizePolicy1);
        Generate_Project_Files_Btn->setMinimumSize(QSize(146, 34));
        Generate_Project_Files_Btn->setSizeIncrement(QSize(0, 0));
        Generate_Project_Files_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: rgb(94, 92, 100);\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        Build_SetupButtons_VBOX->addWidget(Generate_Project_Files_Btn);

        verticalSpacer_4 = new QSpacerItem(20, 89, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Build_SetupButtons_VBOX->addItem(verticalSpacer_4);


        Paths_HBOX->addLayout(Build_SetupButtons_VBOX);


        gridLayout_3->addLayout(Paths_HBOX, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_7 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        UE5_Logo_Lbl = new QLabel(PathsFrame);
        UE5_Logo_Lbl->setObjectName(QString::fromUtf8("UE5_Logo_Lbl"));
        UE5_Logo_Lbl->setMinimumSize(QSize(1, 34));
        UE5_Logo_Lbl->setMaximumSize(QSize(70, 64));
        UE5_Logo_Lbl->setPixmap(QPixmap(QString::fromUtf8(":/UE5Logo/UE5Logo.png")));
        UE5_Logo_Lbl->setScaledContents(true);
        UE5_Logo_Lbl->setAlignment(Qt::AlignCenter);
        UE5_Logo_Lbl->setWordWrap(false);
        UE5_Logo_Lbl->setMargin(0);
        UE5_Logo_Lbl->setIndent(-1);
        UE5_Logo_Lbl->setOpenExternalLinks(false);

        horizontalLayout_7->addWidget(UE5_Logo_Lbl);

        label_3 = new QLabel(PathsFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(66, 179, 197);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        horizontalLayout_7->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        formLayout->setWidget(0, QFormLayout::FieldRole, PathsFrame);

        Build_Setup_Frame = new QFrame(Project_Path_Hbox);
        Build_Setup_Frame->setObjectName(QString::fromUtf8("Build_Setup_Frame"));
        Build_Setup_Frame->setStyleSheet(QString::fromUtf8("color:rgb(36, 31, 49)"));
        Build_Setup_Frame->setFrameShape(QFrame::NoFrame);
        Build_Setup_Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(Build_Setup_Frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Build_Setup_VBOX = new QVBoxLayout();
        Build_Setup_VBOX->setObjectName(QString::fromUtf8("Build_Setup_VBOX"));
        Modes_Build_Run_HBOX = new QHBoxLayout();
        Modes_Build_Run_HBOX->setObjectName(QString::fromUtf8("Modes_Build_Run_HBOX"));
        Build_Config_Lbl = new QLabel(Build_Setup_Frame);
        Build_Config_Lbl->setObjectName(QString::fromUtf8("Build_Config_Lbl"));
        Build_Config_Lbl->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(240, 125, 126);/* Electric blue text */\n"
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
        Editor_Mode_Tick->setAutoFillBackground(false);
        Editor_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Set the background color and font for QRadioButtons */\n"
"QRadioButton {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for checked QRadioButtons */\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(240, 125, 126);\n"
"    border-radius: 6px;\n"
"    border: 1px solid #ffffff; /* White border when checked */\n"
"}\n"
"\n"
"/* Set the color for checked QRadioButtons when disabled */\n"
"QRadioButton::indicator:checked:disabled {\n"
"    color: rgb(98, 160, 234);\n"
"    border: 1px solid rgb(214, 187, 152); \n"
"border-radius: 6px;/* Border color for checked and disabled */\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton when unchecked and pressed */\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"    border: 1px solid rgb(240, 125, 126);\n"
"border-radius: 6px; /* Border color when unchecked and pressed */\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton "
                        "when unchecked and not pressed */\n"
"QRadioButton::indicator:unchecked:!pressed {\n"
"    border: 1px solid #ffffff; /* White border when unchecked and \n"
"not pressed */	 \n"
"border-radius: 6px;\n"
"\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton when disabled */\n"
"QRadioButton:disabled {\n"
"    border: 1px solid rgb(214, 187, 152); /* Border color for disabled state */\n"
"}\n"
""));
        Editor_Mode_Tick->setChecked(false);

        Modes_Build_Run_HBOX->addWidget(Editor_Mode_Tick);

        Standalone_Mode_Tick = new QRadioButton(Build_Setup_Frame);
        Standalone_Mode_Tick->setObjectName(QString::fromUtf8("Standalone_Mode_Tick"));
        Standalone_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Set the background color and font for QRadioButtons */\n"
"QRadioButton {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for checked QRadioButtons */\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(240, 125, 126);\n"
"    border-radius: 6px;\n"
"    border: 1px solid #ffffff; /* White border when checked */\n"
"}\n"
"\n"
"/* Set the color for checked QRadioButtons when disabled */\n"
"QRadioButton::indicator:checked:disabled {\n"
"    color: rgb(98, 160, 234);\n"
"    border: 1px solid rgb(214, 187, 152); \n"
"border-radius: 6px;/* Border color for checked and disabled */\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton when unchecked and pressed */\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"    border: 1px solid rgb(240, 125, 126);\n"
"border-radius: 6px; /* Border color when unchecked and pressed */\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton "
                        "when unchecked and not pressed */\n"
"QRadioButton::indicator:unchecked:!pressed {\n"
"    border: 1px solid #ffffff; /* White border when unchecked and \n"
"not pressed */	 \n"
"border-radius: 6px;\n"
"\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton when disabled */\n"
"QRadioButton:disabled {\n"
"    border: 1px solid rgb(214, 187, 152); /* Border color for disabled state */\n"
"}\n"
""));
        Standalone_Mode_Tick->setCheckable(true);
        Standalone_Mode_Tick->setChecked(false);

        Modes_Build_Run_HBOX->addWidget(Standalone_Mode_Tick);

        Game_Mode_Tick = new QRadioButton(Build_Setup_Frame);
        Game_Mode_Tick->setObjectName(QString::fromUtf8("Game_Mode_Tick"));
        Game_Mode_Tick->setStyleSheet(QString::fromUtf8("/* Set the background color and font for QRadioButtons */\n"
"QRadioButton {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for checked QRadioButtons */\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(240, 125, 126);\n"
"    border-radius: 6px;\n"
"    border: 1px solid #ffffff; /* White border when checked */\n"
"}\n"
"\n"
"/* Set the color for checked QRadioButtons when disabled */\n"
"QRadioButton::indicator:checked:disabled {\n"
"    color: rgb(98, 160, 234);\n"
"    border: 1px solid rgb(214, 187, 152); \n"
"border-radius: 6px;/* Border color for checked and disabled */\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton when unchecked and pressed */\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"    border: 1px solid rgb(240, 125, 126);\n"
"border-radius: 6px; /* Border color when unchecked and pressed */\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton "
                        "when unchecked and not pressed */\n"
"QRadioButton::indicator:unchecked:!pressed {\n"
"    border: 1px solid #ffffff; /* White border when unchecked and \n"
"not pressed */	 \n"
"border-radius: 6px;\n"
"\n"
"}\n"
"\n"
"/* Set the border color for QRadioButton when disabled */\n"
"QRadioButton:disabled {\n"
"    border: 1px solid rgb(214, 187, 152); /* Border color for disabled state */\n"
"}\n"
""));

        Modes_Build_Run_HBOX->addWidget(Game_Mode_Tick);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        Modes_Build_Run_HBOX->addItem(horizontalSpacer);

        Open_Sublime_CheckBox = new QCheckBox(Build_Setup_Frame);
        Open_Sublime_CheckBox->setObjectName(QString::fromUtf8("Open_Sublime_CheckBox"));
        Open_Sublime_CheckBox->setStyleSheet(QString::fromUtf8("/* Set the background color and font for QCheckBox */\n"
"QCheckBox {\n"
"    color: rgb(214, 187, 152);\n"
"    font-family: 'Roboto', sans-serif; /* Modern font */\n"
"    font-size: 17px;\n"
"}\n"
"\n"
"/* Set the background color for checked QCheckBox */\n"
"QCheckBox::indicator:checked {\n"
"    background-color: rgb(240, 125, 126);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #ffffff; /* White border when checked */\n"
"}\n"
"\n"
"/* Set the color for checked QCheckBox when disabled */\n"
"QCheckBox::indicator:checked:disabled {\n"
"    color: rgb(98, 160, 234);\n"
"    border: 1px solid rgb(214, 187, 152); /* Border color for checked and disabled */\n"
"}\n"
"\n"
"/* Set the border color for QCheckBox when unchecked and pressed */\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"    border: 1px solid rgb(240, 125, 126); /* Border color when unchecked and pressed */\n"
"}\n"
"\n"
"/* Set the border color for QCheckBox when unchecked and not pressed */\n"
"QCheckBox::indicator:unchecked:!pressed "
                        "{\n"
"    border: 1px solid #ffffff; /* White border when unchecked and not pressed */\n"
"}\n"
"\n"
"/* Set the border color for QCheckBox when disabled */\n"
"QCheckBox:disabled {\n"
"    border: 1px solid rgb(214, 187, 152); /* Border color for disabled state */\n"
"}\n"
""));

        Modes_Build_Run_HBOX->addWidget(Open_Sublime_CheckBox);

        Build_Btn = new QPushButton(Build_Setup_Frame);
        Build_Btn->setObjectName(QString::fromUtf8("Build_Btn"));
        Build_Btn->setMinimumSize(QSize(146, 34));
        Build_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        Modes_Build_Run_HBOX->addWidget(Build_Btn);

        Run_Btn = new QPushButton(Build_Setup_Frame);
        Run_Btn->setObjectName(QString::fromUtf8("Run_Btn"));
        Run_Btn->setMinimumSize(QSize(146, 34));
        Run_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
"QPushButton {\n"
"    background-color: #2a2a2a;\n"
"    color: #ffffff;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font example */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: rgb(214, 187, 152);\n"
"  border-color: #585c62;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color:  rgb(240, 125, 126);\n"
"  border-color: #72767a;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  background-color: #52565a;\n"
"  border-color: #64686c;\n"
"  color: #888888;\n"
"}\n"
""));

        Modes_Build_Run_HBOX->addWidget(Run_Btn);


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
        Standalone_Warning_Lbl->setFont(font2);
        Standalone_Warning_Lbl->setStyleSheet(QString::fromUtf8("/* Label */\n"
"QLabel {\n"
"  color:rgb(211, 133, 59);/* Electric blue text */\n"
"  font-family: 'Roboto', sans-serif; /* Modern font */\n"
"  font-size: 17px;\n"
"  font-weight: normal;\n"
"  padding: 5px;\n"
"}"));

        Standalone_Warning_HBOX->addWidget(Standalone_Warning_Lbl);


        Build_Setup_VBOX->addLayout(Standalone_Warning_HBOX);


        horizontalLayout_2->addLayout(Build_Setup_VBOX);


        formLayout->setWidget(2, QFormLayout::FieldRole, Build_Setup_Frame);

        MainWindow->setCentralWidget(Project_Path_Hbox);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 22));
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
        Search_Plugin_Lbl->setText(QCoreApplication::translate("MainWindow", "Search Plugin", nullptr));
        Plugins_Filter->setInputMask(QString());
        Plugins_Filter->setText(QString());
        Plugins_Filter->setPlaceholderText(QCoreApplication::translate("MainWindow", "filter", nullptr));
        Plugins_Available_Lbl->setText(QCoreApplication::translate("MainWindow", "Disabled Plugins", nullptr));
        Plugins_Enabled_Lbl->setText(QCoreApplication::translate("MainWindow", "Enabled Plugins (Global)", nullptr));
        Toggle_Global_Plugin_Btn->setText(QCoreApplication::translate("MainWindow", "Change Default", nullptr));
        Enable_Project_Plugins_Button->setText(QCoreApplication::translate("MainWindow", "Enable For Project", nullptr));
        Disable_Plugins_Btn->setText(QCoreApplication::translate("MainWindow", "Remove From Project", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Project Plugins", nullptr));
        Main_Menu_Tabs->setTabText(Main_Menu_Tabs->indexOf(Build_Page), QCoreApplication::translate("MainWindow", "Plugins Setup", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Current Content Folder", nullptr));
        Add_Folder_Btn->setText(QCoreApplication::translate("MainWindow", "Add Folder", nullptr));
        Remove_Folder_Btn->setText(QCoreApplication::translate("MainWindow", "Remove Folder", nullptr));
        Create_hierarchy_Btn->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Presets", nullptr));
        Apply_Preset_Btn->setText(QCoreApplication::translate("MainWindow", "Apply Preset", nullptr));
        Main_Menu_Tabs->setTabText(Main_Menu_Tabs->indexOf(Project_Structure_Tab), QCoreApplication::translate("MainWindow", "Project Structure", nullptr));
        Project_Path_Label->setText(QCoreApplication::translate("MainWindow", "Project Path", nullptr));
        UE_Source_Path_Label->setText(QCoreApplication::translate("MainWindow", "Engine Path", nullptr));
        Project_Name_Label->setText(QCoreApplication::translate("MainWindow", "Project Name     ", nullptr));
        UE_Source_Path_Txt->setText(QCoreApplication::translate("MainWindow", "PLease Select the '~/Engine' Folder", nullptr));
        Project_Name_Error->setText(QString());
        Project_Path_Browse_Btn->setText(QCoreApplication::translate("MainWindow", "Set Project Path", nullptr));
        UE_Source_Path_Browse_Btn->setText(QCoreApplication::translate("MainWindow", "Engine Path", nullptr));
        Generate_Project_Files_Btn->setText(QCoreApplication::translate("MainWindow", "Setup Project Files", nullptr));
        UE5_Logo_Lbl->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "UNREAL ENGINE PROJECT MANAGER", nullptr));
        Build_Config_Lbl->setText(QCoreApplication::translate("MainWindow", "Mode", nullptr));
        Editor_Mode_Tick->setText(QCoreApplication::translate("MainWindow", "Editor", nullptr));
        Standalone_Mode_Tick->setText(QCoreApplication::translate("MainWindow", "Standalone", nullptr));
        Game_Mode_Tick->setText(QCoreApplication::translate("MainWindow", "Game", nullptr));
        Open_Sublime_CheckBox->setText(QCoreApplication::translate("MainWindow", "Sublime", nullptr));
        Build_Btn->setText(QCoreApplication::translate("MainWindow", "Build", nullptr));
        Run_Btn->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        Standalone_Warning_Lbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
