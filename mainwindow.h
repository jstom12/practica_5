#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <jugador.h>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QKeyEvent>
#include <QTimer>
#include <QDebug>

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

};
#endif // MAINWINDOW_H
