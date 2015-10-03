#include "myhighlighter.h"

MyHighLighter::MyHighLighter(QTextDocument *parent):QSyntaxHighlighter(parent)
{

}

MyHighLighter::~MyHighLighter()
{

}

void MyHighLighter::highlightBlock(const QString &text)
{
        QTextCharFormat opFormat;
        opFormat.setFontWeight(QFont::Bold);
        opFormat.setForeground(Qt::red);
        QString opPattern = "\\badd\\b|\\bsub\\b|\\band\\b|\\bor\\b|\\bxor\\b|\\bnor\\b|\\bslt\\b|\\bsrl\\b|\\bjr\\b|\\bjalr\\b|\\beret\\b|";
        opPattern+="\\baddi\\b|\\bandi\\b|\\bori\\b|\\bxori\\b|\\blui\\b|\\blw\\b|\\bsw\\b|\\bbeq\\b|\\bbne\\b|\\bslti\\b|";
        opPattern+="\\bj\\b|\\bjal\\b";

        QRegExp opExpression(opPattern);
        int index = text.indexOf(opExpression);
        while (index >= 0) {
            int length = opExpression.matchedLength();
            setFormat(index, length, opFormat);
            index = text.indexOf(opExpression, index + length);
        }

        QTextCharFormat regFormat;
        regFormat.setFontWeight(QFont::Bold);
        regFormat.setForeground(Qt::darkCyan);
        QString regpattern = "\\br[0-9]\\b|\\br[1-2][0-9]\\b|\\br3[0-1]\\b|\\$zero|\\$at|\\$v[0-1]|\\$a[0-3]|\\$t[0-9]|\\$s[0-7]|";
        regpattern+="\\$k[0-1]|\\$gp|\\$sp|\\$fp|\\$ra";

        QRegExp regexpression(regpattern);
        index = text.indexOf(regexpression);
        while (index >= 0) {
            int length = regexpression.matchedLength();
            setFormat(index, length, regFormat);
            index = text.indexOf(regexpression, index + length);
        }

        QTextCharFormat constFormat;
        constFormat.setFontWeight(QFont::Bold);
        constFormat.setForeground(Qt::darkMagenta);
        QString constpattern = "\\b[0-9]{1,32}\\b|\\b0x[A-F0-9a-f]{1,8}\\b|\\b0X[A-F0-9a-f]{1,8}\\b";

        QRegExp constexpression(constpattern);
        index = text.indexOf(constexpression);
        while (index >= 0) {
            int length = constexpression.matchedLength();
            setFormat(index, length, constFormat);
            index = text.indexOf(constexpression, index + length);
        }

        QTextCharFormat otherFormat;
        otherFormat.setFontWeight(QFont::Bold);
        otherFormat.setForeground(Qt::blue);
        QString otherpattern = "\\bend\\b|\\bBaseAddre\\b|\\bDataAddre\\b";

        QRegExp otherexpression(otherpattern);
        index = text.indexOf(otherexpression);
        while (index >= 0) {
            int length = otherexpression.matchedLength();
            setFormat(index, length, otherFormat);
            index = text.indexOf(otherexpression, index + length);
        }

        QTextCharFormat multiLineCommentFormat;
        multiLineCommentFormat.setForeground(Qt::blue);
        QRegExp startExpression("/\\*");
        QRegExp endExpression("\\*/");
        setCurrentBlockState(0);
        int startIndex = 0;
        if (previousBlockState() != 1)
            startIndex = text.indexOf(startExpression);

        while (startIndex >= 0) {
           int endIndex = text.indexOf(endExpression, startIndex);
           int commentLength;
           if (endIndex == -1) {
               setCurrentBlockState(1);
               commentLength = text.length() - startIndex;
           } else {
               commentLength = endIndex - startIndex
                               + endExpression.matchedLength();
           }
           setFormat(startIndex, commentLength, multiLineCommentFormat);
           startIndex = text.indexOf(startExpression,
                                     startIndex + commentLength);
        }
}

