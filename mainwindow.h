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
    pared *pared_26;
    pared *pared_27;
    pared *pared_28;
    pared *pared_29;
    pared *pared_30;
    pared *pared_31;
    pared *pared_32;
    pared *pared_33;
    pared *pared_34;
    pared *pared_35;
    pared *pared_36;
    pared *pared_37;
    pared *pared_38;
    pared *pared_39;
    pared *pared_40;
    pared *pared_41;
    pared *pared_42;
    pared *pared_43;
    pared *pared_44;
    pared *pared_45;
    pared *pared_46;
    pared *pared_47;
    pared *pared_48;
    pared *pared_49;
    pared *pared_50;
    pared *pared_51;
    pared *pared_52;
    pared *pared_53;
    pared *pared_54;


    QList<pared *> paredes_der;
    QList<pared *> paredes_izq;
    QList<pared *> paredes_up;
    QList<pared *> paredes_do;
    //QList<pared>::iterator *it;
    bool EvaluarColision(QList<pared *> listparedes);

};
#endif // MAINWINDOW_H
