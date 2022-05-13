#include<iostream>
using namespace std;

class time
{
    int h,m,s,sec;

    public:
    
    void getdata()
    {
        cout<<"Enter time in seconds:";
        cin>>sec;
    }
    
    void conversion()
    {
        h=(sec/3600);
        m=(sec-(3600*h))/60;
        s=(sec-(3600*h)-(m*60));
    }

    void displaydata()
    {
        cout<<"Converted Time:"<<h<<" hrs :"<<m<<" min :"<<s<<" sec"<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter no. of data you wish to enter:";
    cin>>n;
    class time t[n];
    for (int i = 0; i < n; i++)
    {
        t[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        t[i].conversion();
        t[i].displaydata();
    }
}
