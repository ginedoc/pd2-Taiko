#include "reddrum.h"
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include "bluedrum.h"


RedDrum::RedDrum(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(parent)
{

    setPos(800,150);
    setFlag(QGraphicsItem::ItemIsFocusable);


    setPixmap(QPixmap(":/new background/Pictures/homework/red.png"));

    QTimer * timer = new QTimer();
    connect(timer , SIGNAL(timeout()) , this , SLOT(move()));

    timer->start(50);
}

void RedDrum::move()
{
    setPos(x() - 5 , y());
    if(pos().x() > 120 && pos().x() < 175){
        setFocus();
    }
    if(pos().x() < 120 ){
        this->hide();
    }
}

void RedDrum::generate()
{
    //generate a new drum
    RedDrum * reddrum = new RedDrum();
    scene()->addItem(reddrum);
}


void RedDrum::keyPressEvent(QKeyEvent *event)
{
    QTimer * timer = new QTimer();
    if( event->key() == Qt::Key_L){

        BigDrumRed * bigdrumred = new BigDrumRed();
        scene()->addItem(bigdrumred);
        connect(timer, SIGNAL(timeout()),bigdrumred,SLOT(Hide()));
        timer->start(100);

        if(pos().x() > 120 && pos().x() < 175){

            this->hide();
        }
    }
    if( event->key() == Qt::Key_S){

        BigDrumBlue * bigdrumblue = new BigDrumBlue();
        scene()->addItem(bigdrumblue);
        connect(timer, SIGNAL(timeout()),bigdrumblue,SLOT(Hide()));
        timer->start(100);

    }

}

