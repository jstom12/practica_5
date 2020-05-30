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
    ui->graphicsView->setBackgroundBrush(QPixmap());
    player= new jugador(10,20,20);
    pared_9 = new pared(0,0,520,10);//arriba-
    pared_10 = new pared(0,0,10,300);//izquierda-
    pared_11 = new pared(-520,0,10,300);//derecha-
    pared_12 = new pared(0,-300,530,10);//abajo-

    pared_1 = new pared(-50,-50,80,5);//abajo-
    pared_2 = new pared(-50,-60,80,5);//arriba-
    pared_3 = new pared(-50,-50,5,15);//derecha-
    pared_4 = new pared(-130,-50,5,15);//izquierda-
    pared_5 = new pared(-170,-50,100,5);//abajo-
    pared_6 = new pared(-170,-60,100,5);//arriba-
    pared_7 = new pared(-170,-50,5,15);//derecha-
    pared_8 = new pared(-270,-50,5,15);//izquierda-
    pared_13 = new pared(-320,-10,5,55);//derecha-
    pared_14 = new pared(-320,-60,50,5);//arriba-
    pared_15 = new pared(-370,-10,5,55);//izquierda-
    pared_16 = new pared(-410,-30,5,80);//derecha-
    pared_18 = new pared(-410,-30,30,5);//abajo-
    pared_19 = new pared(-440,-30,5,80);//izquierda-
    pared_20 = new pared(-410,-110,35,5);//arriba-
    pared_17 = new pared(-490,-10,5,100);//derecha-
    pared_21 = new pared(-490,-110,30,5);//arriba-
    pared_22 = new pared(-50,-110,320,5);//abajo-
    pared_23 = new pared(-50,-110,5,50);//derecha
    pared_24 = new pared(-370,-110,5,50);//izquierda
    pared_25 = new pared(-50,-160,325,5);//arriba

    scene->addItem(player);
    scene->addItem(pared_1);
    scene->addItem(pared_2);
    scene->addItem(pared_3);
    scene->addItem(pared_4);
    scene->addItem(pared_5);
    scene->addItem(pared_6);
    scene->addItem(pared_7);
    scene->addItem(pared_8);
    scene->addItem(pared_9);
    scene->addItem(pared_10);
    scene->addItem(pared_11);
    scene->addItem(pared_12);
    scene->addItem(pared_13);
    scene->addItem(pared_14);
    scene->addItem(pared_15);
    scene->addItem(pared_16);
    scene->addItem(pared_17);
    scene->addItem(pared_18);
    scene->addItem(pared_19);
    scene->addItem(pared_20);
    scene->addItem(pared_21);
    scene->addItem(pared_22);
    scene->addItem(pared_23);
    scene->addItem(pared_24);
    scene->addItem(pared_25);
    timer= new QTimer;

    //Derecha
    paredes_der.push_back(pared_11);
    paredes_der.push_back(pared_3);
    paredes_der.push_back(pared_7);
    paredes_der.push_back(pared_13);
    paredes_der.push_back(pared_16);
    paredes_der.push_back(pared_17);
    paredes_der.push_back(pared_23);

    //izquierda
    paredes_izq.push_back(pared_8);
    paredes_izq.push_back(pared_4);
    paredes_izq.push_back(pared_10);
    paredes_izq.push_back(pared_15);
    paredes_izq.push_back(pared_19);
    paredes_izq.push_back(pared_24);

    //arriba
    paredes_up.push_back(pared_2);
    paredes_up.push_back(pared_6);
    paredes_up.push_back(pared_9);
    paredes_up.push_back(pared_21);
    paredes_up.push_back(pared_14);
    paredes_up.push_back(pared_21);
    paredes_up.push_back(pared_25);

    //abajo
    paredes_do.push_back(pared_1);
    paredes_do.push_back(pared_5);
    paredes_do.push_back(pared_12);
    paredes_do.push_back(pared_18);
    paredes_do.push_back(pared_22);


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
        if(EvaluarColision(paredes_der)==false)
        {
            player->MoveRight();
        }
    }
    else if(evento->key()==Qt::Key_A)
    {
        if(EvaluarColision(paredes_izq)==false)
        {
            player->MoveLeft();
        }
    }
    else if(evento->key()==Qt::Key_W)
    {
        if(EvaluarColision(paredes_up)==false)
        {
            player->MoveUp();
        }
    }
    else if(evento->key()==Qt::Key_S)
    {
        if(EvaluarColision(paredes_do)==false)
        {
          player->MoveDown();
        }
    }
    qDebug()<<"posx = "<<player->getPosx()<<" posy ="<<player->getPosy();
}

bool MainWindow::EvaluarColision(QList<pared* > listparedes)
{

     if(!listparedes.isEmpty())
     {
         QList<pared *>::iterator it;
         for(it=listparedes.begin(); it!=listparedes.end(); it++)
         {
             if((*it)->collidesWithItem(player))
             {
                 return true;
             }
         }

     }
     return false;
}

