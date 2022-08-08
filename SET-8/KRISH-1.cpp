/*Assume that Circle is defined using radius and Cylinder is defined using radius and height.
Write a Circle class as base class and inherit the Cylinder class from it. Develop classes
such that user can compute the area of Circle objects and volume of Cylinder objects. Area of Circle 
is pie *radius*radius, while volume of Cylinder is pie*(radius * radius)*height. */

#include<iostream>
using namespace std;

class circle
{
    float r;
    public:
    void get()
    {
        cout<<"Enter the radius:";
        cin>>r;
    }
    float area()
    {
        return 3.14*r*r;
    }
    void display()
    {
        cout<<"Area of circle:"<<area()<<endl;
    }
};
class cylinder:public circle
{
    float h;
    public:
    void getdata()
    {
        get();
        cout<<"Enter the height:";
        cin>>h;
    }
    void volume()
    {
        display();
        cout<<"Volume of cylinder:"<<area()*h<<endl;
    }
};
int main()
{
    cylinder c;
    c.getdata();
    c.volume();
    return 0;
}

/*
OUTPUT:
Enter the radius:6.5
Enter the height:9.3
Area of circle:132.665
Volume of cylinder:1233.78
*/