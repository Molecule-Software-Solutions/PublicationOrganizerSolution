/********************************************************************************
** Form generated from reading UI file 'ArtDecoButton.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARTDECOBUTTON_H
#define UI_ARTDECOBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QFrame *centralWidget;
    QGridLayout *gridLayout_2;
    QFrame *LeftFrame;
    QFrame *CentralFrame;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QFrame *RightFrame;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(273, 72);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setStyleSheet(QString::fromUtf8("#Form{\n"
"background: none; \n"
"}"));
        gridLayout = new QGridLayout(Form);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        centralWidget = new QFrame(Form);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("#centralWidget {\n"
"	background-color: qlineargradient(spread:pad, x1:0.486, y1:0.0227273, x2:0.486, y2:1, stop:0 rgba(87, 194, 98, 255), stop:0.278846 rgba(166, 255, 126, 255), stop:0.543269 rgba(116, 194, 98, 255));\n"
"	border: solid; \n"
"	border-width: 3px; \n"
"	border-radius: 10px; \n"
"	background-color: qlineargradient(spread:pad, x1:0.486, y1:0.0227273, x2:0.486, y2:1, stop:0 rgba(87, 194, 98, 229), stop:0.278846 rgba(166, 255, 126, 229), stop:0.543269 rgba(116, 194, 98, 233));\n"
"}"));
        centralWidget->setFrameShape(QFrame::StyledPanel);
        centralWidget->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        LeftFrame = new QFrame(centralWidget);
        LeftFrame->setObjectName(QString::fromUtf8("LeftFrame"));
        LeftFrame->setStyleSheet(QString::fromUtf8("#LeftFrame{\n"
"border: solid; \n"
"border-right-width: 3px; \n"
"	border-left-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"}"));
        LeftFrame->setFrameShape(QFrame::StyledPanel);
        LeftFrame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(LeftFrame, 0, 0, 1, 1);

        CentralFrame = new QFrame(centralWidget);
        CentralFrame->setObjectName(QString::fromUtf8("CentralFrame"));
        CentralFrame->setFrameShape(QFrame::StyledPanel);
        CentralFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(CentralFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(CentralFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(CentralFrame, 0, 1, 1, 1);

        RightFrame = new QFrame(centralWidget);
        RightFrame->setObjectName(QString::fromUtf8("RightFrame"));
        RightFrame->setStyleSheet(QString::fromUtf8("#RightFrame{\n"
"border: solid; \n"
"border-left-width: 3px; \n"
"	border-right-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"}"));
        RightFrame->setFrameShape(QFrame::StyledPanel);
        RightFrame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(RightFrame, 0, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 20);
        gridLayout_2->setColumnStretch(1, 60);
        gridLayout_2->setColumnStretch(2, 20);

        gridLayout->addWidget(centralWidget, 0, 0, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTDECOBUTTON_H
