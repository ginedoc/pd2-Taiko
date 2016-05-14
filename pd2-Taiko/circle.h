#ifndef CIRCLE_H
#define CIRCLE_H

#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>

class Circle:
         public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Circle(QGraphicsItem * parent = 0);
};

#endif // CIRCLE_H
