/*Write a program to perform following operations on distance class. 
1)d1 = 2.0 and 2) float m = d1*/
#include<iostream>
using namespace std;

class distance
{
    float a;
    int km,m;
    public:
    distance()
    {
        a=0;
        km=0;
        m=0;
    }
    distance(float x)
    {
        a=x*1000;
    }
    void display()
    {
        cout<<"Distace : km:"<<km<<","<<" m:"<<m<<endl;
    }
    void convert()
    {
        km=a/1000;
        m=(int)a %100;
        display();
    }
    operator float()
    {
        return a/1000;
    }
};
int main()
{
    class distance d1=2.0;
    d1.convert();
    float m=d1;
    cout<<"M:"<<m;
}

/*
OUTPUT:
Distace : km:2, m:0
M:2
*/