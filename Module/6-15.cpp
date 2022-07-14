/*Class->class
In this type of conversion both the type that is source type and the destination type are of class type.
 Means  the source type is of class type and the destination type is also of the class type. In other words,
  one class data type is converted into the another class type.*/
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Time
{
    int hrs,min;
    public:
    Time(int h,int m)
    {
        hrs=h;
        min=m;
    }
    Time()
    {
        cout<<"Time's Object Created";
    }
    int getMinutes()
    {
        int tot_min = ( hrs * 60 ) + min ;
        return tot_min;
    }
    void display()
    {
        cout<<"Hours: "<<hrs<<"\n";
        cout<<" Minutes : "<<min <<"\n";
    }
};
class Minute
{
    int min;
    public:
    Minute()
    {
        min = 0;
    }
    void operator=(Time T)
    {
        min=T.getMinutes();
    }
    void display()
    {
        cout<<"Total Minutes : " <<min<<"\n";
    }
};


int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    //conversion from Time to Minute  
    m1 = t1;   
    t1.display();
    m1.display();
    return 0;
}