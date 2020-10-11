#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include <QMainWindow>
#include <QQuickWidget>
#include "graphicshelper.h"
#include <QGraphicsEffect>
#include "publicationorganizerdialog.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    enum ButtonStyles{
        Black,
        Blue,
        Green,
        Red,
        Yellow
    };

    explicit MainMenu(QWidget *parent = nullptr);

    PublicationOrganizerDialog dialog;
    void SetupUIComponents();

    // Destructor
    ~MainMenu();

private:
    Ui::MainMenu *ui;
    void InstallEventFilters();
    void SetUpButton(QQuickWidget* buttonPtr, ButtonStyles style, QString text, qreal fontSize, bool transparency);
    void SetupGraphicsEffects();
    bool eventFilter(QObject *watched, QEvent *event);
    void CreateDatabaseIfNoneExists();
    void SetupDatagridWidget();

};

#endif // MAINMENU_H
