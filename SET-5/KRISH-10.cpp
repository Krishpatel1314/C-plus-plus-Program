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
	void add(String j,String k)
	{
		str=j.str+" "+k.str;
        display();
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
	s.add(s1,s2);
	return 0;
}
