#-------------------------------------------------
#
# Project created by QtCreator 2015-04-14T00:07:55
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DBP
TEMPLATE = app


SOURCES += main.cpp \
    db_logon.cpp \
    db_find.cpp \
    db_funct.cpp \
    db_in_dialog.cpp \
    db_in_single.cpp \
    db_add_card.cpp \
    db_del_card.cpp \
    db_borrow.cpp \
    db_return.cpp

HEADERS  += \
    db_logon.h \
    db_find.h \
    db_funct.h \
    db_in_dialog.h \
    db_in_single.h \
    db_add_card.h \
    db_del_card.h \
    db_borrow.h \
    db_return.h

FORMS += \
    db_logo.ui \
    db_find.ui \
    db_funct.ui \
    db_in_dialog.ui \
    db_in_single.ui \
    db_add_card.ui \
    db_del_card.ui \
    db_borrow.ui

RESOURCES += \
    bmp.qrc
