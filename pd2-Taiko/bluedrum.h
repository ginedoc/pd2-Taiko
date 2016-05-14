#ifndef BLUEDRUM_H
#define BLUEDRUM_H


#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>

#include "bigdrumblue.h"


class BlueDrum:
        public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    BlueDrum(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
    void generate();

};


#endif // BLUEDRUM_H
