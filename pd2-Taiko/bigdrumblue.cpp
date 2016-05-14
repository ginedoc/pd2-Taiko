#include "bigdrumblue.h"

BigDrumBlue::BigDrumBlue(QGraphicsItem * parent)
{
    setPos(135,125);


    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

    setPixmap(QPixmap(":/new background/pics/mtaikoflash_blue.png"));
}
void BigDrumBlue::Hide()
{
    delete this;
}

