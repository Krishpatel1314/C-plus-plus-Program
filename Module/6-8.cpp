#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Time
{
    int hrs,min;
    public:
    // constructor
    Time(int a,int b)
    {
        hrs=a;
        min=b;
    }
    operator int()
    {
        return(hrs*60+min);
    }
};
int main()
{
    int h,m,d;
    cout<<"Enter Hours ";
    cin>>h;
    cout<<"Enter Minutes ";
    cin>>m;
    Time t(h,m);       // construct object
    d = t;      // casting conversion OR duration = (int)t
    cout<<"Total Minutes are "<<d;
    return 0;
}