#include "db_borrow.h"
#include "ui_db_borrow.h"

extern QString CURRENT_USER;

db_Borrow::db_Borrow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::db_Borrow)
{
    QDate dt;
    ui->setupUi(this);
    ui->lineEdit_stock->setEnabled(false);
    ui->lineEdit_stock->setText("0");
    ui->pushButton_ok->setEnabled(false);
    ui->dateEdit->setDate(dt.currentDate());
    model = new QSqlTableModel(this);

    connect(ui->pushButton_cancel,SIGNAL(clicked()),
            this,SLOT(hide()));
    connect(ui->lineEdit_bno,SIGNAL(textChanged(const QString &)),
            this,SLOT(change_stock(const QString &)));
    connect(ui->lineEdit_bno,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_cno,SIGNAL(textChanged(const QString &)),
            this,SLOT(check_if_filled()));
    connect(ui->lineEdit_cno,SIGNAL(textChanged(const QString &)),
             this,SLOT(change_borrow(const QString &)));
    connect(this,SIGNAL(all_filled()),
            this,SLOT(enable_okbutton()));
    connect(this,SIGNAL(not_all_filled()),
            this,SLOT(disable_okbutton()));
    connect(ui->pushButton_ok,SIGNAL(clicked()),
            this,SLOT(slot_pushok()));
    connect(this,SIGNAL(borrow_success(const QString &)),
            this,SLOT(change_borrow(const QString &)));
    connect(this,SIGNAL(borrow_success(const QString &)),
            this,SLOT(change_stock(const QString &)));

}

db_Borrow::~db_Borrow()
{
    delete ui;
}

void db_Borrow::slot_pushok()
{
    QString query_str;
    QString bno=ui->lineEdit_bno->text();
    QString cno=ui->lineEdit_cno->text();
    QSqlQuery query;
    int i;

    for(i=cno.size();i<7;i++)
      cno[i]=' ';
    for(i=bno.size();i<8;i++)
      bno[i]=' ';

    query_str="select cno from card where cno = ";
    query_str=query_str+"'"+cno+"'";
    query.exec(query_str);
    query.next();
    if(query.value(0)!=cno)
     {
       QMessageBox::warning(this,"错误","借书证不存在", QMessageBox::Ok);
       return;
     }
    if(check_if_borrowed(cno,bno))
    {
        QMessageBox::warning(this,"错误","已经借过该书", QMessageBox::Ok);
        return;
    }
    if(ui->lineEdit_stock->text()=="0")
     {
        QDateTime min_time=find_min_returntime(bno);
        QMessageBox::warning(this,"书籍已借出","最早归还时间为:"+min_time.toString(), QMessageBox::Ok);
        return;
     }
    query_str=QObject::tr("update book set stock=stock-1 where bno='%1'").arg(bno);
    if(!query.exec(query_str))
    {
        QMessageBox::warning(this,"错误","发生未知错误", QMessageBox::Ok);
        return;
    }
    QDateTime dt;
    QDate borrow_date;
    dt.setDate(borrow_date.currentDate());
    QString currentDate = dt.toString("yyyy-MM-dd");
    dt.setDate(ui->dateEdit->date());
    QString returnDate = dt.toString("yyyy-MM-dd");
    query_str=QObject::tr("insert into borrow values ('%1','%2','%3','%4','%5')").arg(cno,bno,currentDate,returnDate,CURRENT_USER);
    if(!query.exec(query_str))
     QMessageBox::information(this,"错误","发生未知错误",QMessageBox::Ok);
    else
     {
       QMessageBox::information(this,"成功","借书成功",QMessageBox::Ok);
       emit borrow_success(cno);
       emit borrow_success(bno);
     }
}

void db_Borrow::change_stock(const QString &stock)
{
    QSqlQuery query;
    QString query_str;
    query_str="select * from book where bno = ";
    query_str+="'"+stock+"'";
    if(query.exec(query_str))
    {
     query.next();
     ui->lineEdit_stock->setText(query.value(8).toString());
    }
}

void db_Borrow::change_borrow(const QString &cno)
{
    QString query_str;
    QString query_str_2;
    QSqlQuery query;
    query_str="select bno from borrow where cno = ";
    query_str+="'"+cno+"'";
    int flag=0;
    if(query.exec(query_str))
        while(query.next())
        {
         if(flag)
          query_str_2+=" or ";
         query_str_2+=QObject::tr("bno = '%1'").arg(query.value(0).toString());
         flag++;
        }
    else return;

    if(!query_str_2.isEmpty())
    {
     model->setTable("book");
     model->setEditStrategy(QSqlTableModel::OnManualSubmit);
     model->setFilter(query_str_2);
     model->select(); //选取整个表的所有行
    //model->removeColumn(1); //不显示name属性列,如果这时添加记录，则该属性的值添加不上
     ui->tableView->setModel(model);
     ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}

void db_Borrow::check_if_filled()
{
    if((!ui->lineEdit_bno->text().isEmpty())&&(!ui->lineEdit_cno->text().isEmpty()))
       emit all_filled();
    else
       emit not_all_filled();
}

QDateTime db_Borrow::find_min_returntime(const QString &bno)
{
    QSqlQuery query;
    QString query_str;
    query_str=QObject::tr("select return_date from borrow where bno = '%1'").arg(bno);
    QDateTime min_time;
    query.exec(query_str);
    query.next();
    min_time=query.value(0).toDateTime();
    while(query.next())
    {
        if(query.value(0).toDateTime()<min_time)
            min_time=query.value(0).toDateTime();
    }
    return min_time;
}

bool db_Borrow::check_if_borrowed(const QString &cno,const QString &bno)
{
    QSqlQuery query;
    QString query_str;
    query_str=QObject::tr("select cno from borrow where cno = '%1' and bno = '%2'").arg(cno,bno);
    query.exec(query_str);
    query.next();
    if(query.value(0)==cno)
        return true;
    else return false;
}

void db_Borrow::enable_okbutton(){ ui->pushButton_ok->setEnabled(true);}
void db_Borrow::disable_okbutton(){ ui->pushButton_ok->setEnabled(false);}
