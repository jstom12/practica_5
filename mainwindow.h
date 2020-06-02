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
    pared *pared_55;
    pared *pared_56;
    pared *pared_57;
    pared *pared_58;
    pared *pared_59;
    pared *pared_60;

    jugador *bolita_1;
    jugador *bolita_2;
    jugador *bolita_3;
    jugador *bolita_4;
    jugador *bolita_5;
    jugador *bolita_6;
    jugador *bolita_7;
    jugador *bolita_8;
    jugador *bolita_9;
    jugador *bolita_10;
    jugador *bolita_11;
    jugador *bolita_12;
    jugador *bolita_13;
    jugador *bolita_14;
    jugador *bolita_15;
    jugador *bolita_16;
    jugador *bolita_17;
    jugador *bolita_18;
    jugador *bolita_19;
    jugador *bolita_20;
    jugador *bolita_21;
    jugador *bolita_22;
    jugador *bolita_23;
    jugador *bolita_24;
    jugador *bolita_25;
    jugador *bolita_26;
    jugador *bolita_27;
    jugador *bolita_28;
    jugador *bolita_29;
    jugador *bolita_30;
    jugador *bolita_31;
    jugador *bolita_32;
    jugador *bolita_33;
    jugador *bolita_34;
    jugador *bolita_35;
    jugador *bolita_36;
    jugador *bolita_37;
    jugador *bolita_38;
    jugador *bolita_39;
    jugador *bolita_40;
    jugador *bolita_41;
    jugador *bolita_42;
    jugador *bolita_43;
    jugador *bolita_44;
    jugador *bolita_45;
    jugador *bolita_46;
    jugador *bolita_47;
    jugador *bolita_48;
    jugador *bolita_49;
    jugador *bolita_50;
    jugador *bolita_51;
    jugador *bolita_52;
    jugador *bolita_53;
    jugador *bolita_54;
    jugador *bolita_55;
    jugador *bolita_56;
    jugador *bolita_57;
    jugador *bolita_58;
    jugador *bolita_59;
    jugador *bolita_60;
    jugador *bolita_61;
    jugador *bolita_62;
    jugador *bolita_63;
    jugador *bolita_64;
    jugador *bolita_65;
    jugador *bolita_66;
    jugador *bolita_67;
    jugador *bolita_68;
    jugador *bolita_69;
    jugador *bolita_70;
    jugador *bolita_71;
    jugador *bolita_72;
    jugador *bolita_73;
    jugador *bolita_74;
    jugador *bolita_75;
    jugador *bolita_76;
    jugador *bolita_77;
    jugador *bolita_78;
    jugador *bolita_79;
    jugador *bolita_80;
    jugador *bolita_81;
    jugador *bolita_82;
    jugador *bolita_83;
    jugador *bolita_84;
    jugador *bolita_85;
    jugador *bolita_86;
    jugador *bolita_87;
    jugador *bolita_88;
    jugador *bolita_89;
    jugador *bolita_90;
    jugador *bolita_91;
    jugador *bolita_92;
    jugador *bolita_93;
    jugador *bolita_94;
    jugador *bolita_95;
    jugador *bolita_96;
    jugador *bolita_97;
    jugador *bolita_98;
    jugador *bolita_99;
    jugador *bolita_100;
    jugador *bolita_101;
    jugador *bolita_102;
    jugador *bolita_103;
    jugador *bolita_104;
    jugador *bolita_105;
    jugador *bolita_106;
    jugador *bolita_107;
    jugador *bolita_108;
    jugador *bolita_109;
    jugador *bolita_110;
    jugador *bolita_111;
    jugador *bolita_112;
    jugador *bolita_113;
    jugador *bolita_114;
    jugador *bolita_115;
    jugador *bolita_116;
    jugador *bolita_117;
    jugador *bolita_118;
    jugador *bolita_119;
    jugador *bolita_120;
    jugador *bolita_121;
    jugador *bolita_122;
    jugador *bolita_123;
    jugador *bolita_124;
    jugador *bolita_125;
    jugador *bolita_126;
    jugador *bolita_127;
    jugador *bolita_128;
    jugador *bolita_129;
    jugador *bolita_130;
    jugador *bolita_131;
    jugador *bolita_132;
    jugador *bolita_133;
    jugador *bolita_134;
    jugador *bolita_135;
    jugador *bolita_136;
    jugador *bolita_137;
    jugador *bolita_138;
    jugador *bolita_139;
    jugador *bolita_140;
    jugador *bolita_141;
    jugador *bolita_142;
    jugador *bolita_143;
    jugador *bolita_144;
    jugador *bolita_145;
    jugador *bolita_146;
    jugador *bolita_147;
    jugador *bolita_148;
    jugador *bolita_149;
    jugador *bolita_150;
    jugador *bolita_151;
    jugador *bolita_152;
    jugador *bolita_153;
    jugador *bolita_154;
    jugador *bolita_155;
    jugador *bolita_156;
    jugador *bolita_157;
    jugador *bolita_158;
    jugador *bolita_159;



    QList<pared *> paredes_der;
    QList<pared *> paredes_izq;
    QList<pared *> paredes_up;
    QList<pared *> paredes_do;
    QList<jugador *> bolitas;
    bool EvaluarColision(QList<pared *> listparedes);
    int Eliminar_bolita(QList<jugador *> bolitas);
    void Teletransportacion_1();
    void Teletransportacion_2();
    bool evaluar_pos(int , int );
    bool evaluar_pos_2(int,int);

};
#endif // MAINWINDOW_H
