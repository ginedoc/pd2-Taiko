#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTimer>
#include <QGraphicsItem>
#include <QObject>

#include <QGraphicsView>
#include <QTime>

#include "reddrum.h"
#include "bluedrum.h"
#include "about.h"
#include "game.h"
#include "setting.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_1->setText("Start");
    ui->pushButton_2->setText("Usage");
    ui->pushButton_3->setText("Exit");

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    Game * game = new Game();
    game->Play();
    delay(7000);
    game->stop();
}

void MainWindow::on_pushButton_4_clicked()
{
    About a;
    a.setModal(true);
    a.exec();
}
void MainWindow::delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    Setting s;
    s.setModal(true);
    s.exec();
}
