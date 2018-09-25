#include "String.h"


String String :: operator = (const String &str){
    length=str.length;
    value=new char[length+1];
    strcpy(value,str.value);
    return *this;
}

String :: String(){

    length=0;
    value=NULL;
}

String :: String(const char *str){

    length = strlen(str);
    value = new char[length+1];
    strcpy(value, str);
}

String :: String(const String &str){

    length=str.length;
    value=new char[length+1];
    strcpy(value,str.value);
}

String ::~String(){
    delete [] value;
}

int operator >=(const String &s,const String &t)
{
	int result=strcmp(s.value,t.value);
	return result;
}
String operator+(const String &s,const String &t)
{
	String temp;
	temp.length=s.length+t.length;
	temp.value=new char[temp.length+2];
	strcpy(temp.value,s.value);
	strcat(temp.value,t.value);
	return temp;

}
int operator ==(const String &s,const String &t)
{
	int result=strcmp(s.value,t.value);
	return !result;
}
int operator !=(const String &s,const String &t)
{
	int result=strcmp(s.value,t.value);
	return result;
}
char String :: operator[](int val)
{
	if(val>=length || val < 0)
	{
		cout<<"not a valid index:"<<endl;
        return 0;
	}
    return value[val];
}
void display(const String &s)
{
	cout<<"string="<<s.value<<" "<<"length="<<s.length<<endl;
}
