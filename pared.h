#ifndef PARED_H
#define PARED_H
#include <QGraphicsItem>
#include <QPainter>

class pared: public QGraphicsItem
{
    int posx;
    int posy;
    int w;
    int h;

public:
    pared();
    pared(int x, int y, int w_, int h_ );
    int getPosx() const;
    void setPosx(int value);
    int getPosy() const;
    void setPosy(int value);
    int getW() const;
    void setW(int value);
    int getH() const;
    void setH(int value);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // PARED_H
