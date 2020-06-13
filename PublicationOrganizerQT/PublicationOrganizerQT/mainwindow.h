#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsDropShadowEffect>
#include "graphicshelper.h"
#include "pushbuttonanimation.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ExitButton_clicked();
    void on_SizeButton_clicked();
    bool eventFilter(QObject *watched, QEvent *event);
private:
    Ui::MainWindow *ui;
    void SetItemEffects();

    // Graphics Effects
    QGraphicsDropShadowEffect* ProgramLabelShadow = GraphicsHelper::ReturnNewDropShadowEffect();
    QGraphicsDropShadowEffect* ButtonFrameShadow = GraphicsHelper::ReturnNewDropShadowEffect();
    QGraphicsDropShadowEffect* PublicationsPanelShadow = GraphicsHelper::ReturnNewDropShadowEffect();
    QGraphicsDropShadowEffect* SearchAreaShadow = GraphicsHelper::ReturnNewDropShadowEffect();
    QGraphicsDropShadowEffect* PublicationSearchTitleShadow = GraphicsHelper::ReturnNewDropShadowEffect();
};
#endif // MAINWINDOW_H
