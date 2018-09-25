
#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <bits/stdc++.h>
using namespace std;

class String{
         char *value;
         int length;
     public:
         String ();
         String (const char *s) ;
         String (const String &s);
         ~String();
         friend String operator + (const String &s, const String &t);
         friend int operator >= (const String &s, const String &t);
         friend int operator== (const String &s, const String &t);
         friend int operator != (const String &s, const String &t);
         char operator [ ] (int value); //(Unary)
         friend void display(const String &s);
         String operator = (const String &str);
};



#endif // STRING_H_INCLUDED
