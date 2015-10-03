#ifndef _STDAFX_H_
#define _STDAFX_H_
#include<string>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>
#include<vector>
#include<map>
#include<sstream>
#include<fstream>
#include<QMessageBox>
#include<QString>
using namespace std;

QString s2q(const string &s);
string q2s(const QString &s);
string hex_to_bin(string str, int bits);
string dec_to_bin(string str, int bits);
long bin_to_dec(string str);
long string_to_long(string str);
string long_to_string(long lng);
long hex_to_dec(string str);
string getstring(ifstream &in);
string erasezero(string str);
string bin_to_hex(string str);
string hex_to_bin(string str);

#endif // _STDAFX_H_
