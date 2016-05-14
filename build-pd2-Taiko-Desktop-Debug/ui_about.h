/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *leave;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(535, 650);
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 70, 391, 81));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 180, 241, 81));
        label_3 = new QLabel(About);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 250, 241, 81));
        label_4 = new QLabel(About);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 580, 161, 41));
        leave = new QPushButton(About);
        leave->setObjectName(QStringLiteral("leave"));
        leave->setGeometry(QRect(430, 600, 81, 22));

        retranslateUi(About);
        QObject::connect(leave, SIGNAL(clicked()), About, SLOT(close()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Dialog", 0));
        label->setText(QApplication::translate("About", "Taiko Master         versioin 1.0", 0));
        label_2->setText(QApplication::translate("About", "Creator : Wang Po", 0));
        label_3->setText(QApplication::translate("About", "released date : 2016.5", 0));
        label_4->setText(QApplication::translate("About", "Copy Right", 0));
        leave->setText(QApplication::translate("About", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
