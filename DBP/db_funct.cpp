#include "db_funct.h"
#include "ui_db_funct.h"

DB_funct::DB_funct(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    finddialog = new DB_Find(this);
    indialog = new DB_in_dialog(this);
    adddialog = new DB_Add_Card(this);
    deldialog = new db_Del_Card(this);
    borrowdialog = new db_Borrow(this);
    returndialog = new db_Return(this);

    connect(toolButton_in,SIGNAL(clicked()),
            this,SLOT(slot_in()));
    connect(toolButton_find,SIGNAL(clicked()),
            this,SLOT(slot_find()));
    connect(toolButton_borrow,SIGNAL(clicked()),
            this,SLOT(slot_borrow()));
    connect(toolButton_return,SIGNAL(clicked()),
            this,SLOT(slot_return()));
    connect(toolButton_add,SIGNAL(clicked()),
            this,SLOT(slot_add_card()));
    connect(toolButton_del,SIGNAL(clicked()),
            this,SLOT(slot_del_card()));
    connect(pushButton_exit,SIGNAL(clicked()),
            this,SLOT(close()));
    connect(pushButton_logout,SIGNAL(clicked()),
            parent,SLOT(show()));
    connect(pushButton_logout,SIGNAL(clicked()),
            this,SLOT(close()));
}

DB_funct::~DB_funct(){}

void DB_funct::slot_in(){indialog->show();}

void DB_funct::slot_find(){finddialog->show();}

void DB_funct::slot_borrow(){borrowdialog->show();}

void DB_funct::slot_return(){returndialog->show();}

void DB_funct::slot_add_card(){adddialog->show();}

void DB_funct::slot_del_card(){deldialog->show();}
