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
    pared_10 = new pared(0,0,10,320);//izquierda-
    pared_11 = new pared(-520,0,10,320);//derecha-
    pared_12 = new pared(0,-320,530,10);//abajo-

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
    pared_23 = new pared(-50,-110,5,50);//derecha-
    pared_24 = new pared(-370,-110,5,50);//izquierda-
    pared_25 = new pared(-50,-160,325,5);//arriba-
    pared_26 = new pared(-50,-200,60,5);//abajo-
    pared_27 = new pared(-50,-200,5,40);//derecha
    pared_28 = new pared(-110,-200,5,40);//izquierda
    pared_29 = new pared(-50,-240,65,5);//arriba-
    pared_30 = new pared(-10,-270,60,5);//abajo-
    pared_31 = new pared(-10,-290,65,5);//arriba-
    pared_32 = new pared(-70,-270,5,20);//izquierda-
    pared_33 = new pared(-160,-290,45,5);//arriba-
    pared_34 = new pared(-160,-200,40,5);//abajo-
    pared_35 = new pared(-160,-200,5,90);//derecha-
    pared_36 = new pared(-200,-200,5,90);//izquierda-
    pared_37 = new pared(-110,-270,10,5);//abajo-
    pared_38 = new pared(-110,-270,5,50);//derecha-
    pared_39 = new pared(-120,-270,5,50);//izquierda-
    pared_40 = new pared(-240,-260,60,5);//abajo-
    pared_41 = new pared(-240,-260,5,30);//derecha-
    pared_42 = new pared(-240,-290,100,5);//arriba-
    pared_43 = new pared(-300,-200,40,5);//abajo-
    pared_44 = new pared(-300,-200,5,65);//derecha-
    pared_45 = new pared(-240,-200,20,5);//abajo-
    pared_46 = new pared(-340,-200,5,95);//izquierda-
    pared_47 = new pared(-240,-200,5,20);//derecha-
    pared_48 = new pared(-260,-200,5,25);//izquierda-
    pared_49 = new pared(-240,-220,20,5);//arriba-

    pared_50 = new pared(-430,-260,90,5);//abajo
    pared_51 = new pared(-430,-260,5,60);//derecha

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
    scene->addItem(pared_26);
    scene->addItem(pared_27);
    scene->addItem(pared_28);
    scene->addItem(pared_29);
    scene->addItem(pared_30);
    scene->addItem(pared_31);
    scene->addItem(pared_32);
    scene->addItem(pared_33);
    scene->addItem(pared_34);
    scene->addItem(pared_35);
    scene->addItem(pared_36);
    scene->addItem(pared_37);
    scene->addItem(pared_38);
    scene->addItem(pared_39);
    scene->addItem(pared_40);
    scene->addItem(pared_41);
    scene->addItem(pared_42);
    scene->addItem(pared_43);
    scene->addItem(pared_44);
    scene->addItem(pared_45);
    scene->addItem(pared_46);
    scene->addItem(pared_47);
    scene->addItem(pared_48);
    scene->addItem(pared_49);
    scene->addItem(pared_50);
    scene->addItem(pared_51);
    timer= new QTimer;

    //Derecha
    paredes_der.push_back(pared_11);
    paredes_der.push_back(pared_3);
    paredes_der.push_back(pared_7);
    paredes_der.push_back(pared_13);
    paredes_der.push_back(pared_16);
    paredes_der.push_back(pared_17);
    paredes_der.push_back(pared_23);
    paredes_der.push_back(pared_27);
    paredes_der.push_back(pared_35);
    paredes_der.push_back(pared_38);
    paredes_der.push_back(pared_41);
    paredes_der.push_back(pared_44);
    paredes_der.push_back(pared_47);

    //izquierda
    paredes_izq.push_back(pared_8);
    paredes_izq.push_back(pared_4);
    paredes_izq.push_back(pared_10);
    paredes_izq.push_back(pared_15);
    paredes_izq.push_back(pared_19);
    paredes_izq.push_back(pared_24);
    paredes_izq.push_back(pared_28);
    paredes_izq.push_back(pared_32);
    paredes_izq.push_back(pared_36);
    paredes_izq.push_back(pared_39);
    paredes_izq.push_back(pared_46);
    paredes_izq.push_back(pared_48);

    //arriba
    paredes_up.push_back(pared_2);
    paredes_up.push_back(pared_6);
    paredes_up.push_back(pared_9);
    paredes_up.push_back(pared_21);
    paredes_up.push_back(pared_14);
    paredes_up.push_back(pared_21);
    paredes_up.push_back(pared_25);
    paredes_up.push_back(pared_29);
    paredes_up.push_back(pared_31);
    paredes_up.push_back(pared_33);
    paredes_up.push_back(pared_42);
    paredes_up.push_back(pared_49);

    //abajo
    paredes_do.push_back(pared_1);
    paredes_do.push_back(pared_5);
    paredes_do.push_back(pared_12);
    paredes_do.push_back(pared_18);
    paredes_do.push_back(pared_22);
    paredes_do.push_back(pared_26);
    paredes_do.push_back(pared_30);
    paredes_do.push_back(pared_34);
    paredes_do.push_back(pared_37);
    paredes_do.push_back(pared_40);
    paredes_do.push_back(pared_43);
    paredes_do.push_back(pared_45);


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

