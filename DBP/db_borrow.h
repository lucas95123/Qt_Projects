#ifndef DB_BORROW_H
#define DB_BORROW_H

#include <QDialog>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDateTime>

namespace Ui {
class db_Borrow;
}

class db_Borrow : public QDialog
{
    Q_OBJECT

public:
    explicit db_Borrow(QWidget *parent = 0);
    ~db_Borrow();
signals:
    void all_filled();
    void not_all_filled();
    void borrow_success(const QString &);
protected slots:
    virtual void slot_pushok();
    void change_stock(const QString &stock);
    void change_borrow(const QString &cno);
    void check_if_filled();
    void enable_okbutton();
    void disable_okbutton();
protected:
    Ui::db_Borrow *ui;
    QSqlTableModel *model;
private:
    QDateTime find_min_returntime(const QString &bno);
    bool check_if_borrowed(const QString &cno,const QString &bno);
};

#endif // DB_BORROW_H
