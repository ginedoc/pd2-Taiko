#ifndef SCORE_WINDOW_H
#define SCORE_WINDOW_H

#include <QDialog>
#include "game.h"

namespace Ui {
class Score_window;
}

class Score_window : public QDialog
{
    Q_OBJECT

public:
    explicit Score_window(QWidget *parent = 0);
    void getNUM(int);
    void SHOW();
    ~Score_window();

private:
    int s;
    Ui::Score_window *ui;
};

#endif // SCORE_WINDOW_H
