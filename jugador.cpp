#include "jugador.h"

int jugador::getR() const
{
    return r;
}

void jugador::setR(int value)
{
    r = value;
}

int jugador::getPosx() const
{
    return posx;
}

void jugador::setPosx(int value)
{
    posx = value;
}

int jugador::getPosy() const
{
    return posy;
}

void jugador::setPosy(int value)
{
    posy = value;
}

jugador::jugador()
{

}

jugador::jugador(int r_, int x, int y)
{
    r=r_;
    posx=x;
    posy=y;
    setPos(posx,posy);
}

QRectF jugador::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void jugador::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap;
    pixmap.load(":/resources/resources/pacman_3.png");
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

void jugador::MoveRight()
{
    posx+=10;//*vel;
    setPos(posx,posy);
}

void jugador::MoveLeft()
{
    posx-=10;//*vel;
    setPos(posx,posy);
}

void jugador::MoveUp()
{
    posy-=10;//*vel;
    setPos(posx,posy);
}

void jugador::MoveDown()
{
    posy+=10;//*vel;
    setPos(posx,posy);
}
