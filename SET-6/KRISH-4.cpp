/*Create class string with following data member
char str[20], for performing various comparison operations, overload >, <, ==, != 
operators for two string objects.*/
#include<iostream>
#include<string.h>
using namespace std;

class String
{
	string str;
	public:
	String()
	{
		str="";
	}
	void get()
	{
		cout<<"Enter a string:";
		getline(cin,str);
	}
	void display()
	{
		cout<<"The String is:";
		cout<<str;
	}
	void operator >(String j)
	{
        if (str>j.str)
        {
            cout<<"String one is Greater"<<endl;
        }
	}
    void operator <(String j)
	{
        if (str<j.str)
        {
            cout<<"String one is Smaller"<<endl;
        }
	}
    void operator ==(String j)
	{
        if (str==j.str)
        {
            cout<<"Both the strings are equal"<<endl;
        }
	}
    void operator !=(String j)
	{
        if (str!=j.str)
        {
            cout<<"Both the strings are unequal"<<endl;
        }
	}
	~String()
	{
		str="";
	}
};

int main()
{
	String s1,s2,s;
	s1.get();
	s2.get();
	s1>s2;
    s1<s2;
    s1==s2;
    s1!=s2;
	return 0;
}

/*
OUTPUT:
Enter a string:Hello
Enter a string:C++  
String one is Greater
Both the strings are unequal
*/