/*Create a class time12 that store hh:mm:ss in 12 hour format along with am or pm, create another class 
time24 that store time hh:mm:ss in 24 hour format. Write a Conversion function to convert from one class
object to another class object.*/
#include<iostream>
using namespace std;

class time24;
class time12
{
    int h,m,s;
    public:
    time12()
    {
        h=0;
        m=0;
        s=0;
    }
    friend class time24;
    void get()
    {
        cout<<"Enter Hours:";
        cin>>h;
        cout<<"Enter Minutes:";
        cin>>m;
        cout<<"Enter Seconds:";
        cin>>s;
    }
    void display()
    {
        cout<<h<<"hrs :"<<m<<"min :"<<s<<"sec ";
        if (h<=12)
        {
            cout<<"pm"<<endl;
        }
        else
        cout<<"am"<<endl;
    }
    ~time12()
    {
    }
};
class time24
{
    int h1,m1,s1;
    public:
    friend class time12;
    time24()
    {
        h1=0;
        m1=0;
        s1=0;
    }
    time24(time12 a)
    {
        h1=a.h+12;
        m1=a.m;
        s1=a.s;
    }
    void get()
    {
        cout<<"Enter Hours:";
        cin>>h1;
        cout<<"Enter Minutes:";
        cin>>m1;
        cout<<"Enter Seconds:";
        cin>>s1;
    }
    void conversion(time12 a)
    {
        if(h1<=12)
        {
            a.display(); 
        } 
        else
        {
            a.h=h1-12;
            a.display(); 
        }
    }
    void display()
    {
        cout<<h1<<"hrs :"<<m1<<"min :"<<s1<<"sec ";
        if (h1<=12)
        {
            cout<<"am"<<endl;
        }
        else
        cout<<"pm"<<endl;
    }
};
int main()
{
    time12 a;
    cout<<"Enter time in 12HRS format"<<endl;
    a.get();
    time24 b=a;
    b.display();
    cout<<"Enter time in 24HRS format"<<endl;
    b.get();
    b.conversion(a);
    return 0;
}

/*
OUTPUT:
Enter time in 12HRS format
Enter Hours:4
Enter Minutes:30
Enter Seconds:30
16hrs :30min :30sec pm
Enter time in 24HRS format
Enter Hours:16
Enter Minutes:30
Enter Seconds:30
4hrs :30min :30sec pm
*/