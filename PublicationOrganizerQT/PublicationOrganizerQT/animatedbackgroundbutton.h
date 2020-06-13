#ifndef ANIMATEDBACKGROUNDBUTTON_H
#define ANIMATEDBACKGROUNDBUTTON_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class AnimatedBackgroundButton;
}

class AnimatedBackgroundButton : public QWidget
{
    Q_OBJECT

public:
    explicit AnimatedBackgroundButton(QWidget *parent = nullptr);
    ~AnimatedBackgroundButton();

    void setText(const QString value);
    void enterEvent(QEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    // Ui Member
    Ui::AnimatedBackgroundButton *ui;
};

#endif // ANIMATEDBACKGROUNDBUTTON_H
