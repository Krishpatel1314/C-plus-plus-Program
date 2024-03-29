/*Rewrite complex class (from assignment 5) using operator overloading concept. i.e.overload (+,-,*,/)*/
#include<iostream>
using namespace std;

class complex
{
    float real, image;
    public:
    complex()
    {
        real=0;
        image=0;
    }
    void get()
    {
        cout<<"Enter real number:";
        cin>>real;
        cout<<"Enter image number:";
        cin>>image;
    }
    void display()
    {
        cout<<real<<"+"<<image<<"i"<<endl;
    }
    complex operator + (complex j)
    {
        complex t;
        t.real=j.real+real;
        t.image=j.image+image;
        return t;
    }
    complex operator - (complex j)
    {
        complex t;
        t.real=real-j.real;
        t.image=image-j.image;
        return t;
    }
    complex operator * (complex j)
    {
        complex t;
        t.real=(real*j.real)-(image*j.image);
        t.image=(image*j.real)+(real*j.image);
        return t;
    }
    complex operator / (complex j)
    {
        complex t;
        t.real=(real*j.real+image*j.image)/(j.real*j.real+j.image*j.image);
        t.image=(j.real*j.real-j.image*j.image)/(j.real*j.real+j.image*j.image);
        return t;
    }
    ~complex()
    {
        real=0;
        image=0;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    cout<<"=================ADDITION===================="<<endl;
    c3=c1+c2;
    c3.display();
    cout<<"================SUBTRACTION=================="<<endl;
    c3=c1-c2;
    c3.display();
    cout<<"===============MULTIPLICATION================"<<endl;
    c3=c1*c2;
    c3.display();
    cout<<"==================DIVISION==================="<<endl;
    c3=c1/c2;
    c3.display();
    return 0;
}

/*
OUTPUT:
Enter real number:3
Enter image number:7
Enter real number:4
Enter image number:2
=================ADDITION====================
7+9i
================SUBTRACTION==================
-1+5i
===============MULTIPLICATION================
-2+34i
==================DIVISION===================
1.3+0.6i
*/