#include "bluedrum.h"

#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include "reddrum.h"
#include "game.h"

BlueDrum::BlueDrum(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(parent)
{
    setPos(800,150);

    setPixmap(QPixmap(":/new background/Pictures/homework/blue.png"));

    QTimer * timer = new QTimer();
    connect(timer , SIGNAL(timeout()) , this , SLOT(move()));

    timer->start(50);
}

void BlueDrum::keyPressEvent(QKeyEvent *event)
{
    QTimer * timer = new QTimer();
    if( event->key() == Qt::Key_L){

        BigDrumRed * bigdrumred = new BigDrumRed();
        scene()->addItem(bigdrumred);
        connect(timer, SIGNAL(timeout()),bigdrumred,SLOT(Hide()));
        timer->start(100);

    }
    if( event->key() == Qt::Key_S){

        BigDrumBlue * bigdrumblue = new BigDrumBlue();
        scene()->addItem(bigdrumblue);
        connect(timer, SIGNAL(timeout()),bigdrumblue,SLOT(Hide()));
        timer->start(100);
        if(pos().x() > 120 && pos().x() < 175){

            this->hide();
        }
    }
}

void BlueDrum::move()
{
    setPos(x() - 5 , y());
    if(pos().x() > 120 && pos().x() < 175){
        setFocus();
    }
    if(pos().x() < 120){
        this->hide();
    }
}

void BlueDrum::generate()
{
    //generate a new drum
    BlueDrum * bluedrum = new BlueDrum();
    scene()->addItem(bluedrum);
}



