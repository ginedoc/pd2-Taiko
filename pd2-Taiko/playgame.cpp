#include "playgame.h"
#include "ui_playgame.h"
#include "reddrum.h"

PlayGame::PlayGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayGame)
{
    ui->setupUi(this);
}

PlayGame::~PlayGame()
{
    delete ui;
}

void PlayGame::Startgame()
{


/*    QGraphicsScene * scene  = new QGraphicsScene();

    RedDrum * reddrum = new RedDrum();
    reddrum->setRect(0,0,100,100);
    scene->addItem(reddrum);


    //  make it focusable
    reddrum->setFlag(QGraphicsItem::ItemIsFocusable);
    reddrum->setFocus();

    QGraphicsView * view = new QGraphicsView(scene);

    view->show();
*/

}
