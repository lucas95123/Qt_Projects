/********************************************************************************
** Form generated from reading UI file 'db_in_single.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_IN_SINGLE_H
#define UI_DB_IN_SINGLE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_db_in_single
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QSpinBox *spinBox_year;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QSpinBox *spinBox_stock;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *db_in_single)
    {
        if (db_in_single->objectName().isEmpty())
            db_in_single->setObjectName(QStringLiteral("db_in_single"));
        db_in_single->resize(256, 264);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/C:/Users/Lucas/Desktop/DBP/books.ico"), QSize(), QIcon::Normal, QIcon::Off);
        db_in_single->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(db_in_single);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(db_in_single);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(db_in_single);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(db_in_single);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(db_in_single);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(db_in_single);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(db_in_single);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(db_in_single);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(db_in_single);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(db_in_single);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(db_in_single);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(db_in_single);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(db_in_single);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        spinBox_year = new QSpinBox(db_in_single);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setMinimum(0);
        spinBox_year->setMaximum(3000);
        spinBox_year->setValue(2015);

        verticalLayout_2->addWidget(spinBox_year);

        lineEdit_6 = new QLineEdit(db_in_single);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(db_in_single);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_2->addWidget(lineEdit_7);

        spinBox_stock = new QSpinBox(db_in_single);
        spinBox_stock->setObjectName(QStringLiteral("spinBox_stock"));
        spinBox_stock->setMinimum(0);
        spinBox_stock->setMaximum(3000);
        spinBox_stock->setValue(0);

        verticalLayout_2->addWidget(spinBox_stock);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_insert = new QPushButton(db_in_single);
        pushButton_insert->setObjectName(QStringLiteral("pushButton_insert"));

        horizontalLayout->addWidget(pushButton_insert);

        pushButton_cancel = new QPushButton(db_in_single);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(db_in_single);

        QMetaObject::connectSlotsByName(db_in_single);
    } // setupUi

    void retranslateUi(QDialog *db_in_single)
    {
        db_in_single->setWindowTitle(QApplication::translate("db_in_single", "\345\215\225\346\234\254\345\205\245\345\272\223", 0));
        label->setText(QApplication::translate("db_in_single", "\344\271\246\345\217\267", 0));
        label_2->setText(QApplication::translate("db_in_single", "\347\261\273\345\210\253", 0));
        label_3->setText(QApplication::translate("db_in_single", "\344\271\246\345\220\215", 0));
        label_4->setText(QApplication::translate("db_in_single", "\345\207\272\347\211\210\347\244\276", 0));
        label_5->setText(QApplication::translate("db_in_single", "\345\271\264\344\273\275", 0));
        label_6->setText(QApplication::translate("db_in_single", "\344\275\234\350\200\205", 0));
        label_7->setText(QApplication::translate("db_in_single", "\344\273\267\346\240\274", 0));
        label_8->setText(QApplication::translate("db_in_single", "\346\225\260\351\207\217", 0));
        pushButton_insert->setText(QApplication::translate("db_in_single", "\345\205\245\345\272\223", 0));
        pushButton_cancel->setText(QApplication::translate("db_in_single", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class db_in_single: public Ui_db_in_single {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_IN_SINGLE_H
