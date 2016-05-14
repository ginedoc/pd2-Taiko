/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QPushButton *close;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QStringLiteral("Setting"));
        Setting->resize(592, 607);
        close = new QPushButton(Setting);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(420, 530, 81, 22));
        label = new QLabel(Setting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 90, 391, 71));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(Setting);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 190, 391, 71));
        label_2->setFont(font);

        retranslateUi(Setting);
        QObject::connect(close, SIGNAL(clicked()), Setting, SLOT(close()));

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Dialog", 0));
        close->setText(QApplication::translate("Setting", "PushButton", 0));
        label->setText(QApplication::translate("Setting", "L: Delete red drum", 0));
        label_2->setText(QApplication::translate("Setting", "S: Delete blue drum", 0));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
