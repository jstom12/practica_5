#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,540,330);
    scene->backgroundBrush();
    ui->graphicsView->setBackgroundBrush(QPixmap());
    player= new jugador(10,20,20);
    pared_9 = new pared(0,0,520,10);//arriba-
    pared_10 = new pared(0,0,10,170);//izquierda-
    pared_59 = new pared(0,-200,10,120);//izquierda
    pared_11 = new pared(-520,0,10,210);//derecha-
    pared_60 = new pared(-520,-240,10,90);//derecha
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
    pared_50 = new pared(-430,-260,90,5);//abajo-
    pared_51 = new pared(-430,-260,5,60);//derecha-
    pared_52 = new pared(-380,-230,20,5);//abajo-
    pared_53 = new pared(-410,-160,80,5);//abajo-
    pared_54 = new pared(-380,-230,5,90);//derecha-
    pared_55 = new pared(-400,-230,5,90);//izquierda-
    pared_56 = new pared(-410,-160,5,40);//derecha-
    pared_57 = new pared(-410,-200,80,5);//arriba-
    pared_58 = new pared(-490,-160,5,45);//izquierda-

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
    scene->addItem(pared_52);
    scene->addItem(pared_53);
    scene->addItem(pared_54);
    scene->addItem(pared_55);
    scene->addItem(pared_56);
    scene->addItem(pared_57);
    scene->addItem(pared_58);
    scene->addItem(pared_59);
    scene->addItem(pared_60);
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
    paredes_der.push_back(pared_51);
    paredes_der.push_back(pared_54);
    paredes_der.push_back(pared_56);
    paredes_der.push_back(pared_60);

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
    paredes_izq.push_back(pared_55);
    paredes_izq.push_back(pared_58);
    paredes_izq.push_back(pared_59);

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
    paredes_up.push_back(pared_57);


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
    paredes_do.push_back(pared_50);
    paredes_do.push_back(pared_53);
    paredes_do.push_back(pared_52);

    //bolitas

    bolita_1 = new jugador(5,30,30);
    scene->addItem(bolita_1);
    bolitas.push_back(bolita_1);
    bolita_2 = new jugador(5,50,30);
    scene->addItem(bolita_2);
    bolitas.push_back(bolita_2);
    bolita_3 = new jugador(5,70,30);
    scene->addItem(bolita_3);
    bolitas.push_back(bolita_3);
    bolita_4 = new jugador(5,90,30);
    scene->addItem(bolita_4);
    bolitas.push_back(bolita_4);
    bolita_5 = new jugador(5,110,30);
    scene->addItem(bolita_5);
    bolitas.push_back(bolita_5);
    bolita_6 = new jugador(5,130,30);
    scene->addItem(bolita_6);
    bolitas.push_back(bolita_6);
    bolita_7 = new jugador(5,150,30);
    scene->addItem(bolita_7);
    bolitas.push_back(bolita_7);
    bolita_8 = new jugador(5,170,30);
    scene->addItem(bolita_8);
    bolitas.push_back(bolita_8);
    bolita_9 = new jugador(5,190,30);
    scene->addItem(bolita_9);
    bolitas.push_back(bolita_9);
    bolita_10 = new jugador(5,210,30);
    scene->addItem(bolita_10);
    bolitas.push_back(bolita_10);
    bolita_11 = new jugador(5,230,30);
    scene->addItem(bolita_11);
    bolitas.push_back(bolita_11);
    bolita_12 = new jugador(5,250,30);
    scene->addItem(bolita_12);
    bolitas.push_back(bolita_12);
    bolita_13 = new jugador(5,270,30);
    scene->addItem(bolita_13);
    bolitas.push_back(bolita_13);
    bolita_14 = new jugador(5,290,30);
    scene->addItem(bolita_14);
    bolitas.push_back(bolita_14);
    bolita_15 = new jugador(5,310,30);
    scene->addItem(bolita_15);
    bolitas.push_back(bolita_15);
    bolita_16 = new jugador(5,30,50);
    scene->addItem(bolita_16);
    bolitas.push_back(bolita_16);
    bolita_17 = new jugador(5,30,70);
    scene->addItem(bolita_17);
    bolitas.push_back(bolita_17);
    bolita_18 = new jugador(5,30,90);
    scene->addItem(bolita_18);
    bolitas.push_back(bolita_18);
    bolita_19 = new jugador(5,30,110);
    scene->addItem(bolita_19);
    bolitas.push_back(bolita_19);
    bolita_20 = new jugador(5,30,130);
    scene->addItem(bolita_20);
    bolitas.push_back(bolita_20);
    bolita_21 = new jugador(5,30,150);
    scene->addItem(bolita_21);
    bolitas.push_back(bolita_21);
    bolita_22 = new jugador(5,30,170);
    scene->addItem(bolita_22);
    bolitas.push_back(bolita_22);
    bolita_23 = new jugador(5,30,190);
    scene->addItem(bolita_23);
    bolitas.push_back(bolita_23);
    bolita_24 = new jugador(5,30,210);
    scene->addItem(bolita_24);
    bolitas.push_back(bolita_24);
    bolita_25 = new jugador(5,30,230);
    scene->addItem(bolita_25);
    bolitas.push_back(bolita_25);
    bolita_26 = new jugador(5,30,250);
    scene->addItem(bolita_26);
    bolitas.push_back(bolita_26);
    bolita_27= new jugador(5,50,90);
    scene->addItem(bolita_27);
    bolitas.push_back(bolita_27);
    bolita_28= new jugador(5,70,90);
    scene->addItem(bolita_28);
    bolitas.push_back(bolita_28);
    bolita_29= new jugador(5,90,90);
    scene->addItem(bolita_29);
    bolitas.push_back(bolita_29);
    bolita_30= new jugador(5,110,90);
    scene->addItem(bolita_30);
    bolitas.push_back(bolita_30);
    bolita_31= new jugador(5,130,90);
    scene->addItem(bolita_31);
    bolitas.push_back(bolita_31);
    bolita_32= new jugador(5,150,90);
    scene->addItem(bolita_32);
    bolitas.push_back(bolita_32);
    bolita_33= new jugador(5,170,90);
    scene->addItem(bolita_33);
    bolitas.push_back(bolita_33);
    bolita_34= new jugador(5,190,90);
    scene->addItem(bolita_34);
    bolitas.push_back(bolita_34);
    bolita_35= new jugador(5,210,90);
    scene->addItem(bolita_35);
    bolitas.push_back(bolita_35);
    bolita_36= new jugador(5,230,90);
    scene->addItem(bolita_36);
    bolitas.push_back(bolita_36);
    bolita_37= new jugador(5,250,90);
    scene->addItem(bolita_37);
    bolitas.push_back(bolita_37);
    bolita_38= new jugador(5,270,90);
    scene->addItem(bolita_38);
    bolitas.push_back(bolita_38);
    bolita_39= new jugador(5,290,90);
    scene->addItem(bolita_39);
    bolitas.push_back(bolita_39);
    bolita_40= new jugador(5,310,90);
    scene->addItem(bolita_40);
    bolitas.push_back(bolita_40);
    bolita_41= new jugador(5,330,90);
    scene->addItem(bolita_41);
    bolitas.push_back(bolita_41);
    bolita_42= new jugador(5,350,90);
    scene->addItem(bolita_42);
    bolitas.push_back(bolita_42);
    bolita_43= new jugador(5,370,90);
    scene->addItem(bolita_43);
    bolitas.push_back(bolita_43);
    bolita_44= new jugador(5,390,90);
    scene->addItem(bolita_44);
    bolitas.push_back(bolita_44);
    bolita_45= new jugador(5,50,180);
    scene->addItem(bolita_45);
    bolitas.push_back(bolita_45);
    bolita_46= new jugador(5,70,180);
    scene->addItem(bolita_46);
    bolitas.push_back(bolita_46);
    bolita_47= new jugador(5,90,180);
    scene->addItem(bolita_47);
    bolitas.push_back(bolita_47);
    bolita_48= new jugador(5,110,180);
    scene->addItem(bolita_48);
    bolitas.push_back(bolita_48);
    bolita_49= new jugador(5,130,180);
    scene->addItem(bolita_49);
    bolitas.push_back(bolita_49);
    bolita_50= new jugador(5,150,180);
    scene->addItem(bolita_50);
    bolitas.push_back(bolita_50);
    bolita_51= new jugador(5,170,180);
    scene->addItem(bolita_51);
    bolitas.push_back(bolita_51);
    bolita_52= new jugador(5,190,180);
    scene->addItem(bolita_52);
    bolitas.push_back(bolita_52);
    bolita_53= new jugador(5,210,180);
    scene->addItem(bolita_53);
    bolitas.push_back(bolita_53);
    bolita_54= new jugador(5,230,180);
    scene->addItem(bolita_54);
    bolitas.push_back(bolita_54);
    bolita_55= new jugador(5,250,180);
    scene->addItem(bolita_55);
    bolitas.push_back(bolita_55);
    bolita_56= new jugador(5,270,180);
    scene->addItem(bolita_56);
    bolitas.push_back(bolita_56);
    bolita_57= new jugador(5,290,180);
    scene->addItem(bolita_57);
    bolitas.push_back(bolita_57);
    bolita_58= new jugador(5,310,180);
    scene->addItem(bolita_58);
    bolitas.push_back(bolita_58);
    bolita_59= new jugador(5,330,180);
    scene->addItem(bolita_59);
    bolitas.push_back(bolita_59);
    bolita_60= new jugador(5,350,180);
    scene->addItem(bolita_60);
    bolitas.push_back(bolita_60);
    bolita_61= new jugador(5,370,180);
    scene->addItem(bolita_61);
    bolitas.push_back(bolita_61);
    bolita_62= new jugador(5,390,180);
    scene->addItem(bolita_62);
    bolitas.push_back(bolita_62);
    bolita_63 = new jugador(5,390,30);
    scene->addItem(bolita_63);
    bolitas.push_back(bolita_63);
    bolita_64 = new jugador(5,390,50);
    scene->addItem(bolita_64);
    bolitas.push_back(bolita_64);
    bolita_65 = new jugador(5,390,70);
    scene->addItem(bolita_65);
    bolitas.push_back(bolita_65);
    bolita_66 = new jugador(5,390,90);
    scene->addItem(bolita_66);
    bolitas.push_back(bolita_66);
    bolita_67 = new jugador(5,390,110);
    scene->addItem(bolita_67);
    bolitas.push_back(bolita_67);
    bolita_68 = new jugador(5,390,130);
    scene->addItem(bolita_68);
    bolitas.push_back(bolita_68);
    bolita_69 = new jugador(5,390,150);
    scene->addItem(bolita_69);
    bolitas.push_back(bolita_69);
    bolita_70 = new jugador(5,390,210);
    scene->addItem(bolita_70);
    bolitas.push_back(bolita_70);
    bolita_71 = new jugador(5,410,20);
    scene->addItem(bolita_71);
    bolitas.push_back(bolita_71);
    bolita_72 = new jugador(5,440,20);
    scene->addItem(bolita_72);
    bolitas.push_back(bolita_72);
    bolita_73= new jugador(5,430,140);
    scene->addItem(bolita_73);
    bolitas.push_back(bolita_73);
    bolita_74= new jugador(5,450,140);
    scene->addItem(bolita_74);
    bolitas.push_back(bolita_74);
    bolita_75= new jugador(5,470,140);
    scene->addItem(bolita_75);
    bolitas.push_back(bolita_75);
    bolita_76= new jugador(5,490,140);
    scene->addItem(bolita_76);
    bolitas.push_back(bolita_76);
    bolita_77= new jugador(5,510,140);
    scene->addItem(bolita_77);
    bolitas.push_back(bolita_77);
    bolita_78 = new jugador(5,140,200);
    scene->addItem(bolita_78);
    bolitas.push_back(bolita_78);
    bolita_79 = new jugador(5,140,220);
    scene->addItem(bolita_79);
    bolitas.push_back(bolita_79);
    bolita_80 = new jugador(5,140,240);
    scene->addItem(bolita_80);
    bolitas.push_back(bolita_80);
    bolita_81 = new jugador(5,140,260);
    scene->addItem(bolita_81);
    bolitas.push_back(bolita_81);
    bolita_82 = new jugador(5,140,280);
    scene->addItem(bolita_82);
    bolitas.push_back(bolita_82);
    bolita_83 = new jugador(5,140,300);
    scene->addItem(bolita_83);
    bolitas.push_back(bolita_83);
    bolita_84 = new jugador(5,220,200);
    scene->addItem(bolita_84);
    bolitas.push_back(bolita_84);
    bolita_85 = new jugador(5,220,220);
    scene->addItem(bolita_85);
    bolitas.push_back(bolita_85);
    bolita_86 = new jugador(5,220,240);
    scene->addItem(bolita_86);
    bolitas.push_back(bolita_86);
    bolita_87 = new jugador(5,220,260);
    scene->addItem(bolita_87);
    bolitas.push_back(bolita_87);
    bolita_88 = new jugador(5,220,280);
    scene->addItem(bolita_88);
    bolitas.push_back(bolita_88);
    bolita_89 = new jugador(5,220,300);
    scene->addItem(bolita_89);
    bolitas.push_back(bolita_89);
    bolita_90 = new jugador(5,360,200);
    scene->addItem(bolita_90);
    bolitas.push_back(bolita_90);
    bolita_91 = new jugador(5,360,220);
    scene->addItem(bolita_91);
    bolitas.push_back(bolita_91);
    bolita_92 = new jugador(5,360,240);
    scene->addItem(bolita_92);
    bolitas.push_back(bolita_92);
    bolita_93 = new jugador(5,360,260);
    scene->addItem(bolita_93);
    bolitas.push_back(bolita_93);
    bolita_94 = new jugador(5,360,280);
    scene->addItem(bolita_94);
    bolitas.push_back(bolita_94);
    bolita_95 = new jugador(5,360,300);
    scene->addItem(bolita_95);
    bolitas.push_back(bolita_95);
    bolita_96= new jugador(5,50,260);
    scene->addItem(bolita_96);
    bolitas.push_back(bolita_96);
    bolita_97= new jugador(5,70,260);
    scene->addItem(bolita_97);
    bolitas.push_back(bolita_97);
    bolita_98= new jugador(5,90,260);
    scene->addItem(bolita_98);
    bolitas.push_back(bolita_98);
    bolita_99= new jugador(5,110,260);
    scene->addItem(bolita_99);
    bolitas.push_back(bolita_99);
    bolita_100 = new jugador(5,470,20);
    scene->addItem(bolita_100);
    bolitas.push_back(bolita_100);
    bolita_101 = new jugador(5,470,40);
    scene->addItem(bolita_101);
    bolitas.push_back(bolita_101);
    bolita_102 = new jugador(5,470,60);
    scene->addItem(bolita_102);
    bolitas.push_back(bolita_102);
    bolita_103 = new jugador(5,470,80);
    scene->addItem(bolita_103);
    bolitas.push_back(bolita_103);
    bolita_104 = new jugador(5,470,100);
    scene->addItem(bolita_104);
    bolitas.push_back(bolita_104);
    bolita_105 = new jugador(5,470,120);
    scene->addItem(bolita_105);
    bolitas.push_back(bolita_105);
    bolita_106= new jugador(5,170,310);
    scene->addItem(bolita_106);
    bolitas.push_back(bolita_106);
    bolita_107= new jugador(5,190,310);
    scene->addItem(bolita_107);
    bolitas.push_back(bolita_107);
    bolita_108= new jugador(5,210,310);
    scene->addItem(bolita_108);
    bolitas.push_back(bolita_108);
    bolita_109= new jugador(5,230,310);
    scene->addItem(bolita_109);
    bolitas.push_back(bolita_109);
    bolita_110= new jugador(5,250,310);
    scene->addItem(bolita_110);
    bolitas.push_back(bolita_110);
    bolita_111= new jugador(5,270,310);
    scene->addItem(bolita_111);
    bolitas.push_back(bolita_111);
    bolita_112= new jugador(5,290,310);
    scene->addItem(bolita_112);
    bolitas.push_back(bolita_112);
    bolita_113= new jugador(5,310,310);
    scene->addItem(bolita_113);
    bolitas.push_back(bolita_113);
    bolita_114= new jugador(5,330,310);
    scene->addItem(bolita_114);
    bolitas.push_back(bolita_114);
    bolita_115= new jugador(5,350,310);
    scene->addItem(bolita_115);
    bolitas.push_back(bolita_115);
    bolita_116= new jugador(5,370,310);
    scene->addItem(bolita_116);
    bolitas.push_back(bolita_116);
    bolita_117= new jugador(5,20,310);
    scene->addItem(bolita_117);
    bolitas.push_back(bolita_117);
    bolita_118= new jugador(5,40,310);
    scene->addItem(bolita_118);
    bolitas.push_back(bolita_118);
    bolita_119= new jugador(5,60,310);
    scene->addItem(bolita_119);
    bolitas.push_back(bolita_119);
    bolita_120= new jugador(5,80,310);
    scene->addItem(bolita_120);
    bolitas.push_back(bolita_120);
    bolita_121 = new jugador(5,90,275);
    scene->addItem(bolita_121);
    bolitas.push_back(bolita_121);
    bolita_122 = new jugador(5,90,295);
    scene->addItem(bolita_122);
    bolitas.push_back(bolita_122);
    bolita_123 = new jugador(5,280,200);
    scene->addItem(bolita_123);
    bolitas.push_back(bolita_123);
    bolita_124 = new jugador(5,280,220);
    scene->addItem(bolita_124);
    bolitas.push_back(bolita_124);
    bolita_125 = new jugador(5,280,240);
    scene->addItem(bolita_125);
    bolitas.push_back(bolita_125);
    bolita_126= new jugador(5,240,240);
    scene->addItem(bolita_126);
    bolitas.push_back(bolita_126);
    bolita_127= new jugador(5,260,240);
    scene->addItem(bolita_127);
    bolitas.push_back(bolita_127);












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

        if(evaluar_pos_2(player->getPosx(),player->getPosy())==true)
        {
            Teletransportacion_1();
        }
        if(EvaluarColision(paredes_der)==false)
        {
            player->MoveRight();
        }
    }
    else if(evento->key()==Qt::Key_A)
    {
        if(evaluar_pos(player->getPosx(),player->getPosy())==true)
        {
            Teletransportacion_2();
        }
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
    int pos_bolita = Eliminar_bolita(bolitas);
    if(pos_bolita >=0)
    {
      scene->removeItem(bolitas.at(pos_bolita));
      bolitas.removeAt(pos_bolita);
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

int MainWindow::Eliminar_bolita(QList<jugador *> bolitas)
{
    if(!bolitas.isEmpty())
    {
        QList<jugador *>::iterator it;
        for(it=bolitas.begin(); it!=bolitas.end(); it++)
        {
            if((*it)->collidesWithItem(player))
            {
                return bolitas.indexOf(*it);
            }
        }

    }
    return -1;
}

void MainWindow::Teletransportacion_1()
{
    player->setPosx(10);
    player->setPosy(180);
}

void MainWindow::Teletransportacion_2()
{
    player->setPosx(520);
    player->setPosy(230);
}

bool MainWindow::evaluar_pos(int x, int y)
{
    if(x==0 && y==180)
    {
        return true;
    }
    else if(x==0 && y==190)
    {
        return true;
    }
    return false;

}

bool MainWindow::evaluar_pos_2(int x, int y)
{
    if(x==530 && y==230)
    {
        return true;
    }
    else if(x==530 && y==220)
    {
        return true;
    }
    return false;

}



