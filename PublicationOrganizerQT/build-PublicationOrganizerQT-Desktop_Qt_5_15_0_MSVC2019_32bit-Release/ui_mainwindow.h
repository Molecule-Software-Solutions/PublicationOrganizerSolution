/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *MasterLayer;
    QGridLayout *gridLayout_4;
    QFrame *SearchFrame;
    QGridLayout *gridLayout_7;
    QLineEdit *SearchString_TB;
    QPushButton *Search_BTN;
    QPushButton *ResetSearch_BTN;
    QComboBox *SearchType_CB;
    QFrame *SearchBoxTitleFrame;
    QGridLayout *gridLayout_8;
    QLabel *SearchPublications_LBL;
    QFrame *ButtonFrame;
    QGridLayout *gridLayout_6;
    QPushButton *EditPublication_BTN;
    QPushButton *AddPublication_BTN;
    QPushButton *DeletePublication_BTN;
    QFrame *DataFrame;
    QGridLayout *gridLayout_2;
    QTableView *PublicationTable;
    QWidget *DialogLayer;
    QGridLayout *gridLayout_3;
    QWidget *OverlayLayer;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *ProgramLabel;
    QPushButton *MinimizeButton;
    QPushButton *SizeButton;
    QPushButton *ExitButton;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background-color: rgb(40, 40, 40);\n"
"	border: solid;\n"
"	border-width: 2px; \n"
"	border-radius: 10px;\n"
"	border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"}\n"
"\n"
"#ProgramLabel {\n"
"color: white; \n"
"}\n"
"\n"
"#InnerButtonFrame_1, #InnerButtonFrame_2, #InnerButtonFrame_3 {\n"
"	color: white; \n"
"	border: solid; \n"
"	border-left-width: 3px; \n"
"	border-right-width: 3px; \n"
"	border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: white; \n"
"	border: solid;\n"
"	border-width: 2px; \n"
"	border-ra"
                        "dius: 10px;\n"
"	border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"	background-color: qlineargradient(spread:pad, x1:0.476, y1:0, x2:0.471, y2:1, stop:0.144231 rgba(41, 41, 41, 255), stop:0.389423 rgba(77, 77, 77, 255), stop:0.951923 rgba(16, 16, 16, 255));\n"
"}\n"
"\n"
"#MainWindow {\n"
"	\n"
"	background-color: rgb(47, 47, 47);\n"
"}\n"
"\n"
"#SearchFrame {\n"
"\n"
"}\n"
"\n"
"#PublicationTable {\n"
"border: solid; \n"
"\n"
"	border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"		\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.522273, x2:1, y2:0."
                        "614, stop:0 rgba(0, 0, 0, 255), stop:0.25 rgba(59, 59, 59, 255), stop:0.456731 rgba(0, 0, 0, 255), stop:0.697115 rgba(61, 61, 61, 255), stop:1 rgba(0, 0, 0, 255));\n"
"\n"
"border-width: 2px; \n"
"border-radius: 10px;\n"
"\n"
"}\n"
"\n"
"#ButtonFrame , #SearchFrame, #SearchBoxTitleFrame {\n"
"border: solid; \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.522273, x2:1, y2:0.614, stop:0 rgba(0, 0, 0, 255), stop:0.25 rgba(59, 59, 59, 255), stop:0.456731 rgba(0, 0, 0, 255), stop:0.697115 rgba(61, 61, 61, 255), stop:1 rgba(0, 0, 0, 255));\n"
"border-width: 2px; \n"
"border-radius: 10px;\n"
"	border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 3, 5, 5);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        MasterLayer = new QWidget();
        MasterLayer->setObjectName(QString::fromUtf8("MasterLayer"));
        gridLayout_4 = new QGridLayout(MasterLayer);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        SearchFrame = new QFrame(MasterLayer);
        SearchFrame->setObjectName(QString::fromUtf8("SearchFrame"));
        SearchFrame->setFrameShape(QFrame::StyledPanel);
        SearchFrame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(SearchFrame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        SearchString_TB = new QLineEdit(SearchFrame);
        SearchString_TB->setObjectName(QString::fromUtf8("SearchString_TB"));
        SearchString_TB->setStyleSheet(QString::fromUtf8("#SearchString_TB {\n"
"	background-color: rgb(47, 47, 47);\n"
"}"));

        gridLayout_7->addWidget(SearchString_TB, 1, 1, 1, 1);

        Search_BTN = new QPushButton(SearchFrame);
        Search_BTN->setObjectName(QString::fromUtf8("Search_BTN"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Search_BTN->sizePolicy().hasHeightForWidth());
        Search_BTN->setSizePolicy(sizePolicy);
        Search_BTN->setMinimumSize(QSize(150, 40));
        Search_BTN->setMaximumSize(QSize(150, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Search_BTN->setFont(font);

        gridLayout_7->addWidget(Search_BTN, 1, 2, 1, 1);

        ResetSearch_BTN = new QPushButton(SearchFrame);
        ResetSearch_BTN->setObjectName(QString::fromUtf8("ResetSearch_BTN"));
        sizePolicy.setHeightForWidth(ResetSearch_BTN->sizePolicy().hasHeightForWidth());
        ResetSearch_BTN->setSizePolicy(sizePolicy);
        ResetSearch_BTN->setMinimumSize(QSize(150, 40));
        ResetSearch_BTN->setMaximumSize(QSize(150, 40));
        ResetSearch_BTN->setFont(font);

        gridLayout_7->addWidget(ResetSearch_BTN, 1, 3, 1, 1);

        SearchType_CB = new QComboBox(SearchFrame);
        SearchType_CB->setObjectName(QString::fromUtf8("SearchType_CB"));

        gridLayout_7->addWidget(SearchType_CB, 1, 0, 1, 1);

        SearchBoxTitleFrame = new QFrame(SearchFrame);
        SearchBoxTitleFrame->setObjectName(QString::fromUtf8("SearchBoxTitleFrame"));
        sizePolicy.setHeightForWidth(SearchBoxTitleFrame->sizePolicy().hasHeightForWidth());
        SearchBoxTitleFrame->setSizePolicy(sizePolicy);
        SearchBoxTitleFrame->setMinimumSize(QSize(0, 0));
        SearchBoxTitleFrame->setFrameShape(QFrame::StyledPanel);
        SearchBoxTitleFrame->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(SearchBoxTitleFrame);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        SearchPublications_LBL = new QLabel(SearchBoxTitleFrame);
        SearchPublications_LBL->setObjectName(QString::fromUtf8("SearchPublications_LBL"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        SearchPublications_LBL->setFont(font1);
        SearchPublications_LBL->setStyleSheet(QString::fromUtf8("#SearchPublications_LBL {\n"
"color: white; \n"
"\n"
"}"));
        SearchPublications_LBL->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(SearchPublications_LBL, 0, 0, 1, 1);


        gridLayout_7->addWidget(SearchBoxTitleFrame, 0, 0, 1, 4);


        gridLayout_4->addWidget(SearchFrame, 2, 0, 1, 1);

        ButtonFrame = new QFrame(MasterLayer);
        ButtonFrame->setObjectName(QString::fromUtf8("ButtonFrame"));
        ButtonFrame->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        ButtonFrame->setFrameShape(QFrame::StyledPanel);
        ButtonFrame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(ButtonFrame);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        EditPublication_BTN = new QPushButton(ButtonFrame);
        EditPublication_BTN->setObjectName(QString::fromUtf8("EditPublication_BTN"));
        EditPublication_BTN->setMinimumSize(QSize(175, 40));
        EditPublication_BTN->setMaximumSize(QSize(175, 40));

        gridLayout_6->addWidget(EditPublication_BTN, 0, 2, 1, 1);

        AddPublication_BTN = new QPushButton(ButtonFrame);
        AddPublication_BTN->setObjectName(QString::fromUtf8("AddPublication_BTN"));
        AddPublication_BTN->setMinimumSize(QSize(175, 40));
        AddPublication_BTN->setMaximumSize(QSize(175, 40));

        gridLayout_6->addWidget(AddPublication_BTN, 0, 0, 1, 1);

        DeletePublication_BTN = new QPushButton(ButtonFrame);
        DeletePublication_BTN->setObjectName(QString::fromUtf8("DeletePublication_BTN"));
        DeletePublication_BTN->setMinimumSize(QSize(175, 40));
        DeletePublication_BTN->setMaximumSize(QSize(175, 40));

        gridLayout_6->addWidget(DeletePublication_BTN, 0, 1, 1, 1);


        gridLayout_4->addWidget(ButtonFrame, 0, 0, 1, 1);

        DataFrame = new QFrame(MasterLayer);
        DataFrame->setObjectName(QString::fromUtf8("DataFrame"));
        DataFrame->setFrameShape(QFrame::StyledPanel);
        DataFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(DataFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        PublicationTable = new QTableView(DataFrame);
        PublicationTable->setObjectName(QString::fromUtf8("PublicationTable"));
        sizePolicy.setHeightForWidth(PublicationTable->sizePolicy().hasHeightForWidth());
        PublicationTable->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(PublicationTable, 0, 0, 1, 1);


        gridLayout_4->addWidget(DataFrame, 1, 0, 1, 1);

        gridLayout_4->setRowStretch(1, 1);
        stackedWidget->addWidget(MasterLayer);
        DialogLayer = new QWidget();
        DialogLayer->setObjectName(QString::fromUtf8("DialogLayer"));
        gridLayout_3 = new QGridLayout(DialogLayer);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        stackedWidget->addWidget(DialogLayer);
        OverlayLayer = new QWidget();
        OverlayLayer->setObjectName(QString::fromUtf8("OverlayLayer"));
        gridLayout_5 = new QGridLayout(OverlayLayer);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        stackedWidget->addWidget(OverlayLayer);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, -1, -1);
        ProgramLabel = new QLabel(centralwidget);
        ProgramLabel->setObjectName(QString::fromUtf8("ProgramLabel"));
        ProgramLabel->setFont(font);

        horizontalLayout->addWidget(ProgramLabel);

        MinimizeButton = new QPushButton(centralwidget);
        MinimizeButton->setObjectName(QString::fromUtf8("MinimizeButton"));
        MinimizeButton->setMinimumSize(QSize(50, 30));
        MinimizeButton->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(MinimizeButton);

        SizeButton = new QPushButton(centralwidget);
        SizeButton->setObjectName(QString::fromUtf8("SizeButton"));
        SizeButton->setMinimumSize(QSize(50, 30));
        SizeButton->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(SizeButton);

        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setMinimumSize(QSize(50, 30));
        ExitButton->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(ExitButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 25));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Publication Organizer", nullptr));
        Search_BTN->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        ResetSearch_BTN->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        SearchPublications_LBL->setText(QCoreApplication::translate("MainWindow", "Search Publications", nullptr));
        EditPublication_BTN->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AddPublication_BTN->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        DeletePublication_BTN->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ProgramLabel->setText(QCoreApplication::translate("MainWindow", "Publication Organizer", nullptr));
        MinimizeButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        SizeButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
