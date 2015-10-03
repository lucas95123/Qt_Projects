#ifndef DB_RETURN_H
#define DB_RETURN_H
#include "db_borrow.h"
#include "ui_db_borrow.h"
#include <QDialog>

namespace Ui {
class db_Return;
}

class db_Return : public db_Borrow
{
    Q_OBJECT

public:
    explicit db_Return(QWidget *parent = 0);
    ~db_Return();
private slots:
    virtual void slot_pushok();

private:

};

#endif // DB_RETURN_H
