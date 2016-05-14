#include "alarm.h"

alarm::alarm(QGraphicsTextItem * parent):
    QGraphicsTextItem(parent)
{
    game_time = 30;
    setPlainText(QString("Time: ") + QString::number(game_time));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",25));
//    setPlainText(QString("Time: ") + QString::number(game_time));

}

int alarm::rtime()
{
    return game_time;
}

void alarm::count()
{
    game_time--;
//    int t = rtime();
//    qDebug() << t;
}
