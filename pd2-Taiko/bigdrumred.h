#ifndef BIGDRUMRED_H
#define BIGDRUMRED_H

#include <QDebug>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>
#include <QTimer>
#include <reddrum.h>

class BigDrumRed:
        public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    BigDrumRed(QGraphicsItem * parent = 0);
public slots:
    void Hide();

};

#endif // BIGDRUMRED_H
