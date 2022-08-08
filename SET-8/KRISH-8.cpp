/*Create classes as shown in figure. Write a program to create, update and display 
information using inheritance*/

#include<iostream>
using namespace std;
class rollno
{
    int r;
    public:
    void get()
    {
        cout<<"Enter roll no:";
        cin>>r;
    }
    void display()
    {
        cout<<"Roll no.:"<<r<<endl;
    }
};
class engineering:public rollno
{
    string uname;
    public:
    void get1()
    {
        get();
        cout<<"Enter University Name:";
        cin.ignore();
        getline(cin,uname);
    }
    void display1()
    {
        display();
        cout<<"University Name:"<<uname<<endl;
    }
};
class ce:public engineering
{
    int noc;
    public:
    void get2()
    {
        get1();
        cout<<"Enter no. of courses in CE:";
        cin>>noc;
    }
    void display2()
    {
        display1();
        cout<<"No. of courses in CE:"<<noc<<endl;
    }
};
class it:public engineering
{
    int noc;
    public:
    void get3()
    {
        get1();
        cout<<"Enter no. of courses in IT:";
        cin>>noc;
    }
    void display3()
    {
        display1();
        cout<<"No. of courses in IT:"<<noc<<endl;
    }
};
int main()
{
    ce c;
    it i;
    c.get2();
    i.get3();
    cout<<"===================================="<<endl;
    c.display2();
    cout<<"===================================="<<endl;
    i.display3();
}

/*
OUTPUT:
Enter roll no:1
Enter University Name:KPGU
Enter no. of courses in CE:5
Enter roll no:1
Enter University Name:KPGU
Enter no. of courses in IT:7
====================================
Roll no.:1
University Name:KPGU
No. of courses in CE:5
====================================
Roll no.:1
University Name:KPGU
No. of courses in IT:7
*/