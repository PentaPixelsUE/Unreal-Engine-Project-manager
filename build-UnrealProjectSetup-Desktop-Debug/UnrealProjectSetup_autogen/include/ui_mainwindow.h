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
    QWidget *Build_Page;
    QHBoxLayout *horizontalLayout_3;
    QFrame *Plugins_Frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Search_Plugin_Lbl;
    QLineEdit *Plugins_Filter;
    QPushButton *Disable_Plugins_Btn;
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
    QPushButton *Enable_Global_Plugin_Btn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Enable_Project_Plugins_Button;
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
    QTreeWidget *treeWidget;
    QTreeView *treeView;
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
    QPushButton *UE_Source_Path_Browse_Btn;
    QPushButton *Generate_Project_Files_Btn;
    QSpacerItem *verticalSpacer_4;
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
    QPushButton *Run_Btn;
    QPushButton *Build_Btn;
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
        MainWindow->resize(1052, 1015);
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

        horizontalLayout_4->addWidget(Disable_Plugins_Btn);


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
        Disabled_Pluginsl_Area->setGeometry(QRect(0, 0, 416, 422));
        gridLayout_2 = new QGridLayout(Disabled_Pluginsl_Area);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Disabled_Plugins_List = new QListView(Disabled_Pluginsl_Area);
        Disabled_Plugins_List->setObjectName(QString::fromUtf8("Disabled_Plugins_List"));
        QFont font;
        font.setPointSize(12);
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

        Enable_Global_Plugin_Btn = new QPushButton(Plugins_Frame);
        Enable_Global_Plugin_Btn->setObjectName(QString::fromUtf8("Enable_Global_Plugin_Btn"));
        Enable_Global_Plugin_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
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

        Plugins_In_Out_Button_VBOX->addWidget(Enable_Global_Plugin_Btn);

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
        Enabled_Plugins_Area->setGeometry(QRect(0, 0, 413, 187));
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
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 413, 187));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1004, 524));
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Roboto"));
        font1.setBold(false);
        font1.setWeight(50);
        Project_Name_Error->setFont(font1);
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

        Build_SetupButtons_VBOX->addWidget(UE_Source_Path_Browse_Btn);

        Generate_Project_Files_Btn = new QPushButton(PathsFrame);
        Generate_Project_Files_Btn->setObjectName(QString::fromUtf8("Generate_Project_Files_Btn"));
        sizePolicy1.setHeightForWidth(Generate_Project_Files_Btn->sizePolicy().hasHeightForWidth());
        Generate_Project_Files_Btn->setSizePolicy(sizePolicy1);
        Generate_Project_Files_Btn->setMinimumSize(QSize(146, 34));
        Generate_Project_Files_Btn->setSizeIncrement(QSize(0, 0));
        Generate_Project_Files_Btn->setStyleSheet(QString::fromUtf8("/* Button */\n"
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

        Build_SetupButtons_VBOX->addWidget(Generate_Project_Files_Btn);

        verticalSpacer_4 = new QSpacerItem(20, 89, QSizePolicy::Minimum, QSizePolicy::Fixed);

        Build_SetupButtons_VBOX->addItem(verticalSpacer_4);


        Paths_HBOX->addLayout(Build_SetupButtons_VBOX);


        gridLayout_3->addLayout(Paths_HBOX, 0, 0, 1, 1);


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
        Standalone_Warning_Lbl->setFont(font1);
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

        Main_Menu_Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Search_Plugin_Lbl->setText(QCoreApplication::translate("MainWindow", "Search Plugin", nullptr));
        Plugins_Filter->setInputMask(QString());
        Plugins_Filter->setText(QString());
        Plugins_Filter->setPlaceholderText(QCoreApplication::translate("MainWindow", "filter", nullptr));
        Disable_Plugins_Btn->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Plugins_Available_Lbl->setText(QCoreApplication::translate("MainWindow", "Disabled Plugins", nullptr));
        Plugins_Enabled_Lbl->setText(QCoreApplication::translate("MainWindow", "Enabled Plugins (Global)", nullptr));
        Enable_Global_Plugin_Btn->setText(QCoreApplication::translate("MainWindow", "Enable Global", nullptr));
        Enable_Project_Plugins_Button->setText(QCoreApplication::translate("MainWindow", "Enable For Project", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Project Plugins", nullptr));
        Main_Menu_Tabs->setTabText(Main_Menu_Tabs->indexOf(Build_Page), QCoreApplication::translate("MainWindow", "Project Build", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
