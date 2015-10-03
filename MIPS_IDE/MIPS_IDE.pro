. #-------------------------------------------------
#
# Project created by QtCreator 2015-04-14T18:38:05
#
#-------------------------------------------------

QT       += core gui widgets printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MIPS_IDE
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    instruct_set.cpp \
    instruction.cpp \
    regisiter.cpp \
    stdafx.cpp \
    ideexception.cpp \
    myhighlighter.cpp

HEADERS  += mainwindow.h \
    instruct_set.h \
    instruction.h \
    regisiter.h \
    stdafx.h \
    ideexception.h \
    myhighlighter.h

FORMS += \
    ../UI/MIPS_IDE/MIPS_MainWindow.ui

RESOURCES += \
    mips.qrc
