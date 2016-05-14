#ifndef TT_H
#define TT_H


#include <QGraphicsTextItem>
#include <QMediaPlayer>

#include "bigdrumred.h"
class TT:
    public QGraphicsTextItem
{  
    Q_OBJECT

public:
    TT(QGraphicsItem *parent = 0);
    ~TT();
    void ctime();
    QMediaPlayer *player;
public slots:
    void mm();

private:
    int time_left;
    int score;

};

#endif // TT_H
