/********************************************************************************
** Form generated from reading UI file 'db_del_card.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_DEL_CARD_H
#define UI_DB_DEL_CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_db_Del_Card
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_del;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *db_Del_Card)
    {
        if (db_Del_Card->objectName().isEmpty())
            db_Del_Card->setObjectName(QStringLiteral("db_Del_Card"));
        db_Del_Card->resize(196, 100);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/C:/Users/Lucas/Desktop/DBP/books.ico"), QSize(), QIcon::Normal, QIcon::Off);
        db_Del_Card->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(db_Del_Card);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(db_Del_Card);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(db_Del_Card);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_del = new QPushButton(db_Del_Card);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));

        horizontalLayout->addWidget(pushButton_del);

        pushButton_cancel = new QPushButton(db_Del_Card);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(db_Del_Card);

        QMetaObject::connectSlotsByName(db_Del_Card);
    } // setupUi

    void retranslateUi(QDialog *db_Del_Card)
    {
        db_Del_Card->setWindowTitle(QApplication::translate("db_Del_Card", "\345\210\240\351\231\244\345\200\237\344\271\246\350\257\201", 0));
        label->setText(QApplication::translate("db_Del_Card", "\350\257\267\350\276\223\345\200\237\344\271\246\350\257\201\345\217\267\357\274\232", 0));
        pushButton_del->setText(QApplication::translate("db_Del_Card", "\347\241\256\350\256\244\345\210\240\351\231\244", 0));
        pushButton_cancel->setText(QApplication::translate("db_Del_Card", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class db_Del_Card: public Ui_db_Del_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_DEL_CARD_H
