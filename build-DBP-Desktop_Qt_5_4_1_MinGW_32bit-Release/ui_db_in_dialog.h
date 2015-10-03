/********************************************************************************
** Form generated from reading UI file 'db_in_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_IN_DIALOG_H
#define UI_DB_IN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DB_in_dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton;
    QLabel *label;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton_2;
    QLabel *label_2;

    void setupUi(QDialog *DB_in_dialog)
    {
        if (DB_in_dialog->objectName().isEmpty())
            DB_in_dialog->setObjectName(QStringLiteral("DB_in_dialog"));
        DB_in_dialog->resize(199, 137);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/C:/Users/Lucas/Desktop/DBP/books.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DB_in_dialog->setWindowIcon(icon);
        layoutWidget = new QWidget(DB_in_dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 71, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/bmp/bmp/single in.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(61, 61));

        verticalLayout->addWidget(toolButton);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        layoutWidget1 = new QWidget(DB_in_dialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 20, 71, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_2 = new QToolButton(layoutWidget1);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/bmp/bmp/multi in.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon2);
        toolButton_2->setIconSize(QSize(61, 61));

        verticalLayout_2->addWidget(toolButton_2);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);


        retranslateUi(DB_in_dialog);

        QMetaObject::connectSlotsByName(DB_in_dialog);
    } // setupUi

    void retranslateUi(QDialog *DB_in_dialog)
    {
        DB_in_dialog->setWindowTitle(QApplication::translate("DB_in_dialog", "\345\233\276\344\271\246\345\205\245\345\272\223", 0));
        toolButton->setText(QApplication::translate("DB_in_dialog", "...", 0));
        label->setText(QApplication::translate("DB_in_dialog", "  \345\215\225\346\234\254\345\205\245\345\272\223", 0));
        toolButton_2->setText(QApplication::translate("DB_in_dialog", "...", 0));
        label_2->setText(QApplication::translate("DB_in_dialog", "  \346\211\271\351\207\217\345\205\245\345\272\223", 0));
    } // retranslateUi

};

namespace Ui {
    class DB_in_dialog: public Ui_DB_in_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_IN_DIALOG_H
