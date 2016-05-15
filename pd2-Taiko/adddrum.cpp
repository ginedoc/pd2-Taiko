#include "adddrum.h"
#include <ctime>
AddDrum::AddDrum(QGraphicsItem *parent) : QObject(),QGraphicsPixmapItem(parent)
{

    setPos(800,150);
    setFlag(QGraphicsItem::ItemIsFocusable);

    srand((unsigned)time(NULL));
    color = rand() % 2;

    if(color == 1){

        setPixmap(QPixmap(":/new background/Pictures/homework/red.png"));
    }
    if(color == 0){
        setPixmap(QPixmap(":/new background/Pictures/homework/blue.png"));

    }

    QTimer * timer = new QTimer();
    connect(timer , SIGNAL(timeout()) , this , SLOT(move()));

    timer->start(50);
}

void AddDrum::keyPressEvent(QKeyEvent *event)
{

    player = new QMediaPlayer();

    scene()->addItem(&ss);

    QTimer * timer = new QTimer();

    if( event->key() == Qt::Key_L){

        player->setMedia(QUrl("qrc:/music/pics/reddrum.wav"));
        player->play();


        BigDrumRed * bigdrumred = new BigDrumRed();
        scene()->addItem(bigdrumred);
        connect(timer, SIGNAL(timeout()),bigdrumred,SLOT(Hide()));
        timer->start(100);

        if(pos().x() > 120 && pos().x() < 170){
            if(color == 1){
                this->hide();
                score_num++;

                ss.plus(score_num);
            }
        }
    }
    if( event->key() == Qt::Key_S){


        player->setMedia(QUrl("qrc:/music/pics/bluedrum.wav"));
        player->play();


        BigDrumBlue * bigdrumblue = new BigDrumBlue();
        scene()->addItem(bigdrumblue);
        connect(timer, SIGNAL(timeout()),bigdrumblue,SLOT(Hide()));
        timer->start(100);

        if(pos().x() > 125 && pos().x() < 170){
            if( color == 0){
                  this->hide();
                  score_num++;
                  ss.plus(score_num);
            }
        }
    }

}


void AddDrum::move()
{
    setPos(x() - 5 , y());
    if(pos().x() > 125 && pos().x() < 170){
        setFocus();
    }
    if(pos().x() < 110 ){
        this->hide();
    }
}

void AddDrum::generate()
{

    //generate a new drum
    AddDrum * adddrum = new AddDrum();
    scene()->addItem(adddrum);

}

int AddDrum::Dscorenumber(){
    return score_num;
}

