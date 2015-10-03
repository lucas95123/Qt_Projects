#include "instruct_set.h"
#define DEBUG QMessageBox::information(0,"       DEbug        ","debug",QMessageBox::Cancel);

instruct_set::instruct_set()
{
    if(freopen("MIPS_instruction.txt","r",stdin)==NULL)
    QMessageBox::information(0,"ERROR","cannot initialize MIPS instrution set",QMessageBox::Ok);
    string name;
    string reg;
    cin>>name;
    instruction* I;
    while(name!="end")
    {
        I= new instruction;
        MIPS_instruct[name]=I;
        cin>>name;
    }
    cin>>name;
    regisiter* R;
    while(name!="end")
    {
        R=new regisiter;
        MIPS_regisiter[name]=R;
        cin>>name;
    }
    cin>>name;
    cin>>reg;
    while(name!="end")
    {
        regfile[dec_to_bin(name,5)]=reg;
        cin>>name;
        cin>>reg;
    }
}

void instruct_set::build_asm(MainWindow* MW)throw(InsNameIncorrect)
{
       string instr;
       string filename=q2s(MW->Current_file);
       const char* ch = filename.c_str();
       ifstream cin(ch);
       BaseAddre="00000000";
       while(instr!="end")
       {
          instr=getstring(cin);
          if(instr.find(":")!=string::npos)
           {
              string tmp1;
              int i;
              for(i=0;instr[i]!=':';i++)
                 tmp1+=instr[i];
              instr.erase(0,i+1);
              if(tmp1=="BaseAddre")
              {instr=erasezero(instr); instr.erase(0,1); instr.erase(0,1); BaseAddre=instr; instr="";}
              else lable_index[tmp1]=code_space.size();
           }
           while(instr[0]==' ')
              instr.erase(0,1);
           if(instr=="")
           continue;
           if(instr!="end")
           code_space.push_back(instr);

       }
       long i;
       for(i=0;i<code_space.size();i++)
       {
            string name;
            while(code_space[i][0]!=' ')
            {
               name+=code_space[i][0];
               code_space[i].erase(0,1);
            }
            while(code_space[i][0]==' ')
              code_space[i].erase(0,1);
            try
            {
             find_ins(name)->i_complete(erasezero(code_space[i]),i);
            }
            catch(InsNameIncorrect& e)
            {
               throw e;
            }
       }
}

void instruct_set::build_bin(MainWindow *MW)
{
    string code;
    string filename=q2s(MW->Current_file);
    int i=0;
    int j=0;
    int flag=0;
    while(filename[i]!=0)
    {
        if(filename[i]=='.')
            if(filename[i+1]=='c')
            {
                flag=1;
                break;
            }
        i++;
    }
    const char* ch = filename.c_str();
    ifstream cin(ch);
    long counter=0;
    if(flag)
    {
      string tmp;
      getline(cin,tmp);
      getline(cin,tmp);
      while(tmp!="")
      {
          tmp.clear();
          cin>>tmp;
          for(i=0;tmp[i]!=0;i++)
          {
              if(tmp[i]==','||tmp[i]==' '||tmp[i]==';')
              {
                  continue;
              }
              else
                code+=tmp[i];
              if(j==7)
              {
                bin_2_instruct(hex_to_bin(code),counter);
                counter++;
                j=0;
                code.clear();
              }
              else
              j++;
          }

      }
    }
    else
    {
      code=getstring(cin);
       while(code[0]==' ')
         code.erase(0,1);
       while(code!="")
        {
         bin_2_instruct(code,counter);
         counter++;
         code=getstring(cin);
        }

    }
}

string instruct_set::get_addre(string lable)
{
     long offset;
     offset=find_lable(lable);
     long base;
     base=hex_to_dec(BaseAddre);
     stringstream ss;
     string tmp;
     ss<<offset+base;
     ss>>tmp;
     return dec_to_bin(tmp,26);

}

string instruct_set::get_addre(string lable,long current_addr)
{
    long offset;
    offset=(find_lable(lable)-current_addr-1);
    stringstream ss;
    string tmp;
    ss<<offset;
    ss>>tmp;
    return dec_to_bin(tmp,16);
}

void instruct_set::generate_bin(QString &filename,MainWindow *MW)
{
    string str=q2s(filename);
    const char* ch = str.c_str();
    ofstream fout ;

    fout.open(ch,ios_base::out|ios_base::binary) ;
    if (!fout.is_open())
    {
        cerr << "open file " << ch << " wrong!" << endl ;
        exit(EXIT_FAILURE) ;
    }
    else
    {
        vector<string>::iterator p;
        string str;
        MW->textEdit_3->clear();
        for(p=bin_space.begin();p!=bin_space.end();p++)
        {
            fout<<*p<<endl;
            MW->textEdit_3->append(s2q(*p));
        }
    }
    fout.close();
}

void instruct_set::generate_coe(QString &filename,MainWindow *MW)
{
    string str=q2s(filename);
    const char* ch = str.c_str();
    ofstream fout ;

    fout.open(ch,ios_base::out|ios_base::binary) ;
    if (!fout.is_open())
    {
        cerr << "open file " << ch << " wrong!" << endl ;
        exit(EXIT_FAILURE) ;
    }
    else
    {
        vector<string>::iterator p;
        string str;
        int i;
        MW->textEdit_3->clear();
        fout<<"memory_initialization_radix=16;"<<endl;
        MW->textEdit_3->append("memory_initialization_radix=16;");
        fout<<"memory_initialization_vector="<<endl;
        MW->textEdit_3->append("memory_initialization_vector=");
        for(p=bin_space.begin(),i=0;p!=bin_space.end();p++,i++)
        {
            string str;
            str=*p;
            string tmp=bin_to_hex(str);
            if(i!=bin_space.size()-1)
            {
             fout<<tmp<<",";
             MW->textEdit_3->append(s2q(tmp+","));
            }
            else
            {
             fout<<tmp<<";";
             MW->textEdit_3->append(s2q(tmp+";"));
            }
            if(i%8==0&&i)
            fout<<endl;

        }
    }
    fout.close();
}

void instruct_set::generate_asm(QString &filename,MainWindow * MW)
{
    string str=q2s(filename);
    const char* ch = str.c_str();
    ofstream fout ;

    fout.open(ch,ios_base::out|ios_base::binary) ;
    if (!fout.is_open())
    {
        cerr << "open file " << ch << " wrong!" << endl ;
        exit(EXIT_FAILURE) ;
    }
    else
    {
        vector<string>::iterator p;
        string str;
        MW->textEdit_3->clear();
        for(p=code_space.begin();p!=code_space.end();p++)
        {
            fout<<*p<<endl;
            MW->textEdit_3->append(s2q(*p));

        }
        fout<<"end"<<endl;
    }
    fout.close();
}

void instruct_set::clear()
{
    code_space.clear();
    bin_space.clear();
    lable_index.clear();
    BaseAddre="";
    return;
}

void instruct_set::bin_2_instruct(string code,long counter)
{
    string op;
    string rs;
    string rt;
    string rd;
    string shamt;
    string funct;
    string result;
    int i;
    for(i=0;i<6;i++)
      op+=code[i];
    for(i=6;i<11;i++)
      rs+=code[i];
    for(i=11;i<16;i++)
      rt+=code[i];
    for(i=16;i<21;i++)
      rd+=code[i];
    for(i=21;i<26;i++)
      shamt+=code[i];
    for(i=26;i<32;i++)
      funct+=code[i];

    stringstream ss;
    string temp;
    ss<<dec<<counter*4;
    ss>>temp;
    result+="L"+temp+": ";
    if(op=="000000")
    {
      if(funct=="100000")
      {
        result+="add "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="100001")
      {
        result+="addu "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="100010")
      {
        result+="sub "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="100011")
      {
        result+="subu "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="101010")
      {
        result+="slt "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="101011")
      {
        result+="sltu "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="100100")
      {
        result+="and "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="100101")
      {
        result+="or "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="100110")
      {
        result+="xor "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="100111")
      {
        result+="nor "+regfile[rd]+", "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="000000")
      {
        result+="sll "+regfile[rd]+", "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+";";
      }
      else if(funct=="000010")
      {
        result+="srl "+regfile[rd]+", "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+";";
      }
      else if(funct=="000011")
      {
        result+="sra "+regfile[rd]+", "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+";";
      }
      else if(funct=="011000")
      {
        result+="mult "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="011001")
      {
        result+="multu "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="011010")
      {
        result+="div "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="011011")
      {
        result+="divu "+regfile[rs]+", "+regfile[rt]+";";
      }
      else if(funct=="001000")
      {
        result+="jr "+regfile[rs]+";";
      }
      else if(funct=="001001")
      {
        result+="jalr "+regfile[rs]+regfile[rd]+";";
      }
      else if(funct=="010000")
      {
        result+="mfhi "+regfile[rd]+";";
      }
      else if(funct=="010001")
      {
        result+="mthi "+regfile[rd]+";";
      }
      else if(funct=="010010")
      {
        result+="mflo "+regfile[rs]+";";
      }
      else if(funct=="010011")
      {
        result+="mtlo "+regfile[rs]+";";
      }
      else if(funct=="001101")
      {
        result+="break;";
      }
      else if(funct=="001100")
      {
        result+="syscall;";
      }
    }
    else if(op=="100011")
    {
      result+="lw "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+"("+regfile[rs]+")"+";";
    }
    else if(op=="100000")
    {
      result+="lb "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+"("+regfile[rs]+")"+";";
    }
    else if(op=="100100")
    {
      result+="lbu "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+"("+regfile[rs]+")"+";";
    }
    else if(op=="100001")
    {
      result+="lh "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+"("+regfile[rs]+")"+";";
    }
    else if(op=="100101")
    {
      result+="lhu "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+"("+regfile[rs]+")"+";";
    }
    else if(op=="101011")
    {
      result+="sw "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+"("+regfile[rs]+")"+";";
    }
    else if(op=="101000")
    {
      result+="sb "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+"("+regfile[rs]+")"+";";
    }
    else if(op=="101001")
    {
      result+="sh "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct))+"("+regfile[rs]+")"+";";
    }
    else if(op=="001000")
    {
      result+="addi "+regfile[rt]+", "+regfile[rs]+", "+long_to_string(bin_to_dec(rd+shamt+funct));
    }
    else if(op=="001001")
    {
      result+="addiu "+regfile[rt]+", "+regfile[rs]+", "+long_to_string(bin_to_dec(rd+shamt+funct));
    }
    else if(op=="001100")
    {
      result+="andi "+regfile[rt]+", "+regfile[rs]+", "+long_to_string(bin_to_dec(rd+shamt+funct));
    }
    else if(op=="001101")
    {
      result+="ori "+regfile[rt]+", "+regfile[rs]+", "+long_to_string(bin_to_dec(rd+shamt+funct));
    }
    else if(op=="001110")
    {
      result+="xori "+regfile[rt]+", "+regfile[rs]+", "+long_to_string(bin_to_dec(rd+shamt+funct));
    }
    else if(op=="001111")
    {
      result+="lui "+regfile[rt]+", "+long_to_string(bin_to_dec(rd+shamt+funct));
    }
    else if(op=="001010")
    {
      result+="slti "+regfile[rt]+", "+regfile[rs]+", "+long_to_string(bin_to_dec(rd+shamt+funct));
    }
    else if(op=="001011")
    {
      result+="sltiu "+regfile[rt]+", "+regfile[rs]+", "+long_to_string(bin_to_dec(rd+shamt+funct));
    }
    else if(op=="000100")
    {
      result+="beq "+regfile[rs]+", "+regfile[rt]+", "+"L"+long_to_string((bin_to_dec(rd+shamt+funct)+counter+1)*4);
    }
    else if(op=="000101")
    {
      result+="bne "+regfile[rs]+", "+regfile[rt]+", "+"L"+long_to_string((bin_to_dec(rd+shamt+funct)+counter+1)*4);
    }
    else if(op=="000110")
    {
      result+="blez "+regfile[rs]+", "+"L"+long_to_string((bin_to_dec(rd+shamt+funct)+counter+1)*4);
    }
    else if(op=="000111")
    {
      result+="bgtz "+regfile[rs]+", "+"L"+long_to_string((bin_to_dec(rd+shamt+funct)+counter+1)*4);
    }
    else if(op=="000001")
    {
      if(rt=="00001")
      result+="bgez "+regfile[rs]+", "+"L"+long_to_string((bin_to_dec(rd+shamt+funct)+counter+1)*4);
      else if(rt=="00000")
      result+="bltz "+regfile[rs]+", "+"L"+long_to_string((bin_to_dec(rd+shamt+funct)+counter+1)*4);
    }
    else if(op=="000010")
    {
      result+="j L"+long_to_string(bin_to_dec(rs+rt+rd+shamt+funct)*4);
    }
    else if(op=="000011")
    {
      result+="jal L"+long_to_string(bin_to_dec(rs+rt+rd+shamt+funct)*4);
    }
    else if(op=="010000")
    {
      if(funct=="011000")
          result+="eret;";
      else if(rs=="00000")
          result+="mfc0 "+regfile[rt]+","+regfile[rd]+";";
      else if(rs=="00100")
          result+="mtc0 "+regfile[rd]+","+regfile[rt]+";";
    }
    code_space.push_back(result);
}

void instruct_set::store_bin(string bin_code){bin_space.push_back(bin_code);}
instruction* instruct_set::find_ins(string target)throw(InsNameIncorrect)
{
    if(MIPS_instruct.find(target)!=MIPS_instruct.end())
      return MIPS_instruct[target];
    else
    {
      InsNameIncorrect e(target);

      throw e;
    }
}
regisiter* instruct_set::find_reg(string target) { return MIPS_regisiter[target]; }
long instruct_set::find_lable(string target) {return lable_index[target]; }
