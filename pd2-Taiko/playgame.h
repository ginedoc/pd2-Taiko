#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <QDialog>


#include "reddrum.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>


namespace Ui {
class PlayGame;
}

class PlayGame : public QDialog
{
    Q_OBJECT

public:
    explicit PlayGame(QWidget *parent = 0);
    ~PlayGame();

    void Startgame();
private:
    Ui::PlayGame *ui;
};

#endif // PLAYGAME_H
