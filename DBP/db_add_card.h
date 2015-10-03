#ifndef DB_ADD_CARD_H
#define DB_ADD_CARD_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class DB_Add_Card;
}

class DB_Add_Card : public QDialog
{
    Q_OBJECT

public:
    explicit DB_Add_Card(QWidget *parent = 0);
    ~DB_Add_Card();
signals:
    void all_filled();
    void not_all_filled();
private slots:
    void check_if_filled();
    void enable_insert();
    void disable_insert();
    void slot_insert();
private:
    Ui::DB_Add_Card *ui;
};

#endif // DB_ADD_CARD_H
