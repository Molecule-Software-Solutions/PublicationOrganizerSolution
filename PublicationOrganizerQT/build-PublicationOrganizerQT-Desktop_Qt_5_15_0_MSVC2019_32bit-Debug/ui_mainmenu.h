/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QGridLayout *gridLayout;
    QFrame *RootFrame;
    QGridLayout *gridLayout_2;
    QFrame *SearchFrame;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit;
    QQuickWidget *Search_BTN;
    QQuickWidget *ResetSearch_BTN;
    QComboBox *comboBox;
    QFrame *ApplicationControlFrame;
    QGridLayout *gridLayout_3;
    QFrame *TitleSection;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QQuickWidget *Minimize_BTN;
    QQuickWidget *MaximizeRestore_BTN;
    QQuickWidget *Close_BTN;
    QFrame *ButtonSection;
    QGridLayout *gridLayout_5;
    QQuickWidget *EditPublication_BTN;
    QQuickWidget *AddPublication_BTN;
    QQuickWidget *DeletePublication_BTN;
    QQuickWidget *PrintReport_BTN;
    QFrame *ContentFrame;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidget;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(1000, 700);
        MainMenu->setStyleSheet(QString::fromUtf8("#RootFrame , #ButtonSection, #ContentFrame, #SearchFrame{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.522273, x2:1, y2:0.614, stop:0 rgba(0, 0, 0, 255), stop:0.25 rgba(59, 59, 59, 255), stop:0.456731 rgba(0, 0, 0, 255), stop:0.697115 rgba(61, 61, 61, 255), stop:1 rgba(0, 0, 0, 255));\n"
"border: solid;\n"
"border-width: 2;\n"
"border-radius: 10;\n"
"border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"margin: 5;\n"
"}"));
        gridLayout = new QGridLayout(MainMenu);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        RootFrame = new QFrame(MainMenu);
        RootFrame->setObjectName(QString::fromUtf8("RootFrame"));
        RootFrame->setStyleSheet(QString::fromUtf8(""));
        RootFrame->setFrameShape(QFrame::StyledPanel);
        RootFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(RootFrame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        SearchFrame = new QFrame(RootFrame);
        SearchFrame->setObjectName(QString::fromUtf8("SearchFrame"));
        SearchFrame->setFrameShape(QFrame::StyledPanel);
        SearchFrame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(SearchFrame);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lineEdit = new QLineEdit(SearchFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_6->addWidget(lineEdit, 0, 1, 1, 1);

        Search_BTN = new QQuickWidget(SearchFrame);
        Search_BTN->setObjectName(QString::fromUtf8("Search_BTN"));
        Search_BTN->setMinimumSize(QSize(175, 40));
        Search_BTN->setMaximumSize(QSize(175, 40));
        Search_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_6->addWidget(Search_BTN, 0, 2, 1, 1);

        ResetSearch_BTN = new QQuickWidget(SearchFrame);
        ResetSearch_BTN->setObjectName(QString::fromUtf8("ResetSearch_BTN"));
        ResetSearch_BTN->setMinimumSize(QSize(175, 40));
        ResetSearch_BTN->setMaximumSize(QSize(175, 40));
        ResetSearch_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_6->addWidget(ResetSearch_BTN, 0, 3, 1, 1);

        comboBox = new QComboBox(SearchFrame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_6->addWidget(comboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(SearchFrame, 2, 0, 1, 1);

        ApplicationControlFrame = new QFrame(RootFrame);
        ApplicationControlFrame->setObjectName(QString::fromUtf8("ApplicationControlFrame"));
        ApplicationControlFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"border: none;\n"
"background-color: transparent;\n"
"\n"
"}"));
        ApplicationControlFrame->setFrameShape(QFrame::StyledPanel);
        ApplicationControlFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(ApplicationControlFrame);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 5, 0, 0);
        TitleSection = new QFrame(ApplicationControlFrame);
        TitleSection->setObjectName(QString::fromUtf8("TitleSection"));
        TitleSection->setStyleSheet(QString::fromUtf8("QFrame {\n"
"border: none;\n"
"background-color: transparent;\n"
"}"));
        TitleSection->setFrameShape(QFrame::StyledPanel);
        TitleSection->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(TitleSection);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        label = new QLabel(TitleSection);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"\n"
"}"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        Minimize_BTN = new QQuickWidget(TitleSection);
        Minimize_BTN->setObjectName(QString::fromUtf8("Minimize_BTN"));
        Minimize_BTN->setMinimumSize(QSize(22, 22));
        Minimize_BTN->setMaximumSize(QSize(22, 22));
        Minimize_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_4->addWidget(Minimize_BTN, 0, 2, 1, 1);

        MaximizeRestore_BTN = new QQuickWidget(TitleSection);
        MaximizeRestore_BTN->setObjectName(QString::fromUtf8("MaximizeRestore_BTN"));
        MaximizeRestore_BTN->setMinimumSize(QSize(22, 22));
        MaximizeRestore_BTN->setMaximumSize(QSize(22, 22));
        MaximizeRestore_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_4->addWidget(MaximizeRestore_BTN, 0, 3, 1, 1);

        Close_BTN = new QQuickWidget(TitleSection);
        Close_BTN->setObjectName(QString::fromUtf8("Close_BTN"));
        Close_BTN->setMinimumSize(QSize(22, 22));
        Close_BTN->setMaximumSize(QSize(22, 22));
        Close_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_4->addWidget(Close_BTN, 0, 4, 1, 1);


        gridLayout_3->addWidget(TitleSection, 1, 0, 1, 1);

        ButtonSection = new QFrame(ApplicationControlFrame);
        ButtonSection->setObjectName(QString::fromUtf8("ButtonSection"));
        ButtonSection->setFrameShape(QFrame::StyledPanel);
        ButtonSection->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(ButtonSection);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        EditPublication_BTN = new QQuickWidget(ButtonSection);
        EditPublication_BTN->setObjectName(QString::fromUtf8("EditPublication_BTN"));
        EditPublication_BTN->setMinimumSize(QSize(175, 40));
        EditPublication_BTN->setMaximumSize(QSize(175, 40));
        EditPublication_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_5->addWidget(EditPublication_BTN, 0, 2, 1, 1);

        AddPublication_BTN = new QQuickWidget(ButtonSection);
        AddPublication_BTN->setObjectName(QString::fromUtf8("AddPublication_BTN"));
        AddPublication_BTN->setMinimumSize(QSize(175, 40));
        AddPublication_BTN->setMaximumSize(QSize(175, 40));
        AddPublication_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_5->addWidget(AddPublication_BTN, 0, 0, 1, 1);

        DeletePublication_BTN = new QQuickWidget(ButtonSection);
        DeletePublication_BTN->setObjectName(QString::fromUtf8("DeletePublication_BTN"));
        DeletePublication_BTN->setMinimumSize(QSize(175, 40));
        DeletePublication_BTN->setMaximumSize(QSize(175, 40));
        DeletePublication_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_5->addWidget(DeletePublication_BTN, 0, 1, 1, 1);

        PrintReport_BTN = new QQuickWidget(ButtonSection);
        PrintReport_BTN->setObjectName(QString::fromUtf8("PrintReport_BTN"));
        PrintReport_BTN->setMinimumSize(QSize(175, 40));
        PrintReport_BTN->setMaximumSize(QSize(175, 40));
        PrintReport_BTN->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_5->addWidget(PrintReport_BTN, 0, 3, 1, 1);


        gridLayout_3->addWidget(ButtonSection, 2, 0, 1, 1);


        gridLayout_2->addWidget(ApplicationControlFrame, 0, 0, 1, 1);

        ContentFrame = new QFrame(RootFrame);
        ContentFrame->setObjectName(QString::fromUtf8("ContentFrame"));
        ContentFrame->setFrameShape(QFrame::StyledPanel);
        ContentFrame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(ContentFrame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tableWidget = new QTableWidget(ContentFrame);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.522273, x2:1, y2:0.614, stop:0 rgba(0, 0, 0, 255), stop:0.25 rgba(59, 59, 59, 255), stop:0.456731 rgba(0, 0, 0, 255), stop:0.697115 rgba(61, 61, 61, 255), stop:1 rgba(0, 0, 0, 255));"));

        gridLayout_7->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(ContentFrame, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(1, 1);

        gridLayout->addWidget(RootFrame, 0, 0, 1, 1);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "Form", nullptr));
        label->setText(QCoreApplication::translate("MainMenu", "Publication Organizer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
