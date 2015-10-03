#ifndef DB_FUNCT_H
#define DB_FUNCT_H
#include "db_find.h"
#include "db_in_dialog.h"
#include "db_add_card.h"
#include "db_del_card.h"
#include "db_borrow.h"
#include "db_return.h"
#include "ui_db_funct.h"
#include <QDialog>

class DB_funct : public QDialog,public Ui::DB_funct
{
    Q_OBJECT

public:
    explicit DB_funct(QWidget *parent = 0);
    ~DB_funct();

private slots:
    void slot_in();
    void slot_find();
    void slot_borrow();
    void slot_return();
    void slot_add_card();
    void slot_del_card();

private:
    DB_Find *finddialog;
    DB_in_dialog *indialog;
    DB_Add_Card *adddialog;
    db_Del_Card *deldialog;
    db_Borrow *borrowdialog;
    db_Return *returndialog;
};

#endif // DB_FUNCT_H
