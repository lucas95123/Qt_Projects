#ifndef IDEEXCEPTION_H
#define IDEEXCEPTION_H
#include <string>
using namespace std;

class IdeException
{
public:
     IdeException(const string &text);
    ~IdeException();
    virtual string diagnose();
private:
    string exceptionLog;
};

class FileNotSelected:public IdeException
{
public:
    FileNotSelected(const string &text);
};

class InsNameIncorrect:public IdeException
{
public:
    InsNameIncorrect(const string &text);
};

#endif // IDEEXCEPTION_H
