#-------------------------------------------------
#
# Project created by QtCreator 2018-04-30T19:41:21
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_adddatabasetest
CONFIG   += console
CONFIG   -= app_bundle

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
    test.cpp \
    ../zpr_project/base.cpp \
    ../zpr_project/datacounter.cpp \
    ../zpr_project/picture.cpp \
    ../zpr_project/word.cpp \
    ../zpr_project/element.cpp \
    ../zpr_project/database.cpp \
    ../zpr_project/databaseslist.cpp \
    ../zpr_project/elementsdatabase.cpp \
    ../zpr_project/deletedatabaseobserver.cpp \
    ../zpr_project/adddatabaseobserver.cpp \



INCLUDEPATH += \
    ../zpr_project

DEFINES += SRCDIR=\\\"$$PWD/\\\"
