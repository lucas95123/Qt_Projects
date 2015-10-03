#include "mainwindow.h"
#include "instruct_set.h"
#define DEBUG QMessageBox::information(0,"DEbug","debug",QMessageBox::Cancel);

instruct_set MIPS;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    Current_file="";
    action_S->setEnabled(false);
    menu_A->setEnabled(false);
    textEdit_3->setReadOnly(true);
    textEdit_2->setReadOnly(true);

    MyHighLighter *highlighter = new MyHighLighter(textEdit->document());
    QShortcut *m_CTRL_N_Accel = new QShortcut(QKeySequence(tr("Ctrl+N")), this);
    QShortcut *m_CTRL_S_Accel = new QShortcut(QKeySequence(tr("Ctrl+S")), this);
    QShortcut *m_CTRL_F9_Accel = new QShortcut(QKeySequence(tr("Ctrl+F9")),this);
    QShortcut *m_CTRL_F10_Accel = new QShortcut(QKeySequence(tr("Ctrl+F10")),this);
    QShortcut *m_CTRL_F11_Accel = new QShortcut(QKeySequence(tr("Ctrl+F11")),this);

    connect(action_N,SIGNAL(triggered()),
            this,SLOT(slot_enable_textedit()));
    connect(action_open_ASM,SIGNAL(triggered()),
            this,SLOT(slot_enable_textedit()));
    connect(action_open_Bin,SIGNAL(triggered()),
            this,SLOT(slot_enable_textedit()));
    connect(action_open_Coe,SIGNAL(triggered()),
            this,SLOT(slot_enable_textedit()));
    connect(m_CTRL_N_Accel,SIGNAL(activated()),
            this,SLOT(slot_new()));
    connect(m_CTRL_S_Accel,SIGNAL(activated()),
            this,SLOT(slot_save()));
    connect(m_CTRL_F9_Accel,SIGNAL(activated()),
            this,SLOT(slot_build_asm()));
    connect(m_CTRL_F10_Accel,SIGNAL(activated()),
            this,SLOT(slot_build_coe()));
    connect(m_CTRL_F11_Accel,SIGNAL(activated()),
            this,SLOT(slot_build_bin()));
    connect(action_N,SIGNAL(triggered()),
            this,SLOT(slot_new()));
    connect(action_open_ASM,SIGNAL(triggered()),
            this,SLOT(open_Asm()));
    connect(action_open_Bin,SIGNAL(triggered()),
            this,SLOT(open_Bin()));
    connect(action_open_Coe,SIGNAL(triggered()),
            this,SLOT(open_Coe()));
    connect(action_S,SIGNAL(triggered()),
            this,SLOT(slot_save()));
    connect(actionExit_X,SIGNAL(triggered()),
            this,SLOT(close()));
    connect(action_save_ASM,SIGNAL(triggered()),
            this,SLOT(save_as_Asm()));
    connect(action_save_BIN,SIGNAL(triggered()),
            this,SLOT(save_as_Bin()));
    connect(action_save_COE,SIGNAL(triggered()),
            this,SLOT(save_as_Coe()));
    connect(action_Asm,SIGNAL(triggered()),
            this,SLOT(slot_build_asm()));
    connect(action_BIN,SIGNAL(triggered()),
            this,SLOT(slot_build_bin()));
    connect(actionCoe,SIGNAL(triggered()),
            this,SLOT(slot_build_coe()));

}

MainWindow::~MainWindow()
{

}

void MainWindow::open_Asm()
{
      QString fileName = QFileDialog::getOpenFileName(this,
                                   tr("Open Asm"), ".",
                                   tr("Assemble files (*.asm)"));
      loadfile(fileName);
}

void MainWindow::open_Bin()
{

      QString fileName = QFileDialog::getOpenFileName(this,
                                   tr("Open Bin"), ".",
                                   tr("Binary files (*.bin)"));
      loadfile(fileName);
}

void MainWindow::open_Coe()
{

      QString fileName = QFileDialog::getOpenFileName(this,
                                   tr("Open Coe"), ".",
                                   tr("Coe files (*.coe)"));
      loadfile(fileName);
}

void MainWindow::loadfile(const QString &fileName)
{

    QFile file(fileName);
    if(fileName!="")
     {
        Current_file=fileName;
        if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
          {
             QMessageBox::warning(0,"Warning","No File Selected",QMessageBox::Ok);
          }
        QTextStream txtin(&file);
        QString linestr;
        textEdit->clear();
        while(!txtin.atEnd())
          {
             linestr=txtin.readLine();
             textEdit->setWordWrapMode(QTextOption::WordWrap);
             textEdit->textCursor().insertText(linestr+"\n");
          }
     }
    action_S->setEnabled(true);
    menu_A->setEnabled(true);
    return;
}

void MainWindow::slot_save()throw(FileNotSelected)
{
    if(Current_file=="")
        try{save_as_Asm();}
        catch(FileNotSelected& e)
        {
           throw e;
        }
    else
        save(Current_file);
}

void MainWindow::slot_new()
{
    QFileDialog newfile;
    QString fileName =QFileDialog::getSaveFileName(this,tr("新建"),tr(""),tr("Assemble files (*.asm);;Binary files (*.bin);;Coe files (*.coe)"));

    if(fileName.isEmpty())
        return;
    else
        save(fileName);
        loadfile(fileName);
    return;
}

void MainWindow::save(const QString &filename)
{

        QFile file(filename);
        if(!file.open(QIODevice::ReadWrite|QIODevice::Text|QIODevice::Truncate))
          return;
        else
        {
            QTextStream txtout(&file);
            QString Str;
            textEdit->selectAll();
            Str=textEdit->toPlainText();
            txtout<<Str;
            Current_file=filename;
        }
            return;
}

void MainWindow::save_as_Asm()throw(FileNotSelected)
{
    QString fileName =QFileDialog::getSaveFileName(this,tr("另存为"),tr(""),tr("Asm files (*.asm)"));
    if(fileName.isEmpty())
    {
        FileNotSelected e("no file is selected");
        throw e;
    }
    else
        save(fileName);
    return;
}

void MainWindow::save_as_Bin()
{
    QString fileName =QFileDialog::getSaveFileName(this,tr("另存为"),tr(""),tr("Bin files (*.bin)"));
    if(fileName.isEmpty())
        return;
    else
        save(fileName);
    return;
}

void MainWindow::save_as_Coe()
{
    QString fileName =QFileDialog::getSaveFileName(this,tr("另存为"),tr(""),tr("Coe files (*.coe)"));
    if(fileName.isEmpty())
        return;
    else
        save(fileName);
    return;
}

void MainWindow::slot_build_asm()
{
    MIPS.clear();
    try
    {
    slot_save();
    }
    catch(FileNotSelected& e)
    {
      QMessageBox::warning(0,"Warning","Not File Selected",QMessageBox::Cancel);
      return;
    }
    QString fileName;
    int i=0;
    while(Current_file[i]!='.')
    {
       fileName[i]=Current_file[i];
       i++;
    }
    fileName+=".bin";
    try
    {
    MIPS.build_asm(this);
    }
    catch(InsNameIncorrect& e)
    {
        QMessageBox::warning(0,"Warning","Instruction Name Incorrect",QMessageBox::Cancel);
        string log="\""+e.diagnose()+"\""+" is an invaild expression";
        textEdit_2->append(s2q(log));
        textEdit_2->append("<h3><font color=red>Build Failed!!</font></h3>");
        return;
    }
    MIPS.generate_bin(fileName,this);
    textEdit_2->append(Current_file);
    textEdit_2->append("<h3><font color=red>Build Success!!</font></h3>");
}

void MainWindow::slot_build_bin()
{
    MIPS.clear();
    try
    {
    slot_save();
    }
    catch(FileNotSelected& e)
    {
      QMessageBox::warning(0,"Warning","Not File Selected",QMessageBox::Cancel);
      return;
    }
    QString fileName;
    int i=0;
    while(Current_file[i]!='.')
    {
       fileName[i]=Current_file[i];
       i++;
    }
    fileName+=".asm";
    MIPS.build_bin(this);
    MIPS.generate_asm(fileName,this);
    textEdit_2->append(Current_file);
    textEdit_2->append("<h3><font color=red>Build Success!!</font></h3>");
}

void MainWindow::slot_build_coe()
{
    MIPS.clear();
    try
    {
    slot_save();
    }
    catch(FileNotSelected& e)
    {
      QMessageBox::warning(0,"Warning","Not File Selected",QMessageBox::Cancel);
      return;
    }
    QString fileName;
    int i=0;
    while(Current_file[i]!='.')
    {
       fileName[i]=Current_file[i];
       i++;
    }
    fileName+=".coe";
    try
    {
    MIPS.build_asm(this);
    }
    catch(InsNameIncorrect& e)
    {
        QMessageBox::warning(0,"Warning","Instruction Name Incorrect",QMessageBox::Cancel);
        string log="\""+e.diagnose()+"\""+" is an invaild expression";
        textEdit_2->append(s2q(log));
        textEdit_2->append("<h3><font color=red>Build Failed!!</font></h3>");
        return;
    }
    MIPS.generate_coe(fileName,this);
    textEdit_2->append(Current_file);
    textEdit_2->append("<h3><font color=red>Build Success!!</font></h3>");
}

void MainWindow::slot_enable_textedit()
{
    textEdit->setEnabled(true);
}
