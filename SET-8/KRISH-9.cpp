/*What is containership? Rewrite above program using containership.*/
/*We can create an object of one class into another and that object will be a member of the class.
 This type of relationship between classes is known as containership. And the class which contains 
 the object and members of another class in this kind of relationship is called a container class.*/

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
    engineering e;
    public:
    ce()
    {
        e.get1();
        get2();
        cout<<"===================================="<<endl;
        e.display1();
        display2();
    }
    void get2()
    {
        cout<<"Enter no. of courses in CE:";
        cin>>noc;
    }
    void display2()
    {
        cout<<"No. of courses in CE:"<<noc<<endl;
    }
};
class it:public engineering
{
    int noc;
    engineering e;
    public:
    it()
    {
        e.get1();
        get3();
        cout<<"===================================="<<endl;
        e.display1();
        display3();
    }
    void get3()
    {
        cout<<"Enter no. of courses in IT:";
        cin>>noc;
    }
    void display3()
    {
        cout<<"No. of courses in IT:"<<noc<<endl;
    }
};
int main()
{
    ce c;
    cout<<"===================================="<<endl;
    it i;
    return 0;
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