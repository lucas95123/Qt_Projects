/********************************************************************************
** Form generated from reading UI file 'db_add_card.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_ADD_CARD_H
#define UI_DB_ADD_CARD_H

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

class Ui_DB_Add_Card
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_cno;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_depart;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_type;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *DB_Add_Card)
    {
        if (DB_Add_Card->objectName().isEmpty())
            DB_Add_Card->setObjectName(QStringLiteral("DB_Add_Card"));
        DB_Add_Card->resize(203, 244);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/C:/Users/Lucas/Desktop/DBP/books.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DB_Add_Card->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DB_Add_Card);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(DB_Add_Card);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_cno = new QLineEdit(DB_Add_Card);
        lineEdit_cno->setObjectName(QStringLiteral("lineEdit_cno"));

        horizontalLayout_5->addWidget(lineEdit_cno);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(DB_Add_Card);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lineEdit_name = new QLineEdit(DB_Add_Card);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_4->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(DB_Add_Card);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_depart = new QLineEdit(DB_Add_Card);
        lineEdit_depart->setObjectName(QStringLiteral("lineEdit_depart"));

        horizontalLayout_3->addWidget(lineEdit_depart);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(DB_Add_Card);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_type = new QLineEdit(DB_Add_Card);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));

        horizontalLayout_2->addWidget(lineEdit_type);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_add = new QPushButton(DB_Add_Card);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        horizontalLayout->addWidget(pushButton_add);

        pushButton_cancel = new QPushButton(DB_Add_Card);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DB_Add_Card);

        QMetaObject::connectSlotsByName(DB_Add_Card);
    } // setupUi

    void retranslateUi(QDialog *DB_Add_Card)
    {
        DB_Add_Card->setWindowTitle(QApplication::translate("DB_Add_Card", "\346\267\273\345\212\240\345\200\237\344\271\246\350\257\201", 0));
        label->setText(QApplication::translate("DB_Add_Card", "\345\215\241\345\217\267", 0));
        label_2->setText(QApplication::translate("DB_Add_Card", "\345\247\223\345\220\215", 0));
        label_3->setText(QApplication::translate("DB_Add_Card", "\345\215\225\344\275\215", 0));
        label_4->setText(QApplication::translate("DB_Add_Card", "\347\261\273\345\210\253", 0));
        pushButton_add->setText(QApplication::translate("DB_Add_Card", "\346\267\273\345\212\240", 0));
        pushButton_cancel->setText(QApplication::translate("DB_Add_Card", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class DB_Add_Card: public Ui_DB_Add_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_ADD_CARD_H
