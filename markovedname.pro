TEMPLATE = app
QT += core gui widgets

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp \
    functions.cpp \
    namegenerator.cpp \
    tablegenerator.cpp \
    mainwindow.cpp

HEADERS += functions.hpp \
    namegenerator.hpp \
    tablegenerator.hpp \
    mainwindow.h

FORMS += \
    mainwindow.ui

