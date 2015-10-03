#include "db_find.h"
#include "ui_db_find.h"

DB_Find::DB_Find(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DB_Find)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this);
    model->setTable("book");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行
    //model->removeColumn(1); //不显示name属性列,如果这时添加记录，则该属性的值添加不上
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(ui->pushButton_exit,SIGNAL(clicked()),
            this,SLOT(close()));
    connect(ui->pushButton_find,SIGNAL(clicked()),
            this,SLOT(slot_find()));
}

DB_Find::~DB_Find()
{
    delete ui;
}

void DB_Find::slot_find()
{
    QString title = ui->lineEdit_name->text();
    QString category=ui->lineEdit_category->text();
    QString press=ui->lineEdit_press->text();
    QString year_lower_bound=ui->spinBox_year->text();
    QString year_upper_bound=ui->spinBox_year_2->text();
    QString author=ui->lineEdit_author->text();
    QString price_lower_bound=ui->doubleSpinBox_price->text();
    QString price_upper_bound=ui->doubleSpinBox_price_2->text();

    QString query;
    if(!title.isEmpty())
    {
        query=query+QObject::tr("title = '%1' and ").arg(title);
    }
    if(!category.isEmpty())
    {
        query=query+QObject::tr("category = '%1' and ").arg(category);
    }
    if(!press.isEmpty())
    {
        query=query+QObject::tr("press = '%1' and ").arg(press);
    }
    if(!year_lower_bound.isEmpty())
    {
        query=query+QObject::tr("year >= %1 and ").arg(year_lower_bound);
    }
    if(!year_upper_bound.isEmpty())
    {
        query=query+QObject::tr("year <= %1 and ").arg(year_upper_bound);
    }
    if(!author.isEmpty())
    {
        query=query+QObject::tr("author = '%1' and ").arg(author);
    }
    if(!price_lower_bound.isEmpty())
    {
        query=query+QObject::tr("price >= %1 and ").arg(price_lower_bound);
    }
    if(!price_upper_bound.isEmpty())
    {
        query=query+QObject::tr("price <= %1").arg(price_upper_bound);
    }

    Qt::SortOrder order;
    if(ui->comboBox_2->currentIndex()==1)
        order=Qt::AscendingOrder;
    else order=Qt::DescendingOrder;

      if(!query.isEmpty())
      {
        model->setFilter(query); //根据姓名进行筛选
        model->sort(ui->comboBox->currentIndex(),order);
        model->select(); //显示结果
      }
      else
      {
        model->setTable("book");
        model->select();
      }
}
