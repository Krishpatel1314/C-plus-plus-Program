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
    void add(complex j, complex k)
    {
        real=j.real+k.real;
        image=j.image+k.image;
    }
    void sub(complex j, complex k)
    {
        real=j.real-k.real;
        image=j.image-k.image;
    }
    void multi(complex j, complex k)
    {
        real=(j.real*k.real)-(j.image*k.image);
        image=(j.image*k.real)+(j.real*k.image);
    }
    void div(complex j, complex k)
    {
        real=(j.real*k.real+j.image*k.image)/(k.real*k.real+k.image*k.image);
        image=(k.real*k.real-k.image*k.image)/(k.real*k.real+k.image*k.image);
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
    c3.add(c1,c2);
    c3.display();
    cout<<"================SUBTRACTION=================="<<endl;
    c3.sub(c1,c2);
    c3.display();
    cout<<"===============MULTIPLICATION================"<<endl;
    c3.multi(c1,c2);
    c3.display();
    cout<<"==================DIVISION==================="<<endl;
    c3.div(c1,c2);
    c3.display();
}
