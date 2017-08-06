#-------------------------------------------------
#
# Project created by QtCreator 2017-08-01T10:19:59
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sqlite_test
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    dao.cpp \
    person.cpp

HEADERS  += mainwindow.h \
    dao.h \
    person.h

FORMS    += mainwindow.ui

LIBS += -lsqlite3

DISTFILES += \
    trash

