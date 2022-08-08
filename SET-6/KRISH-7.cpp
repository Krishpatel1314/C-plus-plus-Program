/*Write a program to compare two time class objects by overloading <, >, ==,!= operators.*/
#include<iostream>
using namespace std;

class time
{
    int h,m,s,sec;

    public:
    time()
    {
        h=0;
        m=0;
        s=0;
        sec=0;
    }
    void getdata()
    {
        cout<<"Enter time in seconds:";
        cin>>sec;
        conversion();
    }
    
    void conversion()
    {
        h=(sec/3600);
        m=(sec-(3600*h))/60;
        s=(sec-(3600*h)-(m*60));
    }
    void display()
    {
        cout<<"Converted Time:"<<h<<" hrs :"<<m<<" min :"<<s<<" sec"<<endl;
    }
    void operator <(time j)
    {
        if (sec<j.sec)
        cout<<"Time one is Smaller"<<endl;
    }
    void operator >(time j)
    {
        if (sec>j.sec)
        cout<<"Time one is Greater"<<endl;
    }
    void operator ==(time j)
    {
        if (h==j.h && m==j.m && s==j.s)
        cout<<"Both times are equal"<<endl;    
    }
    void operator !=(time j)
    {
        if (h!=j.h || m!=j.m || s!=j.s)
        cout<<"Both times are unequal"<<endl;    
    }
    ~time()
    {
        h=0;
        m=0;
        s=0;
        sec=0;
    }
};
int main()
{
    class time t1,t2;
    t1.getdata();
    t2.getdata();
    t1.display();
    t2.display();
    t1<t2;
    t1>t2;
    t1==t2;
    t1!=t2;
    return 0;
}

/*
OUTPUT:
Enter time in seconds:7823
Enter time in seconds:6732
Converted Time:2 hrs :10 min :23 sec
Converted Time:1 hrs :52 min :12 sec
Time one is Greater
Both times are unequal
*/