#include <QtGui>
#include <QMessageBox>
#include "db_logon.h"
#include "db_funct.h"

QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
QString dsn = "Driver={sql server};server=MSI;database=library;uid=sa;pwd=100659lucas;";
QString CURRENT_USER;

DB_logon::DB_logon(QWidget *parent):QDialog(parent)
{
    setupUi(this);
    setFixedHeight(240);
    setFixedWidth(280);
    okButton->setEnabled(false);
    lineEdit_2->setEchoMode(QLineEdit::Password);

    QFile file("usr.inf");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream txtin(&file);
    QString User_ID;
    QString PWD;

    txtin>>User_ID;
    if(!User_ID.isEmpty())
     {
        txtin>>PWD;
        lineEdit->setText(User_ID);
        lineEdit_2->setText(PWD);
        okButton->setEnabled(true);
        checkBox->setChecked(true);
     }

    connect(lineEdit,SIGNAL(textChanged(const QString &)),
            this,SLOT(enable_button(const QString &)));
    connect(okButton,SIGNAL(clicked()),
            this,SLOT(enable_logon()));
    connect(cancelButton,SIGNAL(clicked()),
            this,SLOT(close()));
}

void DB_logon::enable_button(const QString &text)
{
    okButton->setEnabled(!text.isEmpty());
}

void DB_logon::enable_logon()
{
    int flag=0;
    QString User_ID;
    QString PWD;
    db.setUserName("sa");
    db.setPassword("3130100659lucas");
    db.setDatabaseName(dsn);
    if(!db.open())
     {
       QMessageBox::warning(this,"Fatal Error","Database Not Open",QMessageBox::Ok);
       return;
     }
    User_ID=lineEdit->text();
    PWD=lineEdit_2->text();
    QSqlQuery query;
    query.exec(QObject::tr("select * from admin"));
    while(query.next())
     {
         if(query.value(0)==User_ID)
           if(query.value(1)==PWD)
             {
               flag=1;
               break;
             }
     }
     if(!flag)
     {
         QMessageBox::warning(this,"Warning","Incorrect Password or User ID",QMessageBox::Cancel);
         return;
     }

     if(checkBox->isChecked())
     {
         QFile file("usr.inf");
         file.open(QIODevice::WriteOnly|QIODevice::Text);
         QTextStream txtout(&file);
         txtout<<lineEdit->text();
         txtout<<" ";
         txtout<<lineEdit_2->text();
     }
     else
     {
         QFile file("usr.inf");
         file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
         QTextStream txtout(&file);
         txtout<<"";
     }
     CURRENT_USER=User_ID;
     DB_funct *funct = new DB_funct(this);
     funct->show();
     this->hide();
}
