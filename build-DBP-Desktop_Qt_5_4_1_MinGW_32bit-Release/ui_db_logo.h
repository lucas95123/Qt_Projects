/********************************************************************************
** Form generated from reading UI file 'db_logo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_LOGO_H
#define UI_DB_LOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QCheckBox *checkBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(283, 242);
        Dialog->setCursor(QCursor(Qt::ArrowCursor));
        Dialog->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/C:/Users/Lucas/Desktop/DBP/books.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 201, 211));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 80, 121, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 30, 54, 12));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 40, 121, 16));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 41, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        okButton = new QPushButton(groupBox);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(20, 160, 75, 23));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(110, 160, 75, 23));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(40, 120, 141, 21));
        checkBox->raise();
        lineEdit_2->raise();
        label_3->raise();
        lineEdit->raise();
        layoutWidget->raise();
        okButton->raise();
        cancelButton->raise();
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\345\233\276\344\271\246\351\246\206\347\256\241\347\220\206\347\263\273\347\273\237 V1.0", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "\346\254\242\350\277\216\344\275\277\347\224\250\345\233\276\344\271\246\351\246\206\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_3->setText(QString());
        label->setText(QApplication::translate("Dialog", "\347\224\250\346\210\267\345\220\215", 0));
        label_2->setText(QApplication::translate("Dialog", "\345\257\206\347\240\201", 0));
        okButton->setText(QApplication::translate("Dialog", "\347\231\273\351\231\206", 0));
        cancelButton->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", 0));
        checkBox->setText(QApplication::translate("Dialog", "\350\256\260\344\275\217\347\224\250\346\210\267\345\220\215\345\222\214\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_LOGO_H
