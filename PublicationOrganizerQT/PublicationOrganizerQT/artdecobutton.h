#ifndef ARTDECOBUTTON_H
#define ARTDECOBUTTON_H

#include <QObject>
#include <QPushButton>
#include <QColor>
#include <QtGui>

class ArtDecoButton : public QPushButton
{
    Q_OBJECT
    Q_PROPERTY(QColor* gradientTop MEMBER gradientStepOne DESIGNABLE true)
    Q_PROPERTY(QColor* gradientTopMiddle MEMBER gradientStepTwo DESIGNABLE true)
    Q_PROPERTY(QColor* gradientBottomMiddle MEMBER gradientStepThree DESIGNABLE true)
    Q_PROPERTY(QColor* gradientBottom MEMBER gradientStepFour DESIGNABLE true)

private:
    // Members
    QColor* gradientStepOne;
    QColor* gradientStepTwo;
    QColor* gradientStepThree;
    QColor* gradientStepFour;
    void SetInitialGradient();

public:
    ArtDecoButton(const QIcon& icon, const QString& text, QWidget* parent = nullptr);
    ArtDecoButton(const QString& text, QWidget* parent = nullptr);
    ArtDecoButton(const QWidget* parent = nullptr);
    ~ArtDecoButton();
};

#endif // ARTDECOBUTTON_H
