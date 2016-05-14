#include "scoretext.h"
#include <QFont>
scoretext::scoretext(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    setPos(650,0);
    setPlainText(QString("Score: "));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",25));

}
