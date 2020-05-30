#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <jugador.h>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QKeyEvent>
#include <QTimer>
#include <QDebug>
#include <pared.h>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    jugador *player;
    QGraphicsScene *scene;
    void keyPressEvent(QKeyEvent *evento);
    QTimer *timer;
    pared *pared_1;
    pared *pared_2;
    pared *pared_3;
    pared *pared_4;
    pared *pared_5;
    pared *pared_6;
    pared *pared_7;
    pared*pared_8;
    pared *pared_9;
    pared *pared_10;
    pared *pared_11;
    pared *pared_12;
    pared *pared_13;
    pared *pared_14;
    pared *pared_15;
    pared *pared_16;
    pared *pared_17;
    pared *pared_18;
    pared *pared_19;
    pared *pared_20;
    pared *pared_21;
    pared *pared_22;
    pared *pared_23;
    pared *pared_24;
    pared *pared_25;

    QList<pared *> paredes_der;
    QList<pared *> paredes_izq;
    QList<pared *> paredes_up;
    QList<pared *> paredes_do;
    //QList<pared>::iterator *it;
    bool EvaluarColision(QList<pared *> listparedes);

};
#endif // MAINWINDOW_H
