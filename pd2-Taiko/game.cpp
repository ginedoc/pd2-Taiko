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


   QTimer * timer = new QTimer();
   QObject::connect(timer , SIGNAL(timeout()) , adddrum, SLOT(generate()));
   timer->start(800);

   view->show();

   last_num = adddrum->Dscorenumber();
}

void Game::stop(){
    AddDrum *adddrum = new AddDrum();
    Score_window * w = new Score_window();

    num = adddrum->Dscorenumber() - last_num;

    w->getNUM(num);
    w->SHOW();
    w->setModal(true);
    w->exec();
    delete view;

}


