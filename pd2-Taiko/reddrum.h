#ifndef REDDRUM_H
#define REDDRUM_H

#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>

#include "bigdrumred.h"

class RedDrum:
        public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    RedDrum(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent * event);

public slots:
    void move();
    void generate();
};



#endif // REDDRUM_H
