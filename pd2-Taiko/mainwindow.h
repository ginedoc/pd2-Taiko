#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();
public slots:

private slots:
    void on_pushButton_1_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene * scene;

    void delay( int millisecondsToWait );

};

#endif // MAINWINDOW_H
