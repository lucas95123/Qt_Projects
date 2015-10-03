#include "regisiter.h"
#include  "stdafx.h"

extern string dec_to_bin(string str, int bits);

regisiter::regisiter()
{
   cin>>reg_num;
   reg_num=dec_to_bin(reg_num,5);
}

string regisiter::fetch(){
    return reg_num;
}
