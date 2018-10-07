#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <bits/stdc++.h>
using namespace std;

class String
{
    protected:
        enum{SZ=5};
        char str[SZ];
    public:
        String()
        {
            str[0]='\0';
        }

        String(char s[])
        {
            strcpy(str,s);
        }

        void display() const
        {
            cout << str << endl;
        }
};
class Pstring : public String
{
    public:
            Pstring():String(){}
            Pstring(char s[]);
};
class Pstring2 : public Pstring
{
    public:
        Pstring2():Pstring(){}
        Pstring2(char s[]):Pstring(s){}
        Pstring2& left(char s[] , int n);
        Pstring2& right(char s[] , int n);
        Pstring2& mid(char s[] , int start , int n);

};
#endif // STRING_H_INCLUDED
