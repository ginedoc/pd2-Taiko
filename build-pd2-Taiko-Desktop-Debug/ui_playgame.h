/********************************************************************************
** Form generated from reading UI file 'playgame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYGAME_H
#define UI_PLAYGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_PlayGame
{
public:

    void setupUi(QDialog *PlayGame)
    {
        if (PlayGame->objectName().isEmpty())
            PlayGame->setObjectName(QStringLiteral("PlayGame"));
        PlayGame->resize(1113, 679);
        PlayGame->setAutoFillBackground(false);

        retranslateUi(PlayGame);

        QMetaObject::connectSlotsByName(PlayGame);
    } // setupUi

    void retranslateUi(QDialog *PlayGame)
    {
        PlayGame->setWindowTitle(QApplication::translate("PlayGame", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class PlayGame: public Ui_PlayGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYGAME_H
