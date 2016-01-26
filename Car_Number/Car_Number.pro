#-------------------------------------------------
#
# Project created by QtCreator 2016-01-11T14:31:37
#
#-------------------------------------------------

QT       += core gui

#QT       -= gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Car_Number
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES +=  \
    main.cpp\
    input.cpp \
    algorithm.cpp \
    output.cpp \
    Qt//graphic.cpp \
    Qt//controller.cpp \
    Qt//image.cpp

HEADERS += \
    input.h \
    algorithm.h \
    output.h \
    Qt//graphic.h \
    Qt//controller.h \
    Qt//image.h \
    World_of_Struct.h
