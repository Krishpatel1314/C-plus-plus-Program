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
};
int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    cout<<"=================ADDITION===================="<<endl;
    c3=c1+c2;
    c3.display();
    return 0;
}