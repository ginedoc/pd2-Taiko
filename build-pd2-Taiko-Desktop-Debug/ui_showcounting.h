/********************************************************************************
** Form generated from reading UI file 'showcounting.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCOUNTING_H
#define UI_SHOWCOUNTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ShowCounting
{
public:

    void setupUi(QDialog *ShowCounting)
    {
        if (ShowCounting->objectName().isEmpty())
            ShowCounting->setObjectName(QStringLiteral("ShowCounting"));
        ShowCounting->resize(203, 188);

        retranslateUi(ShowCounting);

        QMetaObject::connectSlotsByName(ShowCounting);
    } // setupUi

    void retranslateUi(QDialog *ShowCounting)
    {
        ShowCounting->setWindowTitle(QApplication::translate("ShowCounting", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowCounting: public Ui_ShowCounting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCOUNTING_H
