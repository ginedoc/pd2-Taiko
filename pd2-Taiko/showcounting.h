#ifndef SHOWCOUNTING_H
#define SHOWCOUNTING_H

#include <QDialog>

namespace Ui {
class ShowCounting;
}

class ShowCounting : public QDialog
{
    Q_OBJECT

public:
    explicit ShowCounting(QWidget *parent = 0);
    ~ShowCounting();

    void Show();
private:
    Ui::ShowCounting *ui;
};

#endif // SHOWCOUNTING_H
