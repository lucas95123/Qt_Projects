#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myhighlighter.h"
#include "ideexception.h"
#include <QMainWindow>
#include <ui_MIPS_MainWindow.h>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QString>
#include <QShortcut>

class MyHighLighter;
class MainWindow : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString Current_file;
signals:
private slots:
    void slot_new();
    void open_Asm();
    void open_Bin();
    void open_Coe();
    void slot_save()throw(FileNotSelected);
    void save_as_Asm()throw(FileNotSelected);
    void save_as_Bin();
    void save_as_Coe();
    void slot_build_asm();
    void slot_build_bin();
    void slot_build_coe();
    void slot_enable_textedit();
private:
    void loadfile(const QString &fileName);
    void save(const QString &fileName);
};

#endif // MAINWINDOW_H
