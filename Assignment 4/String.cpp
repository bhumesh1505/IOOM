#include "String.h"

Pstring2& Pstring2 :: left(char s[] , int n)
{
    if( n >= (int)SZ || n > (int)strlen(s) )
    {
        cout << "error" << endl;
        str[0] = '\0';
    }
    else
    {
        strncpy(str,s,min(n,(int)SZ));
        str[min(n+1,(int)SZ) - 1] = '\0';
    }
    return *this;
}

Pstring2& Pstring2 :: right(char s[] , int n)
{
    if( n >= (int)SZ || n > (int)strlen(s) )
    {
        cout << "error" << endl;
        str[0] = '\0';
    }
    else
    {
        int l = strlen(s);
        int j = 0;
        for(int i = max( l - n , 0) ; i < l ; i++)
        {
            str[j] = s[i];
            j++;
            if( j > SZ - 2)
            {
                break;
            }
        }
        str[j] = '\0';
    }
    return *this;
}

Pstring2& Pstring2 :: mid(char s[] , int start , int n)
{
    if( n >= (int)SZ || n > (int)strlen(s) )
    {
        cout << "error" << endl;
        str[0] = '\0';
    }
    else
    {
        int j = 0;
        for(int i = start ; i < start + n ; i++)
        {
            str[j] = s[i];
            j++;
            if( j > SZ - 2)
            {
                break;
            }
        }
        str[j] = '\0';
    }
    return *this;
}

Pstring :: Pstring(char s[])
{
        strncpy(str,s,SZ);
        str[SZ-1] = '\0';
}

