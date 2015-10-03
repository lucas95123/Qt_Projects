/********************************************************************************
** Form generated from reading UI file 'db_maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_MAINDIALOG_H
#define UI_DB_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_db_Mdialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *db_Mdialog)
    {
        if (db_Mdialog->objectName().isEmpty())
            db_Mdialog->setObjectName(QStringLiteral("db_Mdialog"));
        db_Mdialog->resize(866, 611);
        label = new QLabel(db_Mdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 54, 12));
        lineEdit = new QLineEdit(db_Mdialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 40, 113, 20));
        lineEdit_2 = new QLineEdit(db_Mdialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 40, 113, 20));
        label_2 = new QLabel(db_Mdialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 50, 54, 12));
        lineEdit_3 = new QLineEdit(db_Mdialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(480, 40, 113, 20));
        label_3 = new QLabel(db_Mdialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 50, 54, 12));
        tableView = new QTableView(db_Mdialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 100, 831, 491));
        pushButton = new QPushButton(db_Mdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 40, 75, 23));

        retranslateUi(db_Mdialog);

        QMetaObject::connectSlotsByName(db_Mdialog);
    } // setupUi

    void retranslateUi(QDialog *db_Mdialog)
    {
        db_Mdialog->setWindowTitle(QApplication::translate("db_Mdialog", "Dialog", 0));
        label->setText(QApplication::translate("db_Mdialog", "TextLabel", 0));
        label_2->setText(QApplication::translate("db_Mdialog", "TextLabel", 0));
        label_3->setText(QApplication::translate("db_Mdialog", "TextLabel", 0));
        pushButton->setText(QApplication::translate("db_Mdialog", "Find", 0));
    } // retranslateUi

};

namespace Ui {
    class db_Mdialog: public Ui_db_Mdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_MAINDIALOG_H
