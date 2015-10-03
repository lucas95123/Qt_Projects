#include "db_logon.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DB_logon *w=new DB_logon;
    w->show();

    return a.exec();
}
