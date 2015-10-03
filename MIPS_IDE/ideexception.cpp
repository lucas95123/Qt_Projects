#include "ideexception.h"

IdeException::IdeException(const string &text)
{
   exceptionLog=text;
}

IdeException::~IdeException()
{

}

string IdeException::diagnose()
{
    return exceptionLog;
}

FileNotSelected::FileNotSelected(const string &text):IdeException(text)
{

}

InsNameIncorrect::InsNameIncorrect(const string &text):IdeException(text)
{

}
