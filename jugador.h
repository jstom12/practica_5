#ifndef JUGADOR_H
#define JUGADOR_H
#include <QGraphicsItem>
#include <QPainter>


class jugador: public QGraphicsItem
{
    int r;
    int posx;
    int posy;

public:
    jugador();
    jugador(int r, int x , int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    int getR() const;
    void setR(int value);
    int getPosx() const;
    void setPosx(int value);
    int getPosy() const;
    void setPosy(int value);
    void MoveRight();
    void MoveLeft();
    void MoveUp();
    void MoveDown();
};

#endif // JUGADOR_H
