#ifndef ALARM_H
#define ALARM_H
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "game.h"

class alarm:
        public QGraphicsTextItem
{
public:
    alarm(QGraphicsTextItem * parent = 0);
    int rtime();
    void count();
private:
    int game_time;
};

#endif // ALARM_H
