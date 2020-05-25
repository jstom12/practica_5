#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(-100,-100,200,200);
    scene->backgroundBrush();
    ui->graphicsView->setBackgroundBrush(QPixmap(":/resources/resources/fondo.jpeg"));
    player= new jugador(20,0,0);
    scene->addItem(player);
    timer= new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

