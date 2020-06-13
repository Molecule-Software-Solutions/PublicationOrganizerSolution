#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>

namespace Ui {
class MainMenu;
}

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    void SetupUIComponents();
    bool eventFilter(QObject *watched, QEvent *event);
    // Destructor
    ~MainMenu();

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
