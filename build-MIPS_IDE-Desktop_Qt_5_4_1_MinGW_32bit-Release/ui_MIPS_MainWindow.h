/********************************************************************************
** Form generated from reading UI file 'MIPS_MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIPS_MAINWINDOW_H
#define UI_MIPS_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_S;
    QAction *action_P;
    QAction *actionExit_X;
    QAction *action_U;
    QAction *action_T;
    QAction *action_C;
    QAction *action_P_2;
    QAction *action_L;
    QAction *action_F;
    QAction *action_R;
    QAction *action_G;
    QAction *action_A_2;
    QAction *action_Asm;
    QAction *actionCoe;
    QAction *action_BIN;
    QAction *action_Step;
    QAction *action_Jal;
    QAction *action_2;
    QAction *action_3;
    QAction *action_open_ASM;
    QAction *action_open_Bin;
    QAction *action_open_Coe;
    QAction *action_save_ASM;
    QAction *action_save_BIN;
    QAction *action_save_COE;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *textEdit_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menu_O;
    QMenu *menu_A;
    QMenu *menuEdit;
    QMenu *menuBuild_B;
    QMenu *menuDebug;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(597, 526);
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Users/Lucas/Desktop/DBP/books.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QStringLiteral("action_N"));
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_P = new QAction(MainWindow);
        action_P->setObjectName(QStringLiteral("action_P"));
        actionExit_X = new QAction(MainWindow);
        actionExit_X->setObjectName(QStringLiteral("actionExit_X"));
        action_U = new QAction(MainWindow);
        action_U->setObjectName(QStringLiteral("action_U"));
        action_T = new QAction(MainWindow);
        action_T->setObjectName(QStringLiteral("action_T"));
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QStringLiteral("action_C"));
        action_P_2 = new QAction(MainWindow);
        action_P_2->setObjectName(QStringLiteral("action_P_2"));
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QStringLiteral("action_L"));
        action_F = new QAction(MainWindow);
        action_F->setObjectName(QStringLiteral("action_F"));
        action_R = new QAction(MainWindow);
        action_R->setObjectName(QStringLiteral("action_R"));
        action_G = new QAction(MainWindow);
        action_G->setObjectName(QStringLiteral("action_G"));
        action_A_2 = new QAction(MainWindow);
        action_A_2->setObjectName(QStringLiteral("action_A_2"));
        action_Asm = new QAction(MainWindow);
        action_Asm->setObjectName(QStringLiteral("action_Asm"));
        actionCoe = new QAction(MainWindow);
        actionCoe->setObjectName(QStringLiteral("actionCoe"));
        action_BIN = new QAction(MainWindow);
        action_BIN->setObjectName(QStringLiteral("action_BIN"));
        action_Step = new QAction(MainWindow);
        action_Step->setObjectName(QStringLiteral("action_Step"));
        action_Jal = new QAction(MainWindow);
        action_Jal->setObjectName(QStringLiteral("action_Jal"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_open_ASM = new QAction(MainWindow);
        action_open_ASM->setObjectName(QStringLiteral("action_open_ASM"));
        action_open_Bin = new QAction(MainWindow);
        action_open_Bin->setObjectName(QStringLiteral("action_open_Bin"));
        action_open_Coe = new QAction(MainWindow);
        action_open_Coe->setObjectName(QStringLiteral("action_open_Coe"));
        action_save_ASM = new QAction(MainWindow);
        action_save_ASM->setObjectName(QStringLiteral("action_save_ASM"));
        action_save_BIN = new QAction(MainWindow);
        action_save_BIN->setObjectName(QStringLiteral("action_save_BIN"));
        action_save_COE = new QAction(MainWindow);
        action_save_COE->setObjectName(QStringLiteral("action_save_COE"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(567, 16777215));

        verticalLayout->addWidget(textEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        verticalLayout_2->addWidget(textEdit_3);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        horizontalLayout_3->addWidget(textEdit_2);


        verticalLayout_3->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 597, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menu_O = new QMenu(menuFile);
        menu_O->setObjectName(QStringLiteral("menu_O"));
        menu_A = new QMenu(menuFile);
        menu_A->setObjectName(QStringLiteral("menu_A"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuBuild_B = new QMenu(menubar);
        menuBuild_B->setObjectName(QStringLiteral("menuBuild_B"));
        menuDebug = new QMenu(menubar);
        menuDebug->setObjectName(QStringLiteral("menuDebug"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuBuild_B->menuAction());
        menubar->addAction(menuDebug->menuAction());
        menuFile->addAction(action_N);
        menuFile->addAction(menu_O->menuAction());
        menuFile->addAction(action_S);
        menuFile->addAction(menu_A->menuAction());
        menuFile->addAction(action_P);
        menuFile->addAction(actionExit_X);
        menu_O->addAction(action_open_ASM);
        menu_O->addAction(action_open_Bin);
        menu_O->addAction(action_open_Coe);
        menu_A->addAction(action_save_ASM);
        menu_A->addAction(action_save_BIN);
        menu_A->addAction(action_save_COE);
        menuEdit->addAction(action_U);
        menuEdit->addAction(action_T);
        menuEdit->addAction(action_C);
        menuEdit->addAction(action_P_2);
        menuEdit->addAction(action_L);
        menuEdit->addAction(action_F);
        menuEdit->addAction(action_R);
        menuEdit->addAction(action_G);
        menuEdit->addAction(action_A_2);
        menuBuild_B->addAction(action_Asm);
        menuBuild_B->addAction(actionCoe);
        menuBuild_B->addAction(action_BIN);
        menuDebug->addAction(action_Step);
        menuDebug->addAction(action_Jal);
        menuDebug->addAction(action_2);
        menuDebug->addAction(action_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MIPS IDE Beta V1.1 by Lucas", 0));
        action_N->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272 (&N)", 0));
        action_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230 (&S)", 0));
        action_P->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260 (&P)", 0));
        actionExit_X->setText(QApplication::translate("MainWindow", "Exit(&X)", 0));
        action_U->setText(QApplication::translate("MainWindow", "\346\222\222\346\266\210 (&U)", 0));
        action_T->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207 (&T)", 0));
        action_C->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266 (&C)", 0));
        action_P_2->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264 (&P)", 0));
        action_L->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244 (&L)", 0));
        action_F->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276 (&F)", 0));
        action_R->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242 (&R)", 0));
        action_G->setText(QApplication::translate("MainWindow", "\350\275\254\345\210\260 (&G)", 0));
        action_A_2->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211 (&A)", 0));
        action_Asm->setText(QApplication::translate("MainWindow", "\346\261\207\347\274\226 (Asm)", 0));
        actionCoe->setText(QApplication::translate("MainWindow", "Coe", 0));
        action_BIN->setText(QApplication::translate("MainWindow", "\345\217\215\346\261\207\347\274\226", 0));
        action_Step->setText(QApplication::translate("MainWindow", "\345\215\225\346\255\245(Step)", 0));
        action_Jal->setText(QApplication::translate("MainWindow", "\345\215\225\346\255\245(\350\267\263\350\277\207Jal)", 0));
        action_2->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\345\210\260\342\200\246", 0));
        action_3->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0));
        action_open_ASM->setText(QApplication::translate("MainWindow", "ASM", 0));
        action_open_Bin->setText(QApplication::translate("MainWindow", "bin", 0));
        action_open_Coe->setText(QApplication::translate("MainWindow", "coe", 0));
        action_save_ASM->setText(QApplication::translate("MainWindow", "Asm", 0));
        action_save_BIN->setText(QApplication::translate("MainWindow", "Bin", 0));
        action_save_COE->setText(QApplication::translate("MainWindow", "Coe", 0));
        label->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245", 0));
        label_2->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Build Log", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File (&F)", 0));
        menu_O->setTitle(QApplication::translate("MainWindow", "\346\211\223\345\274\200 (&O)", 0));
        menu_A->setTitle(QApplication::translate("MainWindow", "\344\277\235\345\255\230\344\270\272 (&A)", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit(&E)", 0));
        menuBuild_B->setTitle(QApplication::translate("MainWindow", "Build(&B)", 0));
        menuDebug->setTitle(QApplication::translate("MainWindow", "Debug(&D)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIPS_MAINWINDOW_H
