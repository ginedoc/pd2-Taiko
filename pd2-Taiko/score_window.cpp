#include "score_window.h"
#include "ui_score_window.h"

Score_window::Score_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Score_window)
{


}
void Score_window::SHOW(){
    ui->setupUi(this);
    ui->label_2->setNum(s);
    ui->restart->setText("restart");
    ui->Cancel->setText("Cancel");
}
void Score_window::getNUM(int num)
{
    s = num;
}
Score_window::~Score_window()
{
    delete ui;
}


