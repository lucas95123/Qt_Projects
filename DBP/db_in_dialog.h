#ifndef DB_IN_DIALOG_H
#define DB_IN_DIALOG_H
#include "db_in_single.h"
#include <QFile>
#include <QDialog>
#include <QFileDialog>
#include <QTextStream>
#include <QSqlError>
#include <QCloseEvent>

namespace Ui {
class DB_in_dialog;
}

class DB_in_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit DB_in_dialog(QWidget *parent = 0);
    ~DB_in_dialog();
private slots:
    void slot_in_single();
    void slot_in_multi();
private:
    Ui::DB_in_dialog *ui;
    db_in_single *insingle;
};

#endif // DB_IN_DIALOG_H
