/*Modify above program with two base classes. One as publication and create another sales 
(member totalsales). Now, Derive two classes books (member page_count), tape(member mins) 
from publication and sales. Use necessary constructors, destructors and functions.*/

#include<iostream>
using namespace std;

class publication
{
    string title;
    int price;
    public:
    publication()
    {
        title="";
        price=0;
    }
    void get()
    {
        cout<<"Enter the name of book:";
        cin.ignore();
        getline(cin,title);
        cout<<"Enter the price of book:";
        cin>>price;
    }
    void display()
    {
        cout<<"Name of book:"<<title<<endl;
        cout<<"Price of book:"<<price<<endl;
    }
    ~publication()
    {
    }
};
class sales
{
    int totalsales;
    public:
    void get1()
    {
        cout<<"Enter no. of sales:";
        cin>>totalsales;
    }
    void display1()
    {
        cout<<"No. of Sales:"<<totalsales<<endl;
    }
};
class book: public publication, public sales
{
    int p_count;
    public:
    void get2()
    {
        get();
        get1();
        cout<<"Enter no. of pages:";
        cin>>p_count;
    }
    void display2()
    {
        display();
        display1();
        cout<<"No. of pages:"<<p_count<<endl;
    }
};
class tape: public publication,public sales
{
    int mins;
    public:
    void get3()
    {
        get();
        get1();
        cout<<"Enter no. of mins:";
        cin>>mins;
    }
    void display3()
    {
        display();
        display1();
        cout<<"No. of mins:"<<mins<<endl;
    }
};
int main()
{
    book b1;
    tape t1;
    b1.get2();
    t1.get3();
    b1.display2();
    t1.display3();
    return 0;
}