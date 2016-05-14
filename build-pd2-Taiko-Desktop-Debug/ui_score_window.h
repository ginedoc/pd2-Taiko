/********************************************************************************
** Form generated from reading UI file 'score_window.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_WINDOW_H
#define UI_SCORE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Score_window
{
public:
    QPushButton *restart;
    QPushButton *Cancel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Score_window)
    {
        if (Score_window->objectName().isEmpty())
            Score_window->setObjectName(QStringLiteral("Score_window"));
        Score_window->resize(797, 639);
        Score_window->setAutoFillBackground(false);
        Score_window->setStyleSheet(QStringLiteral("background-image: url(:/background/pics/score_background.jpg);"));
        restart = new QPushButton(Score_window);
        restart->setObjectName(QStringLiteral("restart"));
        restart->setGeometry(QRect(460, 450, 121, 41));
        restart->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 0);\n"
"selection-color: rgb(255, 170, 0);\n"
"alternate-background-color: rgb(255, 170, 0);"));
        Cancel = new QPushButton(Score_window);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(640, 450, 121, 41));
        Cancel->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        widget = new QWidget(Score_window);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 130, 371, 201));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));

        horizontalLayout->addWidget(label_2);


        retranslateUi(Score_window);
        QObject::connect(restart, SIGNAL(clicked()), Score_window, SLOT(close()));
        QObject::connect(Cancel, SIGNAL(clicked()), Score_window, SLOT(close()));

        QMetaObject::connectSlotsByName(Score_window);
    } // setupUi

    void retranslateUi(QDialog *Score_window)
    {
        Score_window->setWindowTitle(QApplication::translate("Score_window", "Dialog", 0));
        restart->setText(QApplication::translate("Score_window", "restart", 0));
        Cancel->setText(QApplication::translate("Score_window", "cancel", 0));
        label->setText(QApplication::translate("Score_window", "SCORE :", 0));
        label_2->setText(QApplication::translate("Score_window", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Score_window: public Ui_Score_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_WINDOW_H
