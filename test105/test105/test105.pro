#-------------------------------------------------
#
# Project created by QtCreator 2017-08-29T15:28:50
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test105
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    Sources/dao.cpp \
    Sources/main.cpp \
    Sources/mainwindow.cpp \
    Sources/patient.cpp \
    Sources/visit.cpp \
    Sources/image.cpp \
    Sources/account.cpp \
    Sources/existingpatientwindow.cpp \
    Sources/newpatientwindow.cpp \
    Sources/adminpanelwindow.cpp \
    Sources/test.cpp


HEADERS += \
    Headers/mainwindow.h \
    Headers/dao.h \
    Headers/patient.h \
    Headers/image.h \
    Headers/visit.h \
    Headers/account.h \
    Headers/existingpatientwindow.h \
    Headers/newpatientwindow.h \
    Headers/adminpanelwindow.h \
    Headers/test.h

FORMS += \
    Forms/mainwindow.ui \
    Forms/existingpatientwindow.ui \
    Forms/newpatientwindow.ui \
    Forms/adminpanelwindow.ui \
    Forms/test.ui

DISTFILES += \
    ToDo
