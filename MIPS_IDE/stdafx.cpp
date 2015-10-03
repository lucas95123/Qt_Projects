#include"stdafx.h"

QString s2q(const string &s)
{
return QString(QString::fromLocal8Bit(s.c_str()));
}
string q2s(const QString &s)
{
return string((const char *)s.toLocal8Bit());
}

string bin_to_hex(string str)
{
   int i;
   int tmp_result;
   stringstream ss;
   string result;
   for(i=0;i<8;i++)
   {
      tmp_result=8*(str[4*i]-'0')+4*(str[4*i+1]-'0')+2*(str[4*i+2]-'0')+(str[4*i+3]-'0');
      ss<<hex<<tmp_result;
   }
   ss>>result;
   return result;
}

string hex_to_bin(string str, int bits)
{
     int i=0;
     long tmp=0;
     string result;
     for(i=1;i<=bits;i++)
     result="0"+result;
     i=0;
     while(str[i])
     {
        if(str[i]>='a'&&str[i]<='f')
         tmp=tmp*16+str[i]-'a'+10;
        else
         tmp=tmp*16+str[i]-'0';
         i++;
     }
     i=bits-1;
     do
     {
         result[i]= tmp%2+'0';
         tmp/=2;
         i--;
     }while(tmp!=0);
     return result;
}

string hex_to_bin(string str)
{
    string result;
    int i;
    for(i=0;i<8;i++)
    {
        switch (str[i]) {
        case 'a': result+="1010";break;
        case 'b': result+="1011";break;
        case 'c': result+="1100";break;
        case 'd': result+="1101";break;
        case 'e': result+="1110";break;
        case 'f': result+="1111";break;
        case '0': result+="0000";break;
        case '1': result+="0001";break;
        case '2': result+="0010";break;
        case '3': result+="0011";break;
        case '4': result+="0100";break;
        case '5': result+="0101";break;
        case '6': result+="0110";break;
        case '7': result+="0111";break;
        case '8': result+="1000";break;
        case '9': result+="1001";break;
        }
    }
    return result;
}

string dec_to_bin(string str, int bits)
{
     long tmp=0;
     string result;
     stringstream ss;
     ss<<str;
     ss>>tmp;
     int i;
     for(i = bits-1; i >= 0; i--)
    {
        if(tmp & (1 << i))
            result+="1";
        else
            result+="0";
    }
     return result;
}

long bin_to_dec(string str)
{
   long lng=0;
   int cont;
   for(cont=0;str[cont]!=0;cont++);
   int i;
   cont-=1;
   if(str[0]=='1')
   {
     for(i=0;i<cont;i++)
        if(str[cont-i]=='0')
          lng+=pow(2,i);
     lng+=1;
     lng=-lng;
   }
   else
   for(i=0;i<cont;i++)
       if(str[cont-i]=='1')
        lng+=pow(2,i);
   return lng;
}

long string_to_long(string str)
{
    long number;
    stringstream ss;
    ss << str;
    ss >> number;
    return number;
}

string long_to_string(long lng)
{
    string result;
    stringstream ss;
    ss<<lng;
    ss>>result;
    return result;
}

long hex_to_dec(string str)
{
     int i;
     long result=0;
     for(i=7;i>=0;i--)
     {
         if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
         {
             result=result+(str[i]-'a'+10)*pow(16,7-i);
         }
         else
             result=result+(str[i]-'0')*pow(16,7-i);
     }
     return result;
}

string  getstring(ifstream &in)
{
    string tmp;
    string str;
    getline(in,tmp);
    while(tmp!=""&&(tmp[0]!='/'&&tmp[0]!='#'))
    {
         str+=tmp[0];
        tmp.erase(0,1);
    }
    int i;
    int flag=0;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]!=' ')
        {
            flag=1;
            break;
        }
    }
    if(flag)
    return str;
    else
    return "";
}

string erasezero(string str)
{
    string tmp;
    while(str!="")
    {
        if(str[0]!=' '&&str[0]!=';'&&str[0]!='\t')
            tmp+=str[0];
        str.erase(0,1);
    }
    return tmp;
}
