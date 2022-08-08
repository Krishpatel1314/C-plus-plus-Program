/*Define Friend Function. Create two classes DM and DB which store the value of distances.DM stores distances
 in meters and centimeters and DB in feet and inches. Write a program that can read values for the class 
 objects and add one object of DM with another object of DB. Use a friend function to carry out the addition
 operation. The object stores the results may a DM object or DB object, depending on the units in which the
 results are required. The display should be in the format of feet and inches or meters and centimeters 
 depending on the object on display.
1 Feet = 0.3048 Meter ,1 Meter = 3.28 Feet,1 Inch = 2.54 Centimeter ,1 Centimeter = 0.3937 Inch*/

/*A friend function in C++ is defined as a function that can access private, protected and public members 
of a class. The friend function is declared using the friend keyword inside the body of the class.*/
#include<iostream>
using namespace std;
class DB;
class DM
{
    float m,cm;
    public:
    friend void add(DM,DB);
    void getdm()
    {
        cout<<"Enter distance in Meters:";
        cin>>m;
        cout<<"Enter distance in centimeters:";
        cin>>cm;
    }
    void displaydm()
    {
        cout<<"Meter:"<<m<<endl;
        cout<<"Centimeter:"<<cm<<endl;
    }
};
class DB
{
    float ft,inch;
    public:
    friend void add(DM,DB);
    void getdb()
    {
        cout<<"Enter distance in feets:";
        cin>>ft;
        cout<<"Enter distance in inches:";
        cin>>inch;
    }
    void displaydb()
    {
        cout<<"Feets:"<<ft<<endl;
        cout<<"Inches:"<<inch<<endl;
    }
};
void add(DM x, DB y)
{
    x.m=x.m+(y.ft/3.28);
    x.cm=x.cm+(y.inch/0.3937);
    x.displaydm();
}
int main()
{
    DM d1;
    DB d2;
    d1.getdm();
    d2.getdb();
    add(d1,d2);
    return 0;
}

/*
OUTPUT:
Enter distance in Meters:5
Enter distance in centimeters:20 
Enter distance in feets:3
Enter distance in inches:11
Meter:5.91463
Centimeter:47.9401
*/