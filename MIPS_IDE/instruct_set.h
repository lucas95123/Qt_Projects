#ifndef INSTRUCT_SET_H
#define INSTRUCT_SET_H
#include "instruction.h"
#include "regisiter.h"
#include "stdafx.h"
#include "mainwindow.h"
#include "ideexception.h"

class MainWindow;
class instruct_set
{
    public:
        instruct_set();
        instruction* find_ins(string target)throw(InsNameIncorrect);
        regisiter* find_reg(string target);
        long find_lable(string target);
        void store_bin(string bin_code);
        string get_addre(string lable);
        string get_addre(string lable,long current_addr);
        void build_asm(MainWindow *MW)throw(InsNameIncorrect);
        void build_bin(MainWindow *MW);
        void generate_bin(QString &filename,MainWindow *MW);
        void generate_asm(QString &filename,MainWindow *MW);
        void generate_coe(QString &filename,MainWindow *MW);
        void clear();
        void bin_2_instruct(string code,long counter);
    protected:
    private:
        map<string,instruction*>  MIPS_instruct;
        map<string,regisiter*> MIPS_regisiter;
        vector<string>  code_space;
        vector<string>  bin_space;
        map<string,long> lable_index;
        string BaseAddre;
        map<string,string> regfile;
};

#endif // INSTRUCT_SET_H
