#include "db_add_card.h"
#include "ui_db_add_card.h"

DB_Add_Card::DB_Add_Card(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DB_Add_Card)
{
    ui->setupUi(this);
    ui->pushButton_add->setEnabled(false);

    QRegExp regExp("[T,G,U,O]{1,1}");
    ui->lineEdit_type->setValidator(new QRegExpValidator(regExp, this));

    connect(this,SIGNAL(all_filled()),
            this,SLOT(enable_insert()));
    connect(this,SIGNAL(not_all_filled()),
            this,SLOT(disable_insert()));
    connect(ui->lineEdit_cno,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_name,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_depart,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_type,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->pushButton_add,SIGNAL(clicked()),
            this,SLOT(slot_insert()));
    connect(ui->pushButton_cancel,SIGNAL(clicked()),
            this,SLOT(hide()));
}

DB_Add_Card::~DB_Add_Card()
{
    delete ui;
}

void DB_Add_Card::check_if_filled()
{
    if(ui->lineEdit_cno->text()!=""&&
       ui->lineEdit_name->text()!=""&&
       ui->lineEdit_depart->text()!=""&&
       ui->lineEdit_type->text()!="")
    emit all_filled();
    else
    emit not_all_filled();
}

void DB_Add_Card::slot_insert()
{
    QString query_str="insert into card values(";
    query_str=query_str+"'"+ui->lineEdit_cno->text()+"',";
    query_str=query_str+"'"+ui->lineEdit_name->text()+"',";
    query_str=query_str+"'"+ui->lineEdit_depart->text()+"',";
    query_str=query_str+"'"+ui->lineEdit_type->text()+"')";

    QSqlQuery query;
    if(query.exec(query_str))
      QMessageBox::information(this,"    成功    ", "借书证已添加",QMessageBox::Cancel);

    else
       QMessageBox::information(this,"    Error    ", "借书证未添加",QMessageBox::Cancel);

}

void DB_Add_Card::enable_insert(){ui->pushButton_add->setEnabled(true);}
void DB_Add_Card::disable_insert(){ui->pushButton_add->setEnabled(false);}
