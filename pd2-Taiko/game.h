#ifndef GAME_H
#define GAME_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTimer>
#include <QGraphicsItem>
#include <QObject>
#include <QBrush>
#include <QImage>
#include <QGraphicsView>
#include <QMediaPlayer>
#include <QTime>


#include "bigdrumred.h"
#include "about.h"
#include "circle.h"
#include "adddrum.h"
#include "tt.h"

#include "score_window.h"
#include "last_num.h"
class Game
{
public:
    Game();
    void delay(int);
    void stop();
    void Play();

private:

    BigDrumRed * bigdrumred;
    BigDrumBlue * bigdrumblue;
    Circle * circle;
    TT * t;
    AddDrum * adddrum;


    QGraphicsScene * scene;
    QGraphicsScene * Swindow;
    QGraphicsView * view ;
    QGraphicsView * Sview;

    int num;
};

#endif // GAME_H
