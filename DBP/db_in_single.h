#ifndef DB_IN_SINGLE_H
#define DB_IN_SINGLE_H
#include <QSqlQuery>
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class db_in_single;
}

class db_in_single : public QDialog
{
    Q_OBJECT

public:
    explicit db_in_single(QWidget *parent = 0);
    ~db_in_single();
signals:
    void all_filled();
    void not_all_filled();
private slots:
    void slot_insert();
    void check_if_filled();
    void enable_insert();
    void disable_insert();
private:
    Ui::db_in_single *ui;
};

#endif // DB_IN_SINGLE_H
