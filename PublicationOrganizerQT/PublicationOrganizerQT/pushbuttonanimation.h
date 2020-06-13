#ifndef PUSHBUTTONANIMATION_H
#define PUSHBUTTONANIMATION_H

#include <QPushButton>
#include <QGradient>
#include <QGradientStops>
#include <QGraphicsColorizeEffect>
#include <QPropertyAnimation>
#include <QColor>


class PushButtonAnimation
{

public:

    // Default Constructor
    PushButtonAnimation();

    // Default Destructor
    ~PushButtonAnimation();

    // Public Members
    QColor transparent = QColor(Qt::transparent);
    QColor whiteHover = QColor(255,255,255,60);
    QColor activated = QColor(150,150,150,60);

    // Public Functions
    void ResumeNormalButtonAppearanceFromClicked(QPushButton* button);
    void ResumeNormalButtonAppearanceFromHover(QPushButton* button);
    void AppearanceHoverToClicked(QPushButton* button);
    void AppearanceRestingToHover(QPushButton* button);

private:
    bool isAnimationRunning = false;
};

#endif // PUSHBUTTONANIMATION_H
