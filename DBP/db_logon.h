#ifndef DB_LOGON_H
#define DB_LOGON_H
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include "ui_db_logo.h"

class DB_logon:public QDialog,public Ui::Dialog
{
    Q_OBJECT
public:
    DB_logon(QWidget *parent = 0);

private slots:
    void enable_logon();
    void enable_button(const QString &text);
};

#endif // DB_LOGON_H
