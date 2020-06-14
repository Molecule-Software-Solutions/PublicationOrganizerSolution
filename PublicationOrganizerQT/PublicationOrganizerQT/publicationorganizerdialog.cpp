#include "publicationorganizerdialog.h"
#include "ui_publicationorganizerdialog.h"
#include <QString>

PublicationOrganizerDialog::PublicationOrganizerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PublicationOrganizerDialog)
{
    ui->setupUi(this);
    this->setModal(true);
    this->setWindowFlag(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

PublicationOrganizerDialog::~PublicationOrganizerDialog()
{
    delete ui;
}

void PublicationOrganizerDialog::SetMessage(QString title, QString message)
{
    ui->label->setText(title);
    ui->dialogMessage->setText(message);
}
