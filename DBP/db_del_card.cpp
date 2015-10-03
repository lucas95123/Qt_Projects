#include "db_del_card.h"
#include "ui_db_del_card.h"

db_Del_Card::db_Del_Card(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::db_Del_Card)
{
    ui->setupUi(this);

    connect(ui->pushButton_del,SIGNAL(clicked()),
            this,SLOT(slot_del_card()));
    connect(ui->pushButton_cancel,SIGNAL(clicked()),
            this,SLOT(hide()));
}

db_Del_Card::~db_Del_Card()
{
    delete ui;
}

void db_Del_Card::slot_del_card()
{
    QString query_str="delete from card where cno=";
    query_str=query_str+"'"+ui->lineEdit->text()+"'";

    QSqlQuery query;
    if(query.exec(query_str))
      QMessageBox::information(this,"    成功    ", "借书证已删除",QMessageBox::Cancel);

    else
       QMessageBox::warning(this,"    错误    ", "还有书籍未归还",QMessageBox::Cancel);
}
