#ifndef DB_DEL_CARD_H
#define DB_DEL_CARD_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class db_Del_Card;
}

class db_Del_Card : public QDialog
{
    Q_OBJECT

public:
    explicit db_Del_Card(QWidget *parent = 0);
    ~db_Del_Card();
private slots:
    void slot_del_card();
private:
    Ui::db_Del_Card *ui;
};

#endif // DB_DEL_CARD_H
