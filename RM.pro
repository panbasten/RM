#-------------------------------------------------
#
# Project created by QtCreator 2013-02-18T22:41:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RM
TEMPLATE = app


SOURCES += src/main.cpp\
    src/ui/mainwindow.cpp \
    src/storage/svnstorage.cpp \
    src/ui/settingdialog.cpp

HEADERS  += \
    src/ui/mainwindow.h \
    src/storage/svnstorage.h \
    src/ui/settingdialog.h

RESOURCES += \
    rm.qrc

FORMS += \
    src/ui/mainwindow.ui \
    src/ui/settingdialog.ui


INCLUDEPATH += include
INCLUDEPATH += src/ui
INCLUDEPATH += src/storage
INCLUDEPATH += src/util
