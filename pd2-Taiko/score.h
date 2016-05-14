#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QTime>
#include "bigdrumblue.h"

class Score:
         public QGraphicsTextItem
{
    Q_OBJECT
public:
    Score(QGraphicsItem *parent = 0);

    void plus(int);
    void delay(int);
private:

};

#endif // SCORE_H
