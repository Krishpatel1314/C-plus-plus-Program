#include<iostream>
#include<string.h>
using namespace std;

class String
{
	char str[20];
	public:
	String()
	{
		str[0]='\0';
	}
	void get()
	{
		cout<<"Enter a string:";
		gets(str);
	}
	void display()
	{
		cout<<"The String is:";
		puts(str);
	}
	void add(String j,String k)
	{
		strcat(j.str," ");
		strcat(str,strcat(j.str,k.str));
        display();
	}
	~String()
	{
		str[0]='\0';
	}
};

int main()
{
	String s1,s2,s;
	s1.get();
	s2.get();
	s.add(s1,s2);
	return 0;
}
