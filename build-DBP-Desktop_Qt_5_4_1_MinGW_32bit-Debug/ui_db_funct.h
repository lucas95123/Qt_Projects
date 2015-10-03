/********************************************************************************
** Form generated from reading UI file 'db_funct.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_FUNCT_H
#define UI_DB_FUNCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DB_funct
{
public:
    QGridLayout *gridLayout;
    QToolButton *toolButton_in;
    QToolButton *toolButton_borrow;
    QToolButton *toolButton_add;
    QToolButton *toolButton_find;
    QToolButton *toolButton_return;
    QToolButton *toolButton_del;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *DB_funct)
    {
        if (DB_funct->objectName().isEmpty())
            DB_funct->setObjectName(QStringLiteral("DB_funct"));
        DB_funct->resize(234, 211);
        gridLayout = new QGridLayout(DB_funct);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolButton_in = new QToolButton(DB_funct);
        toolButton_in->setObjectName(QStringLiteral("toolButton_in"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/bmp/in.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_in->setIcon(icon);
        toolButton_in->setIconSize(QSize(61, 61));

        gridLayout->addWidget(toolButton_in, 0, 0, 1, 1);

        toolButton_borrow = new QToolButton(DB_funct);
        toolButton_borrow->setObjectName(QStringLiteral("toolButton_borrow"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/bmp/bmp/\345\233\276\345\203\217 5.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_borrow->setIcon(icon1);
        toolButton_borrow->setIconSize(QSize(61, 61));

        gridLayout->addWidget(toolButton_borrow, 0, 1, 1, 1);

        toolButton_add = new QToolButton(DB_funct);
        toolButton_add->setObjectName(QStringLiteral("toolButton_add"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/bmp/bmp/Add user.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_add->setIcon(icon2);
        toolButton_add->setIconSize(QSize(61, 61));

        gridLayout->addWidget(toolButton_add, 0, 2, 1, 1);

        toolButton_find = new QToolButton(DB_funct);
        toolButton_find->setObjectName(QStringLiteral("toolButton_find"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/bmp/bmp/search.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_find->setIcon(icon3);
        toolButton_find->setIconSize(QSize(61, 61));

        gridLayout->addWidget(toolButton_find, 1, 0, 1, 1);

        toolButton_return = new QToolButton(DB_funct);
        toolButton_return->setObjectName(QStringLiteral("toolButton_return"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/bmp/bmp/\345\233\276\345\203\217 4.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_return->setIcon(icon4);
        toolButton_return->setIconSize(QSize(61, 61));

        gridLayout->addWidget(toolButton_return, 1, 1, 1, 1);

        toolButton_del = new QToolButton(DB_funct);
        toolButton_del->setObjectName(QStringLiteral("toolButton_del"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/bmp/bmp/Remove user.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_del->setIcon(icon5);
        toolButton_del->setIconSize(QSize(61, 61));

        gridLayout->addWidget(toolButton_del, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_logout = new QPushButton(DB_funct);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout_3->addWidget(pushButton_logout);

        pushButton_exit = new QPushButton(DB_funct);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        horizontalLayout_3->addWidget(pushButton_exit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 3);


        retranslateUi(DB_funct);

        QMetaObject::connectSlotsByName(DB_funct);
    } // setupUi

    void retranslateUi(QDialog *DB_funct)
    {
        DB_funct->setWindowTitle(QApplication::translate("DB_funct", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237 V1.0", 0));
        toolButton_in->setText(QApplication::translate("DB_funct", "\345\233\276\344\271\246\345\205\245\345\272\223", 0));
        toolButton_borrow->setText(QApplication::translate("DB_funct", "...", 0));
        toolButton_add->setText(QApplication::translate("DB_funct", "...", 0));
        toolButton_find->setText(QApplication::translate("DB_funct", "...", 0));
        toolButton_return->setText(QApplication::translate("DB_funct", "...", 0));
        toolButton_del->setText(QApplication::translate("DB_funct", "...", 0));
        pushButton_logout->setText(QApplication::translate("DB_funct", "\346\263\250\351\224\200", 0));
        pushButton_exit->setText(QApplication::translate("DB_funct", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class DB_funct: public Ui_DB_funct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_FUNCT_H
