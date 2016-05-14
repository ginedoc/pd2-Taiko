#ifndef ADDDRUM_H
#define ADDDRUM_H

#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include <QObject>

#include "bigdrumblue.h"
#include "bigdrumred.h"
#include "tempdeclare.h"
#include "score.h"


class AddDrum :
        public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    AddDrum(QGraphicsItem *parent = 0);
    void keyPressEvent(QKeyEvent *event);
    int Dscorenumber();

signals:
public slots:
    void move();
    void generate();
private:
    int color;
    Score ss;

};

#endif // ADDDRUM_H
