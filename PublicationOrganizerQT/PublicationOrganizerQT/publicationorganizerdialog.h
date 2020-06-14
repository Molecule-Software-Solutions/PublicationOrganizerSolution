#ifndef PUBLICATIONORGANIZERDIALOG_H
#define PUBLICATIONORGANIZERDIALOG_H

#include <QDialog>

namespace Ui {
class PublicationOrganizerDialog;
}

class PublicationOrganizerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PublicationOrganizerDialog(QWidget *parent = nullptr);
    ~PublicationOrganizerDialog();
    void SetMessage(QString title, QString message);

private:
    Ui::PublicationOrganizerDialog *ui;
};

#endif // PUBLICATIONORGANIZERDIALOG_H
