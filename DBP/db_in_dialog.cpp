#include "db_in_dialog.h"
#include "ui_db_in_dialog.h"

extern QSqlDatabase db;
DB_in_dialog::DB_in_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DB_in_dialog)
{
    ui->setupUi(this);
    setFixedSize(199,137);
    connect(ui->toolButton,SIGNAL(clicked()),
            this,SLOT(slot_in_single()));
    connect(ui->toolButton_2,SIGNAL(clicked()),
            this,SLOT(slot_in_multi()));
}

DB_in_dialog::~DB_in_dialog()
{
    delete ui;
}

void DB_in_dialog::slot_in_single()
{
    insingle = new db_in_single;
    insingle->show();
    this->hide();
}

void DB_in_dialog::slot_in_multi()
{
    QString bno;
    QString category;
    QString title;
    QString press;
    QString year;
    QString author;
    QString price;
    QString total;
    QString fileName = QFileDialog::getOpenFileName(this,
                                 tr("批量入库"), ".",
                                 tr("book files (*.bk)"));
    QFile file(fileName);
    if(fileName!="")
     {
        if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
          {
             QMessageBox::warning(this,"Warning","No File Selected",QMessageBox::Ok);
          }      
    QTextStream txtin (&file);
    QString linestr;
    while(!txtin.atEnd())
     {

        QString query_str="insert into book values(";
        txtin>>bno;
        query_str=query_str+"'"+bno+"',";
        txtin>>category;
        query_str=query_str+"'"+category+"',";
        txtin>>title;
        query_str=query_str+"'"+title+"',";
        txtin>>press;
        query_str=query_str+"'"+press+"',";
        txtin>>year;
        query_str=query_str+year+",";
        txtin>>author;
        query_str=query_str+"'"+author+"',";
        txtin>>price;
        query_str=query_str+price+",";
        txtin>>total;
        query_str=query_str+total+",";
        query_str=query_str+total+")";

        QSqlQuery query;
        query.exec(query_str);
     }
      QMessageBox::information(this,"    成功    ", "图书已批量添加至图书馆",QMessageBox::Cancel);
    }
}
