#-------------------------------------------------
#
# Project created by QtCreator 2016-12-10T17:18:38
#
#-------------------------------------------------

QT       += core gui
QT += network widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Odbiornik
TEMPLATE = app
win32:RC_ICONS += Rzethon.ico


SOURCES += main.cpp\
        widget.cpp \
    creceiver.cpp \
    cinterpreter.cpp \
    ctablechanger.cpp \
    csender.cpp \
    cinterpreterbt.cpp \
    widgetabout.cpp

HEADERS  += widget.h \
    creceiver.h \
    cinterpreter.h \
    ctablechanger.h \
    csender.h \
    cinterpreterbt.h \
    widgetabout.h

FORMS    += widget.ui \
    widgetabout.ui

RESOURCES += \
    icons.qrc
