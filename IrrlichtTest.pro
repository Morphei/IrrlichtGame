QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IrrlichtTest
TEMPLATE = app

LIBS += -L/home/morphei/Libraries/irrlicht/lib/Linux
INCLUDEPATH += /home/morphei/Libraries/irrlicht/include

LIBS += -lIrrlicht
LIBS += -lXxf86vm
LIBS += -lX11
LIBS += -lGL

TEMPLATE = app

SOURCES += main.cpp \
    game.cpp \
    mainwindow.cpp

HEADERS += \
    game.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

