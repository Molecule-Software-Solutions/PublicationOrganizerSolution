#include "pushbuttonanimation.h"
#include <QPropertyAnimation>
#include <QGraphicsColorizeEffect>
#include <QPropertyAnimation>
#include <QColorTransform>

PushButtonAnimation::PushButtonAnimation() {};
PushButtonAnimation::~PushButtonAnimation() {};

///
/// \brief PushButtonAnimation::AppearanceRestingToHover
/// Graphics effect that moves the button appearance from resting to a hover state
/// \param button
///
void PushButtonAnimation::AppearanceRestingToHover(QPushButton* button)
{
    if(isAnimationRunning)
    {
        while(isAnimationRunning) {}
    }
    isAnimationRunning = true;
    QGraphicsColorizeEffect* effect = new QGraphicsColorizeEffect(button);
    effect->setColor(transparent);
    button->setGraphicsEffect(effect);
    QPropertyAnimation* animation = new QPropertyAnimation(effect, "color");
    animation->setStartValue(transparent);
    animation->setEndValue(whiteHover);
    animation->setDuration(500);
    animation->start();
    isAnimationRunning = false;
}

///
/// \brief PushButtonAnimation::AppearanceHoverToClicked
/// Graphics effect that moves the button appearance from a hover state to a clicked state
/// \param button
///
void PushButtonAnimation::AppearanceHoverToClicked(QPushButton* button)
{
    if(isAnimationRunning)
    {
        while(isAnimationRunning) {}
    }
    isAnimationRunning = true;
    QGraphicsColorizeEffect* effect = new QGraphicsColorizeEffect(button);
    effect->setColor(whiteHover);
    button->setGraphicsEffect(effect);
    QPropertyAnimation* animation = new QPropertyAnimation(effect, "color");
    animation->setStartValue(whiteHover);
    animation->setEndValue(activated);
    animation->setDuration(250);
    animation->start();
    isAnimationRunning = false;
}

///
/// \brief PushButtonAnimation::ResumeNormalButtonAppearanceFromHover
/// Graphics effect that moves the button appearance from a hover state to a normal state
/// \param button
///
void PushButtonAnimation::ResumeNormalButtonAppearanceFromHover(QPushButton* button)
{
    if(isAnimationRunning)
    {
        while(isAnimationRunning) {}
    }
    isAnimationRunning = true;
    QGraphicsColorizeEffect* effect = new QGraphicsColorizeEffect(button);
    effect->setColor(whiteHover);
    button->setGraphicsEffect(effect);
    QPropertyAnimation* animation = new QPropertyAnimation(effect, "color");
    animation->setStartValue(whiteHover);
    animation->setEndValue(transparent);
    animation->setDuration(500);
    animation->start();
    isAnimationRunning = false;
}

///
/// \brief PushButtonAnimation::ResumeNormalButtonAppearanceFromClicked
/// Graphics effect that moves the button appearance from a clicked state to a normal state
/// \param button
///
void PushButtonAnimation::ResumeNormalButtonAppearanceFromClicked(QPushButton* button)
{
    if(isAnimationRunning)
    {
        while(isAnimationRunning) {}
    }
    isAnimationRunning = true;
    QGraphicsColorizeEffect* effect = new QGraphicsColorizeEffect(button);
    effect->setColor(activated);
    button->setGraphicsEffect(effect);
    QPropertyAnimation* animation = new QPropertyAnimation(effect, "color");
    animation->setStartValue(activated);
    animation->setEndValue(whiteHover);
    animation->setDuration(500);
    animation->start();
    isAnimationRunning = false;
}
