#include "pared.h"

int pared::getPosx() const
{
    return posx;
}

void pared::setPosx(int value)
{
    posx = value;
}

int pared::getPosy() const
{
    return posy;
}

void pared::setPosy(int value)
{
    posy = value;
}

int pared::getW() const
{
    return w;
}

void pared::setW(int value)
{
    w = value;
}

int pared::getH() const
{
    return h;
}

void pared::setH(int value)
{
    h = value;
}

QRectF pared::boundingRect() const
{
    return QRect(-posx,-posy,w,h);
}

void pared::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}

pared::pared()
{

}

pared::pared(int x, int y, int w_, int h_)
{
    posx=x;
    posy=y;
    w=w_;
    h=h_;

}
