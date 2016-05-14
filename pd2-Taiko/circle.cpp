#include "circle.h"

Circle::Circle(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(parent)
{
    setPos(135,125);

    setPixmap(QPixmap(":/background/pics/circle.png"));

}
