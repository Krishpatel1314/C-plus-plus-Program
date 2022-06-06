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
    void add(time j, time k)
    {
        h=j.h+k.h;
        m=j.m+k.m;
        s=j.s+k.s;
        display();
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
    class time t1,t2,s;
    t1.getdata();
    t2.getdata();
    s.add(t1,t2);
    return 0;
}