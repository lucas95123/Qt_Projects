/********************************************************************************
** Form generated from reading UI file 'db_borrow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_BORROW_H
#define UI_DB_BORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_db_Borrow
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_cno;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_bno;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_stock;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *db_Borrow)
    {
        if (db_Borrow->objectName().isEmpty())
            db_Borrow->setObjectName(QStringLiteral("db_Borrow"));
        db_Borrow->resize(836, 535);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/C:/Users/Lucas/Desktop/DBP/books.ico"), QSize(), QIcon::Normal, QIcon::Off);
        db_Borrow->setWindowIcon(icon);
        gridLayout = new QGridLayout(db_Borrow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(db_Borrow);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_cno = new QLineEdit(layoutWidget);
        lineEdit_cno->setObjectName(QStringLiteral("lineEdit_cno"));

        horizontalLayout->addWidget(lineEdit_cno);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_bno = new QLineEdit(layoutWidget1);
        lineEdit_bno->setObjectName(QStringLiteral("lineEdit_bno"));

        horizontalLayout_2->addWidget(lineEdit_bno);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_stock = new QLineEdit(layoutWidget2);
        lineEdit_stock->setObjectName(QStringLiteral("lineEdit_stock"));

        horizontalLayout_3->addWidget(lineEdit_stock);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        dateEdit = new QDateEdit(layoutWidget3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setEnabled(true);
        dateEdit->setDateTime(QDateTime(QDate(2015, 4, 20), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(dateEdit);

        splitter->addWidget(layoutWidget3);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        tableView = new QTableView(db_Borrow);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 1, 2, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_ok = new QPushButton(db_Borrow);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        horizontalLayout_5->addWidget(pushButton_ok);

        pushButton_cancel = new QPushButton(db_Borrow);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout_5->addWidget(pushButton_cancel);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        retranslateUi(db_Borrow);

        QMetaObject::connectSlotsByName(db_Borrow);
    } // setupUi

    void retranslateUi(QDialog *db_Borrow)
    {
        db_Borrow->setWindowTitle(QApplication::translate("db_Borrow", "\345\200\237\344\271\246", 0));
        label->setText(QApplication::translate("db_Borrow", "\345\200\237\344\271\246\350\257\201\345\217\267\347\240\201", 0));
        label_2->setText(QApplication::translate("db_Borrow", "\350\257\267\350\276\223\345\205\245\344\271\246\345\217\267", 0));
        label_3->setText(QApplication::translate("db_Borrow", "\345\272\223\345\255\230      ", 0));
        label_4->setText(QApplication::translate("db_Borrow", "\345\275\222\350\277\230\346\227\245\346\234\237", 0));
        pushButton_ok->setText(QApplication::translate("db_Borrow", "\347\241\256\350\256\244", 0));
        pushButton_cancel->setText(QApplication::translate("db_Borrow", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class db_Borrow: public Ui_db_Borrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_BORROW_H
