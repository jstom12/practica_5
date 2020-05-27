#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,780,350);
    scene->backgroundBrush();
    ui->graphicsView->setBackgroundBrush(QPixmap(":/resources/resources/fondo_pacm_man.png"));
    player= new jugador(20,40,40);
    scene->addItem(player);
    timer= new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

