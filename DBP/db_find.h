#ifndef DB_FIND_H
#define DB_FIND_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class DB_Find;
}

class DB_Find : public QDialog
{
    Q_OBJECT

public:
    explicit DB_Find(QWidget *parent = 0);
    ~DB_Find();
private slots:
    void slot_find();
private:
    Ui::DB_Find *ui;
    QSqlTableModel *model;
};

#endif // DB_FIND_H
