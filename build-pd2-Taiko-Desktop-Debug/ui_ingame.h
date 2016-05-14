/********************************************************************************
** Form generated from reading UI file 'ingame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGAME_H
#define UI_INGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InGame
{
public:
    QLabel *time;
    QLabel *score;
    QLabel *num;

    void setupUi(QWidget *InGame)
    {
        if (InGame->objectName().isEmpty())
            InGame->setObjectName(QStringLiteral("InGame"));
        InGame->resize(1001, 617);
        InGame->setStyleSheet(QStringLiteral("background-image: url(:/game/pics/bg.png);"));
        time = new QLabel(InGame);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(80, 10, 141, 51));
        time->setStyleSheet(QLatin1String("font: 16pt \"Sans Serif\";\n"
"alternate-background-color: rgb(0, 0, 0);"));
        score = new QLabel(InGame);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(740, 20, 181, 41));
        score->setStyleSheet(QLatin1String("font: 16pt \"Sans Serif\";\n"
"background-color: rgb(0, 0, 0);"));
        num = new QLabel(InGame);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(220, 10, 441, 301));
        num->setStyleSheet(QLatin1String("font: 16pt \"Sans Serif\";\n"
"alternate-background-color: rgb(0, 0, 0);"));

        retranslateUi(InGame);

        QMetaObject::connectSlotsByName(InGame);
    } // setupUi

    void retranslateUi(QWidget *InGame)
    {
        InGame->setWindowTitle(QApplication::translate("InGame", "Form", 0));
        time->setText(QString());
        score->setText(QApplication::translate("InGame", "Score:", 0));
        num->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InGame: public Ui_InGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGAME_H
