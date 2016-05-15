#include "tt.h"
#include <QFont>
#include <QObject>
#include "reddrum.h"
#include "QTime"
#include <mainwindow.h>
#include "game.h"

TT::TT(QGraphicsItem * parent): QGraphicsTextItem(parent)
{
    time_left = 30;
    setPlainText(QString("Time: ") + QString::number(time_left));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",25));

    //add music
    player = new QMediaPlayer();
    player->setMedia(QUrl("qrc:/music/Music/homework_music/Detective Conan Opening 6 (FANMADE)-zHw-Sn6eQgY.mp3"));
    player->play();


}

void TT::ctime(){
    QTimer * timer = new QTimer();
    QObject::connect(timer , SIGNAL(timeout()) , this , SLOT(mm()));
    timer->start(1000);
}
TT::~TT(){
    player->stop();
}

void TT::mm(){
    time_left--;
        setPlainText(QString("Time: ") + QString::number(time_left));
    if(time_left==0){
        scene()->clear();
     }
}

