#include "instruct_set.h"
#include "instruction.h"
#include  "stdafx.h"

extern instruct_set MIPS;
instruction::instruction()
{
     cin>>instruc_type;
     string option;
     cin>>option;
     while(option!=";")
     {
           load(option);
           cin>>option;
     }
     string indicator;
     int i=0;
     cin>>indicator;
     while(indicator!=";")
     {
         index[i]=indicator;
         i++;
         cin>>indicator;
     }

}

void instruction::i_complete(string str,long current_addr)
{
    string tmp[5];
    int i=0;
    int j=0;
    while(str[i]!=0)
    {
        if(str[i]!=',')
            tmp[j]+=str[i];
        else j++;
        i++;
    }
   i=0;
   while(tmp[i]!="")
    {
        if(tmp[i][0]=='$'||(tmp[i][0]=='r'&&(tmp[i][1]>='0'&&tmp[i][1]<='9')))
        {
         regisiter* R=MIPS.find_reg(tmp[i]);
         string operand=R->fetch();
         find_and_write(index[i], operand);
        }
        else if(tmp[i][0]>='0'&&tmp[i][0]<='9'||tmp[i][0]=='-')
        {
            if(tmp[i].find('(')!=string::npos)
              {
                string offset;
                string rs;
                j=0;
                while(tmp[i][j]!='(')
                {
                     offset+=tmp[i][j];
                     j++;
                }
                while(tmp[i][j]!=')')
                {
                     if(tmp[i][j]!='(')
                     rs+=tmp[i][j];
                     j++;
                }
                  regisiter *R=MIPS.find_reg(rs);
                  string operand=R->fetch();
                  find_and_write("rs",operand);
                  find_and_write(index[i],dec_to_bin(offset,16));
              }
              else
                if(tmp[i][0]=='0'&&tmp[i][1]=='x')
                {
                    tmp[i].erase(0,1);
                    tmp[i].erase(0,1);
                    find_and_write(index[i],hex_to_bin(tmp[i],16));
                }
            else find_and_write(index[i],dec_to_bin(tmp[i],16));
        }
        else if(tmp[i][0]>='a'&&tmp[i][0]<='z'||tmp[i][0]>='A'&&tmp[i][0]<='Z'||tmp[i][0]=='_')
        {
              if(instruc_type=="J")
              find_and_write(index[i],MIPS.get_addre(tmp[i]));
              else if(instruc_type=="I")
              find_and_write(index[i],MIPS.get_addre(tmp[i],current_addr));
        }
       i++;
    }
    if(rs=="") rs="00000";
    MIPS.store_bin(op+rs+rt+rd+shamt+funct);
}

void instruction::load(string option)
{
     if(option=="type")
       cin>>instruc_type;
     else if(option=="op"){cin>>op;op=hex_to_bin(op,6);}
     else if(option=="funct"){cin>>funct;funct=hex_to_bin(funct,6);}
     else if(option=="rs"){cin>>rs;rs=hex_to_bin(rs,5);}
     else if(option=="rt"){cin>>rt;rt=hex_to_bin(rt,5);}
     else if(option=="rd"){cin>>rd;rd=hex_to_bin(rd,5);}
     else if(option=="shamt"){cin>>shamt;shamt=hex_to_bin(shamt,5);}
}

void instruction::find_and_write(string option, string bin_code)
{
     int i;
     if(option=="rs")
     rs=bin_code;
     else if(option=="rt")
     rt=bin_code;
     else if(option=="rd"||option=="fs")
     rd=bin_code;
     else if(option=="shamt")
     shamt=bin_code;
     else if(option=="imm"||option=="lable"||option=="address")
     {
         rd=shamt=funct="";
         for(i=0;i<5;i++)
             rd+=bin_code[i];
         for(i=5;i<10;i++)
             shamt+=bin_code[i];
         for(i=10;i<16;i++)
             funct+=bin_code[i];
     }
     else if(option=="target")
     {
         rs=rd=rt=shamt=funct="";
         for(i=0;i<5;i++)
             rs+=bin_code[i];
         for(i=5;i<10;i++)
             rt+=bin_code[i];
         for(i=10;i<15;i++)
             rd+=bin_code[i];
         for(i=15;i<20;i++)
             shamt+=bin_code[i];
         for(i=20;i<26;i++)
             funct+=bin_code[i];
     }
}

