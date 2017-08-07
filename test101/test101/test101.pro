#-------------------------------------------------
#
# Project created by QtCreator 2017-08-06T15:25:45
#
#-------------------------------------------------

QT       += core gui
QT       +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test101
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dao.cpp \
    person.cpp \
    patient_image.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    dao.h \
    person.h \
    patient_image.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui

DISTFILES += \
    trash
