#include "animatedbackgroundbutton.h"
#include "ui_animatedbackgroundbutton.h"
#include <QLinearGradient>
#include <QPushButton>
#include <QGraphicsColorizeEffect>

AnimatedBackgroundButton::AnimatedBackgroundButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnimatedBackgroundButton)
{
    ui->setupUi(this);
}

AnimatedBackgroundButton::~AnimatedBackgroundButton()
{
    delete ui;
}

void AnimatedBackgroundButton::setText(const QString value)
{
    ui->TextContainer->setText(value);
}

void AnimatedBackgroundButton::enterEvent(QEvent *event)
{

}

void AnimatedBackgroundButton::leaveEvent(QEvent *event)
{

}

void AnimatedBackgroundButton::mousePressEvent(QMouseEvent *event)
{

}

void AnimatedBackgroundButton::mouseReleaseEvent(QMouseEvent *event)
{

}

