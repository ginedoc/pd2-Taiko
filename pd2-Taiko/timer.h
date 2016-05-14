#ifndef TIMER_H
#define TIMER_H

#include <QObject>

class Timer:
        public QObject
{
    Q_OBJECT
public:
    Timer(QObject * parent = 0);
public slots:
    void timeout();
};

#endif // TIMER_H
