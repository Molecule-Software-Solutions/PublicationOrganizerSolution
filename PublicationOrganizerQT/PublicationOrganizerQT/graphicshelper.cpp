#include "graphicshelper.h"
#include <QVector>

GraphicsHelper::GraphicsHelper()
{

}

// Returns a pointer to a new drop shadow effect
// NOTE: Remember to delete each instance after it is
// applied to a widget control, otherwise this will
// result in a memory leak
QGraphicsDropShadowEffect* GraphicsHelper::ReturnNewDropShadowEffect()
{
    QGraphicsDropShadowEffect* retEffect =
            new QGraphicsDropShadowEffect();
    retEffect->setXOffset(0);
    retEffect->setYOffset(2);
    retEffect->setColor(QColor(0,0,0));
    retEffect->setBlurRadius(6);
    return retEffect;
}

QGradient GraphicsHelper::ReturnNewArtDecoGreenButtonGradient()
{
    QGradientStops grStops = QGradientStops(4);
    QGradient retGradient = QGradient();
    retGradient.setStops(grStops);
    retGradient.setColorAt(0, QColor(53,119,60,29));
    retGradient.setColorAt(0.279, QColor(133,205,101,229));
    retGradient.setColorAt(0.543, QColor(88,148,75,233));
    retGradient.setColorAt(1, QColor(61,102,51,233));
    return retGradient;
}


