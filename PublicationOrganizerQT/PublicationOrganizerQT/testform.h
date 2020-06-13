#ifndef TESTFORM_H
#define TESTFORM_H

#include "graphicshelper.h"
#include <QWidget>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class TestForm;
}

class TestForm : public QWidget
{
    Q_OBJECT

public:
    TestForm(QWidget *parent = nullptr);
    ~TestForm();

private slots:
    void on_ExitButton_clicked();
    void on_SizeButton_clicked();
    bool eventFilter(QObject *watched, QEvent *event);
private:
    Ui::TestForm *ui;
    void SetItemEffects();

    // Graphics Effects
    QGraphicsDropShadowEffect* ProgramLabelShadow = GraphicsHelper::ReturnNewDropShadowEffect();
    QGraphicsDropShadowEffect* ButtonFrameShadow = GraphicsHelper::ReturnNewDropShadowEffect();
    QGraphicsDropShadowEffect* PublicationsPanelShadow = GraphicsHelper::ReturnNewDropShadowEffect();
    QGraphicsDropShadowEffect* SearchAreaShadow = GraphicsHelper::ReturnNewDropShadowEffect();
    QGraphicsDropShadowEffect* PublicationSearchTitleShadow = GraphicsHelper::ReturnNewDropShadowEffect();
};

#endif // TESTFORM_H
