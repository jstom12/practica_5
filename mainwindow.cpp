#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,770,330);
    scene->backgroundBrush();
    ui->graphicsView->setBackgroundBrush(QPixmap(":/resources/resources/fondo_pacm_man.png"));
    player= new jugador(20,42,42);
    scene->addItem(player);
    timer= new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key()==Qt::Key_D)
    {
        player->MoveRight();
    }
    else if(evento->key()==Qt::Key_A)
    {
        player->MoveLeft();
    }
    else if(evento->key()==Qt::Key_W)
    {
        player->MoveUp();
    }
    else if(evento->key()==Qt::Key_S)
    {
        player->MoveDown();
    }
    qDebug()<<"posx = "<<player->getPosx()<<" posy ="<<player->getPosy();
}
