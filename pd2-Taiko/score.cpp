#include <QApplication>
#include "score.h"

Score::Score(QGraphicsItem * parent):
     QGraphicsTextItem(parent)
{
    setPos(750,0);
//    setPlainText(QString("Score: "));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",25));
}

void Score::plus(int ss){
    setPlainText(QString::number(ss));
    delay(500);
    this->hide();
}

void Score::delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
