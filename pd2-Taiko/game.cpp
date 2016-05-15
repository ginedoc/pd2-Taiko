#include "game.h"
#include "scoretext.h"
#include "tt.h"

Game::Game(){
}
void Game::Play()
{
    scoretext *scoreT = new scoretext();

    //Initialize
    adddrum = new AddDrum();
    circle = new Circle();
    bigdrumred = new BigDrumRed();
    bigdrumblue = new BigDrumBlue();

    //add scene
    scene = new QGraphicsScene();


    scene->setBackgroundBrush(QBrush(QImage(":/new background/Pictures/homework/Game2.png")));
    scene->setSceneRect(0,0,800,500);


   //add timer
   t = new TT();
   t->ctime();
   scene->addItem(t);

   //scene setting


   scene->addItem(adddrum);
   scene->addItem(circle);
   scene->addItem(scoreT);


   view = new QGraphicsView(scene);


   view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view->setFixedSize(800,500);

   //create new drum
  srand((unsigned)time(NULL));
  int grt;
  int temp  = 0;
  QTimer * timer;

  while(temp < 22000){
        timer = new QTimer();

        grt = rand() % 500 + 300;
        temp = temp + grt;

        QObject::connect(timer , SIGNAL(timeout()) , adddrum, SLOT(generate()));
        timer->start(grt);
        delay(grt);

        timer->stop();
        view->show();
    }
   view->show();

}


void Game::stop(){

    AddDrum *adddrum = new AddDrum();
    Score_window * w = new Score_window();


    num = adddrum->Dscorenumber() - last_num;

    last_num = adddrum->Dscorenumber();

    w->getNUM(num);
    w->SHOW();
    w->setModal(true);
    w->exec();

    delete view;
}

void Game::delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}

