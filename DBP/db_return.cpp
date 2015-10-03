#include "db_return.h"

extern QString CURRENT_USER;
db_Return::db_Return(QWidget *parent) :
    db_Borrow(parent)
{
    setWindowTitle("还书");
    ui->dateEdit->setEnabled(false);
}

db_Return::~db_Return()
{
    delete ui;
}

void db_Return::slot_pushok()
{
    QString query_str;
    QString bno=ui->lineEdit_bno->text();
    QString cno=ui->lineEdit_cno->text();
    QSqlQuery query;
    int i;
    int flag=0;

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

    query_str="select bno from borrow where cno = ";
    query_str=query_str+"'"+cno+"'";
    query.exec(query_str);
    while(query.next())
    {
        if(query.value(0)==bno)
        {
            flag=1;
            break;
        }
    }
    if(!flag)
     {
       QMessageBox::warning(this,"错误","没有借该书", QMessageBox::Ok);
       return;
     }
    query_str=QObject::tr("update book set stock=stock+1 where bno='%1'").arg(bno);
    if(!query.exec(query_str))
    {
        QMessageBox::warning(this,"错误","发生未知错误", QMessageBox::Ok);
        return;
    }

    query_str=QObject::tr("delete from borrow where cno='%1' and bno='%2'").arg(cno,bno);
    if(!query.exec(query_str))
     QMessageBox::information(this,"错误","发生未知错误",QMessageBox::Ok);
    else
     {
       QMessageBox::information(this,"成功","还书成功",QMessageBox::Ok);
       emit borrow_success(cno);
       emit borrow_success(bno);
     }
}
