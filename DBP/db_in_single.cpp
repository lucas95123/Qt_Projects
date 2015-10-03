#include "db_in_single.h"
#include "ui_db_in_single.h"

db_in_single::db_in_single(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::db_in_single)
{
    ui->setupUi(this);
    ui->pushButton_insert->setEnabled(false);

    connect(this,SIGNAL(all_filled()),
            this,SLOT(enable_insert()));
    connect(this,SIGNAL(not_all_filled()),
            this,SLOT(disable_insert()));
    connect(ui->pushButton_insert,SIGNAL(clicked()),
            this,SLOT(slot_insert()));
    connect(ui->pushButton_cancel,SIGNAL(clicked()),
            this,SLOT(hide()));
    connect(ui->lineEdit,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_2,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_3,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_4,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_6,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_7,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
}

db_in_single::~db_in_single()
{
    delete ui;
}

void db_in_single::check_if_filled()
{
    if(ui->lineEdit->text()!=""&&
       ui->lineEdit_2->text()!=""&&
       ui->lineEdit_3->text()!=""&&
       ui->lineEdit_4->text()!=""&&
       ui->lineEdit_6->text()!=""&&
       ui->lineEdit_7->text()!="")
    emit all_filled();
    else
    emit not_all_filled();
}

void db_in_single::enable_insert(){ui->pushButton_insert->setEnabled(true);}
void db_in_single::disable_insert(){ui->pushButton_insert->setEnabled(false);}

void db_in_single::slot_insert()
{
    QString query_str="insert into book values(";
    query_str=query_str+"'"+ui->lineEdit->text()+"',";
    query_str=query_str+"'"+ui->lineEdit_2->text()+"',";
    query_str=query_str+"'"+ui->lineEdit_3->text()+"',";
    query_str=query_str+"'"+ui->lineEdit_4->text()+"',";
    query_str=query_str+ui->spinBox_year->text()+",";
    query_str=query_str+"'"+ui->lineEdit_6->text()+"',";
    query_str=query_str+ui->lineEdit_7->text()+",";
    query_str=query_str+ui->spinBox_stock->text()+",";
    query_str=query_str+ui->spinBox_stock->text()+")";

    QSqlQuery query;
    if(query.exec(query_str))
        QMessageBox::information(0,"    成功    ", "图书已添加至图书馆",QMessageBox::Ok);
    else QMessageBox::warning(0,"    失败    ", "书号已经在图书馆中存在",QMessageBox::Ok);

}




