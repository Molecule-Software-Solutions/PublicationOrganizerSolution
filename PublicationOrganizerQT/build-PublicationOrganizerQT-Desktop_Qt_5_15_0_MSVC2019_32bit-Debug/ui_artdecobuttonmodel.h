/********************************************************************************
** Form generated from reading UI file 'artdecobuttonmodel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARTDECOBUTTONMODEL_H
#define UI_ARTDECOBUTTONMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArtDecoButtonModel
{
public:
    QGridLayout *gridLayout;
    QFrame *centralFrame;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QFrame *frame_2;
    QFrame *frame_3;

    void setupUi(QWidget *ArtDecoButtonModel)
    {
        if (ArtDecoButtonModel->objectName().isEmpty())
            ArtDecoButtonModel->setObjectName(QString::fromUtf8("ArtDecoButtonModel"));
        ArtDecoButtonModel->resize(400, 87);
        ArtDecoButtonModel->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(ArtDecoButtonModel);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        centralFrame = new QFrame(ArtDecoButtonModel);
        centralFrame->setObjectName(QString::fromUtf8("centralFrame"));
        centralFrame->setStyleSheet(QString::fromUtf8("#centralFrame {\n"
"	background-color: qlineargradient(spread:pad, x1:0.486, y1:0.0227273, x2:0.486, y2:1, stop:0 rgba(23, 38, 8, 229), stop:0.278846 rgba(186, 255, 126, 229), stop:0.644231 rgba(98, 130, 66, 233));\n"
"border: 3px solid; \n"
"border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255)); \n"
"border-radius: 10px; \n"
"}"));
        centralFrame->setFrameShape(QFrame::StyledPanel);
        centralFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(centralFrame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 1, 1, 1);

        frame_2 = new QFrame(centralFrame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("border: solid; \n"
"border-left-width: 5px; \n"
"border-left-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_2, 0, 2, 1, 1);

        frame_3 = new QFrame(centralFrame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("border: solid; \n"
"border-right-width: 5px; \n"
"border-right-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_3, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 10);
        gridLayout_2->setColumnStretch(1, 80);
        gridLayout_2->setColumnStretch(2, 10);

        gridLayout->addWidget(centralFrame, 0, 0, 1, 1);


        retranslateUi(ArtDecoButtonModel);

        QMetaObject::connectSlotsByName(ArtDecoButtonModel);
    } // setupUi

    void retranslateUi(QWidget *ArtDecoButtonModel)
    {
        ArtDecoButtonModel->setWindowTitle(QCoreApplication::translate("ArtDecoButtonModel", "Form", nullptr));
        label->setText(QCoreApplication::translate("ArtDecoButtonModel", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArtDecoButtonModel: public Ui_ArtDecoButtonModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTDECOBUTTONMODEL_H
