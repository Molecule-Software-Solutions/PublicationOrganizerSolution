/********************************************************************************
** Form generated from reading UI file 'publicationorganizerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLICATIONORGANIZERDIALOG_H
#define UI_PUBLICATIONORGANIZERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_PublicationOrganizerDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QFrame *innerFrame;
    QGridLayout *gridLayout_2;
    QLabel *dialogMessage;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *PublicationOrganizerDialog)
    {
        if (PublicationOrganizerDialog->objectName().isEmpty())
            PublicationOrganizerDialog->setObjectName(QString::fromUtf8("PublicationOrganizerDialog"));
        PublicationOrganizerDialog->resize(400, 300);
        PublicationOrganizerDialog->setStyleSheet(QString::fromUtf8("#dialogMessage {\n"
"margin: 5;\n"
"background-color: transparent;\n"
"color: white;\n"
"}\n"
"\n"
"\n"
"#frame, #innerFrame{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.522273, x2:1, y2:0.614, stop:0 rgba(0, 0, 0, 255), stop:0.25 rgba(59, 59, 59, 255), stop:0.456731 rgba(0, 0, 0, 255), stop:0.697115 rgba(61, 61, 61, 255), stop:1 rgba(0, 0, 0, 255));\n"
"border: solid;\n"
"border-width: 2;\n"
"border-radius: 10;\n"
"border-color: qlineargradient(spread:pad, x1:0.0240385, y1:0.54, x2:1, y2:0.551, stop:0 rgba(156, 156, 156, 255), stop:0.153846 rgba(104, 104, 104, 255), stop:0.360577 rgba(187, 187, 187, 255), stop:0.725962 rgba(105, 105, 105, 255), stop:0.942308 rgba(132, 132, 132, 255));\n"
"margin: 5;\n"
"}"));
        gridLayout = new QGridLayout(PublicationOrganizerDialog);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(PublicationOrganizerDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("#label {\n"
"	color: white;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        innerFrame = new QFrame(frame);
        innerFrame->setObjectName(QString::fromUtf8("innerFrame"));
        innerFrame->setStyleSheet(QString::fromUtf8(""));
        innerFrame->setFrameShape(QFrame::StyledPanel);
        innerFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(innerFrame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        dialogMessage = new QLabel(innerFrame);
        dialogMessage->setObjectName(QString::fromUtf8("dialogMessage"));
        dialogMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dialogMessage->setWordWrap(true);

        gridLayout_2->addWidget(dialogMessage, 1, 0, 1, 1);


        gridLayout_3->addWidget(innerFrame, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout_3->addWidget(buttonBox, 2, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayout_3->setRowStretch(1, 1);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(PublicationOrganizerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PublicationOrganizerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PublicationOrganizerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PublicationOrganizerDialog);
    } // setupUi

    void retranslateUi(QDialog *PublicationOrganizerDialog)
    {
        PublicationOrganizerDialog->setWindowTitle(QCoreApplication::translate("PublicationOrganizerDialog", "Dialog", nullptr));
        dialogMessage->setText(QCoreApplication::translate("PublicationOrganizerDialog", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("PublicationOrganizerDialog", "DialogTitle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PublicationOrganizerDialog: public Ui_PublicationOrganizerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLICATIONORGANIZERDIALOG_H
