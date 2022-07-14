#include <iostream>
using namespace std;
#include <conio.h>
class Time
{
    int h,m,s;
    public:
    Time()
    {
        h=0; m=0; s=0;
    }
    Time(int x,int y, int z)
    {
        h=x; m=y; s=z;
    }
    void setTime()
    {
        cout << "Enter the hour:";
        cin >> h;
        cout << "Enter the minute:";
        cin >> m;
        cout << "Enter the second:";
        cin >> s;
    }
    void show()
    {
        cout<< h<< ":"<< m<< ":"<< s;
    }
    
    //overloading '+' operator
    Time operator+(Time x)  
    {
        Time t;
        int a,b;
        a = s+x.s;
        t.s = a%60;
        b = (a/60)+m+x.m;
        t.m = b%60;
        t.h = (b/60)+h+x.h;
        t.h = t.h%12;
        return t;
    } 
};
int main()
{
    Time t1,t2,t3;
 
    cout << "Enter the first time "<<endl;;
    t1.setTime();
    cout << "Enter the second time "<<endl;;
    t2.setTime();
    t3 = t1 + t2;	//adding of two time object using '+' operator
    cout << "Sum of times";
    t3.show();
    return 0;
}
