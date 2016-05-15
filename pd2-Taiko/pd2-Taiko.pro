#-------------------------------------------------
#
# Project created by QtCreator 2016-05-07T09:38:47
#
#-------------------------------------------------

QT       += core gui \
            multimedia


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pd2-Taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp \
    game.cpp \
    bigdrumred.cpp \
    bigdrumblue.cpp \
    tt.cpp \
    circle.cpp \
    adddrum.cpp \
    score.cpp \
    score_window.cpp \
    scoretext.cpp \
    setting.cpp

HEADERS  += mainwindow.h \
    about.h \
    game.h \
    bigdrumred.h \
    bigdrumblue.h \
    tt.h \
    circle.h \
    adddrum.h \
    score.h \
    score_window.h \
    tempdeclare.h \
    scoretext.h \
    setting.h \
    last_num.h

FORMS    += mainwindow.ui \
    about.ui \
    score_window.ui \
    setting.ui

RESOURCES += \
    pictures.qrc

DISTFILES +=
