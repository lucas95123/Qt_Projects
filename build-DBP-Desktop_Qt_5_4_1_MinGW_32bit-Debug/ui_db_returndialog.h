/********************************************************************************
** Form generated from reading UI file 'db_returndialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_RETURNDIALOG_H
#define UI_DB_RETURNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *db_Borrow)
    {
        if (db_Borrow->objectName().isEmpty())
            db_Borrow->setObjectName(QStringLiteral("db_Borrow"));
        db_Borrow->resize(836, 535);
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
        db_Borrow->setWindowTitle(QApplication::translate("db_Borrow", "\350\277\230\344\271\246", 0));
        label->setText(QApplication::translate("db_Borrow", "\345\200\237\344\271\246\350\257\201\345\217\267\347\240\201", 0));
        label_2->setText(QApplication::translate("db_Borrow", "\350\257\267\350\276\223\345\205\245\344\271\246\345\217\267", 0));
        pushButton_ok->setText(QApplication::translate("db_Borrow", "\345\275\222\350\277\230", 0));
        pushButton_cancel->setText(QApplication::translate("db_Borrow", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class db_Borrow: public Ui_db_Borrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_RETURNDIALOG_H
