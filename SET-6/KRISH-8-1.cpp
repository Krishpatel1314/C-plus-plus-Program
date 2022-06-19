/*Rewrite assignment 1&2(from assignment 6) using +=,-=, *= & /=operator overloading.*/
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
