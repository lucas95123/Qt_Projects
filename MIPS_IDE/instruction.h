#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "instruct_set.h"
#include "stdafx.h"

class instruction
{
    public:
        instruction();
        void store_bin();
        void load(string option);
        void i_complete(string instr,long current_addr);
        void find_and_write(string option,string bin_code);
    protected:
    private:
    string instruc_type;
    string op;
    string rs;
    string rt;
    string rd;
    string shamt;
    string funct;
    string index[3];
};

#endif // INSTRUCTION_H
