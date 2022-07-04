/*Create a class publication with title and price. Use necessary constructors, destructors and functions. 
Derive two classes books (member page_count), tape(member mins). Write necessary functions.*/

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
class book: public publication
{
    int p_count;
    public:
    void get1()
    {
        get();
        cout<<"Enter no. of pages:";
        cin>>p_count;
    }
    void display1()
    {
        display();
        cout<<"No. of pages:"<<p_count<<endl;
    }
};
class tape: public publication
{
    int mins;
    public:
    void get2()
    {
        get();
        cout<<"Enter no. of mins:";
        cin>>mins;
    }
    void display2()
    {
        display();
        cout<<"No. of mins:"<<mins<<endl;
    }
};
int main()
{
    book b1;
    tape t1;
    b1.get1();
    t1.get2();
    b1.display1();
    t1.display2();
    return 0;
}