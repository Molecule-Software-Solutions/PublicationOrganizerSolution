/********************************************************************************
** Form generated from reading UI file 'animatedbackgroundbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATEDBACKGROUNDBUTTON_H
#define UI_ANIMATEDBACKGROUNDBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnimatedBackgroundButton
{
public:
    QGridLayout *gridLayout_2;
    QFrame *StyleFrame;
    QGridLayout *gridLayout;
    QFrame *LeftDecoFrame;
    QFrame *ContentFrame;
    QGridLayout *gridLayout_3;
    QLabel *TextContainer;
    QFrame *RightDecoFrame;

    void setupUi(QWidget *AnimatedBackgroundButton)
    {
        if (AnimatedBackgroundButton->objectName().isEmpty())
            AnimatedBackgroundButton->setObjectName(QString::fromUtf8("AnimatedBackgroundButton"));
        AnimatedBackgroundButton->resize(176, 47);
        gridLayout_2 = new QGridLayout(AnimatedBackgroundButton);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        StyleFrame = new QFrame(AnimatedBackgroundButton);
        StyleFrame->setObjectName(QString::fromUtf8("StyleFrame"));
        StyleFrame->setStyleSheet(QString::fromUtf8("border: solid; \n"
"border-width: 2px; \n"
"border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"border-radius: 10px; "));
        StyleFrame->setFrameShape(QFrame::StyledPanel);
        StyleFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(StyleFrame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LeftDecoFrame = new QFrame(StyleFrame);
        LeftDecoFrame->setObjectName(QString::fromUtf8("LeftDecoFrame"));
        LeftDecoFrame->setStyleSheet(QString::fromUtf8("border: none; \n"
"background-color: transparent;"));
        LeftDecoFrame->setFrameShape(QFrame::StyledPanel);
        LeftDecoFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(LeftDecoFrame, 0, 0, 1, 1);

        ContentFrame = new QFrame(StyleFrame);
        ContentFrame->setObjectName(QString::fromUtf8("ContentFrame"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        ContentFrame->setFont(font);
        ContentFrame->setStyleSheet(QString::fromUtf8("border: solid; \n"
"border-left-width: 2px;\n"
"border-right-width: 2px;\n"
"border-right-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"border-left-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));"));
        ContentFrame->setFrameShape(QFrame::StyledPanel);
        ContentFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(ContentFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        TextContainer = new QLabel(ContentFrame);
        TextContainer->setObjectName(QString::fromUtf8("TextContainer"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        TextContainer->setFont(font1);
        TextContainer->setStyleSheet(QString::fromUtf8("border: none; "));
        TextContainer->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(TextContainer, 0, 0, 1, 1);


        gridLayout->addWidget(ContentFrame, 0, 1, 1, 1);

        RightDecoFrame = new QFrame(StyleFrame);
        RightDecoFrame->setObjectName(QString::fromUtf8("RightDecoFrame"));
        RightDecoFrame->setStyleSheet(QString::fromUtf8("border: none; \n"
""));
        RightDecoFrame->setFrameShape(QFrame::StyledPanel);
        RightDecoFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(RightDecoFrame, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 10);
        gridLayout->setColumnStretch(1, 80);
        gridLayout->setColumnStretch(2, 10);

        gridLayout_2->addWidget(StyleFrame, 0, 0, 1, 1);


        retranslateUi(AnimatedBackgroundButton);

        QMetaObject::connectSlotsByName(AnimatedBackgroundButton);
    } // setupUi

    void retranslateUi(QWidget *AnimatedBackgroundButton)
    {
        AnimatedBackgroundButton->setWindowTitle(QCoreApplication::translate("AnimatedBackgroundButton", "Form", nullptr));
        TextContainer->setText(QCoreApplication::translate("AnimatedBackgroundButton", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnimatedBackgroundButton: public Ui_AnimatedBackgroundButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATEDBACKGROUNDBUTTON_H
