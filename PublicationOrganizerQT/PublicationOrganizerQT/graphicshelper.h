#ifndef GRAPHICSHELPER_H
#define GRAPHICSHELPER_H

#include <QGraphicsDropShadowEffect>
#include <QGradient>
#include <QGradientStop>
#include <QGradientStops>


class GraphicsHelper
{
public:
    GraphicsHelper();
    ~GraphicsHelper();

static QGraphicsDropShadowEffect* ReturnNewDropShadowEffect();
static QGradient ReturnNewArtDecoGreenButtonGradient();

private:

static QGradientStops ReturnNewArtDecoButtonGradientStops();
};


#endif // GRAPHICSHELPER_H
