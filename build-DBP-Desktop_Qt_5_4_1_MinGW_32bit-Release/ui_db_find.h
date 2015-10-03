/********************************************************************************
** Form generated from reading UI file 'db_find.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_FIND_H
#define UI_DB_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DB_Find
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_category;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_press;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpinBox *spinBox_year;
    QLabel *label_5;
    QSpinBox *spinBox_year_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_author;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_price;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_price_2;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox;
    QLabel *label_9;
    QComboBox *comboBox_2;
    QLabel *label_10;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_find;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *DB_Find)
    {
        if (DB_Find->objectName().isEmpty())
            DB_Find->setObjectName(QStringLiteral("DB_Find"));
        DB_Find->resize(1000, 740);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/C:/Users/Lucas/Desktop/DBP/books.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DB_Find->setWindowIcon(icon);
        gridLayout = new QGridLayout(DB_Find);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(DB_Find);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 1, 1, 1);

        splitter = new QSplitter(DB_Find);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_6->addWidget(lineEdit_name);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        lineEdit_category = new QLineEdit(layoutWidget1);
        lineEdit_category->setObjectName(QStringLiteral("lineEdit_category"));

        horizontalLayout_5->addWidget(lineEdit_category);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_press = new QLineEdit(layoutWidget2);
        lineEdit_press->setObjectName(QStringLiteral("lineEdit_press"));

        horizontalLayout_4->addWidget(lineEdit_press);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        spinBox_year = new QSpinBox(layoutWidget3);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setMinimum(1500);
        spinBox_year->setMaximum(3000);
        spinBox_year->setValue(1500);

        horizontalLayout->addWidget(spinBox_year);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        spinBox_year_2 = new QSpinBox(layoutWidget3);
        spinBox_year_2->setObjectName(QStringLiteral("spinBox_year_2"));
        spinBox_year_2->setMinimum(1000);
        spinBox_year_2->setMaximum(3000);
        spinBox_year_2->setValue(2020);

        horizontalLayout->addWidget(spinBox_year_2);

        splitter->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_author = new QLineEdit(layoutWidget4);
        lineEdit_author->setObjectName(QStringLiteral("lineEdit_author"));

        horizontalLayout_3->addWidget(lineEdit_author);

        splitter->addWidget(layoutWidget4);
        layoutWidget5 = new QWidget(splitter);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        doubleSpinBox_price = new QDoubleSpinBox(layoutWidget5);
        doubleSpinBox_price->setObjectName(QStringLiteral("doubleSpinBox_price"));
        doubleSpinBox_price->setMaximum(1000);

        horizontalLayout_2->addWidget(doubleSpinBox_price);

        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        doubleSpinBox_price_2 = new QDoubleSpinBox(layoutWidget5);
        doubleSpinBox_price_2->setObjectName(QStringLiteral("doubleSpinBox_price_2"));
        doubleSpinBox_price_2->setMaximum(1000);
        doubleSpinBox_price_2->setValue(1000);

        horizontalLayout_2->addWidget(doubleSpinBox_price_2);

        splitter->addWidget(layoutWidget5);
        layoutWidget6 = new QWidget(splitter);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        gridLayout_2 = new QGridLayout(layoutWidget6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget6);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget6);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(layoutWidget6);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_2->addWidget(comboBox_2, 1, 1, 1, 1);

        label_10 = new QLabel(layoutWidget6);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        splitter->addWidget(layoutWidget6);
        layoutWidget7 = new QWidget(splitter);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_find = new QPushButton(layoutWidget7);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));

        horizontalLayout_8->addWidget(pushButton_find);

        pushButton_exit = new QPushButton(layoutWidget7);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        horizontalLayout_8->addWidget(pushButton_exit);

        splitter->addWidget(layoutWidget7);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(DB_Find);

        QMetaObject::connectSlotsByName(DB_Find);
    } // setupUi

    void retranslateUi(QDialog *DB_Find)
    {
        DB_Find->setWindowTitle(QApplication::translate("DB_Find", "\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("DB_Find", "\344\271\246\345\220\215", 0));
        label_2->setText(QApplication::translate("DB_Find", "\347\261\273\345\210\253", 0));
        label_3->setText(QApplication::translate("DB_Find", "\345\207\272\347\211\210\347\244\276", 0));
        label_4->setText(QApplication::translate("DB_Find", "\345\271\264\344\273\275", 0));
        label_5->setText(QApplication::translate("DB_Find", "  \350\207\263", 0));
        label_6->setText(QApplication::translate("DB_Find", "\344\275\234\350\200\205", 0));
        lineEdit_author->setText(QString());
        label_8->setText(QApplication::translate("DB_Find", "\344\273\267\346\240\274", 0));
        label_7->setText(QApplication::translate("DB_Find", "  \350\207\263", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DB_Find", "\344\271\246\345\217\267", 0)
         << QApplication::translate("DB_Find", "\347\261\273\345\210\253", 0)
         << QApplication::translate("DB_Find", "\344\271\246\345\220\215", 0)
         << QApplication::translate("DB_Find", "\345\207\272\347\211\210\347\244\276", 0)
         << QApplication::translate("DB_Find", "\345\271\264\344\273\275", 0)
         << QApplication::translate("DB_Find", "\344\275\234\350\200\205", 0)
         << QApplication::translate("DB_Find", "\344\273\267\346\240\274", 0)
         << QApplication::translate("DB_Find", "\346\200\273\345\272\223\345\255\230", 0)
         << QApplication::translate("DB_Find", "\345\255\230\351\207\217", 0)
        );
        label_9->setText(QApplication::translate("DB_Find", "\346\216\222\345\272\217\346\226\271\345\274\217", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("DB_Find", "\345\215\207\345\272\217", 0)
         << QApplication::translate("DB_Find", "\351\231\215\345\272\217", 0)
        );
        label_10->setText(QApplication::translate("DB_Find", "\345\215\207\345\272\217/\351\231\215\345\272\217", 0));
        pushButton_find->setText(QApplication::translate("DB_Find", "\346\237\245\350\257\242", 0));
        pushButton_exit->setText(QApplication::translate("DB_Find", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class DB_Find: public Ui_DB_Find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_FIND_H
