/*Create class string with the data member as char str[20],
Use constructors and destructors properly and write member functions for each of the following
l. To get the data
m. To display the data
n. To concatenate two string objects*/
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
