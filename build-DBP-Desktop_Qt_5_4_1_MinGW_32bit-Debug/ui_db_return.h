/********************************************************************************
** Form generated from reading UI file 'db_return.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_RETURN_H
#define UI_DB_RETURN_H

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

class Ui_db_Return
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_cno;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_bno;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QTableView *tableView;

    void setupUi(QDialog *db_Return)
    {
        if (db_Return->objectName().isEmpty())
            db_Return->setObjectName(QStringLiteral("db_Return"));
        db_Return->resize(1039, 671);
        gridLayout = new QGridLayout(db_Return);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(db_Return);
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
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_bno = new QLineEdit(layoutWidget_2);
        lineEdit_bno->setObjectName(QStringLiteral("lineEdit_bno"));

        horizontalLayout_2->addWidget(lineEdit_bno);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_ok = new QPushButton(layoutWidget_3);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        horizontalLayout_5->addWidget(pushButton_ok);

        pushButton_cancel = new QPushButton(layoutWidget_3);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout_5->addWidget(pushButton_cancel);

        splitter->addWidget(layoutWidget_3);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        tableView = new QTableView(db_Return);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 1, 1, 1);


        retranslateUi(db_Return);

        QMetaObject::connectSlotsByName(db_Return);
    } // setupUi

    void retranslateUi(QDialog *db_Return)
    {
        db_Return->setWindowTitle(QApplication::translate("db_Return", "Dialog", 0));
        label->setText(QApplication::translate("db_Return", "\345\200\237\344\271\246\350\257\201\345\217\267\347\240\201", 0));
        label_2->setText(QApplication::translate("db_Return", "\350\257\267\350\276\223\345\205\245\344\271\246\345\217\267", 0));
        pushButton_ok->setText(QApplication::translate("db_Return", "\345\275\222\350\277\230", 0));
        pushButton_cancel->setText(QApplication::translate("db_Return", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class db_Return: public Ui_db_Return {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_RETURN_H
