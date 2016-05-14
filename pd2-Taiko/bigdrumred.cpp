#include "bigdrumred.h"

BigDrumRed::BigDrumRed(QGraphicsItem * parent)
{
    setPos(135,125);


    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

    setPixmap(QPixmap(":/game/pics/mtaikoflash_red.png"));
}


void BigDrumRed::Hide()
{
    delete this;
}
