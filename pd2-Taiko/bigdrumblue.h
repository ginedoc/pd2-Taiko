#ifndef BIGDRUMBLUE_H
#define BIGDRUMBLUE_H

#include <QDebug>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>
#include <QTimer>
#include "bluedrum.h"


class BigDrumBlue:
        public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    BigDrumBlue(QGraphicsItem * parent = 0);


public slots:
    void Hide();

};

#endif // BIGDRUMBLUE_H
