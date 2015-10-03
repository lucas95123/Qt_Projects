#ifndef MYHIGHLIGHTER_H
#define MYHIGHLIGHTER_H
#include <QSyntaxHighlighter>
#include <QTextDocument>

class MyHighLighter:public QSyntaxHighlighter
{
public:
    MyHighLighter(QTextDocument * parent);
    ~MyHighLighter();
    void highlightBlock(const QString &text);
};

#endif // MYHIGHLIGHTER_H
