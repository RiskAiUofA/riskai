#-------------------------------------------------
#
# Project created by QtCreator 2013-10-26T19:03:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Risk
TEMPLATE = app


SOURCES += main.cpp\
        riskgui.cpp \
    player.cpp \
    card.cpp

HEADERS  += riskgui.h \
    player.h \
    card.h \
    TerritoryNameEnum.h \
    ContinentNameEnum.h

FORMS    += riskgui.ui
