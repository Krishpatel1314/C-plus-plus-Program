/*Write a program using file handling to demonstrate the concepts of get() and put() functions*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string a,b,c;
    char d[20];
    ofstream file;
    cout<<"Enter file name to write:";
    getline(cin,a);
    cout<<"Enter the data you want to enter:";
    file.open(a,fstream::out);                  
    if(!file)                                 
    {
        cout<<"File not found!!"<<endl;
    }
    while(file) 
    {
		getline(cin,c);
		if(c=="-1")
			break;
		file<<c<<endl;
	}                               
    file.close();
    ifstream file1;
    cout<<"Enter file name want to read:";
    getline(cin,b);
    file1.open(b,fstream::in);
    if(!file1)
    {
        cout<<"File not found!!"<<endl;
    }
    while(file1>>d)
    puts(d);
    file1.close();
    return 0;
}