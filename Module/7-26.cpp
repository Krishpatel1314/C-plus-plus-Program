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

