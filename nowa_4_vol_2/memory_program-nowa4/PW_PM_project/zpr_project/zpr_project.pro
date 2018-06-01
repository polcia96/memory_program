#-------------------------------------------------
#
# Project created by QtCreator 2018-04-30T19:33:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zpr_project
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    base.cpp \
    picture.cpp \
    word.cpp \
    element.cpp \
    database.cpp \
    databaseslist.cpp \
    elementsdatabase.cpp \
    deletedatabaseobserver.cpp \
    adddatabaseobserver.cpp \
    menustart.cpp \
    adddatabasewindow.cpp \
    mainwin.cpp \
    repetition.cpp \
    datacounter.cpp


HEADERS += \
    base.h \
    picture.h \
    word.h \
    element.h \
    database.h \
    databaseslist.h \
    elementsdatabase.h \
    deletedatabaseobserver.h \
    menustart.h \
    adddatabaseobserver.h \
    adddatabasewindow.h \
    mainwin.h \
    repetition.h \
    datacounter.h


FORMS += \
    adddatabasewindow.ui \
    mainwin.ui
