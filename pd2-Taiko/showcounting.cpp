#include "showcounting.h"
#include "ui_showcounting.h"
#include <QTimer>

ShowCounting::ShowCounting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowCounting)
{
    ui->setupUi(this);
}

ShowCounting::~ShowCounting()
{
    delete ui;
}

void ShowCounting::Show()
{

}
