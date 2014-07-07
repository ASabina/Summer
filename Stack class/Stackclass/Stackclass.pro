#-------------------------------------------------
#
# Project created by QtCreator 2014-07-04T14:01:39
#
#-------------------------------------------------

QT       += core

QT       -= gui

CONFIG += c++11

TARGET = Stackclass
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    pointerStack.cpp \
    arraystack.cpp \
    calculator.cpp \

HEADERS += \
    pointerStack.h \
    arraystack.h \
    calculator.h
