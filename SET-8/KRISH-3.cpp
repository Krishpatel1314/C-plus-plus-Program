/*Define class employee which has fname and lname as data member. Define following:
1. Constructor for employee class with default arguments
2. Print function
Derive a class called hourly_worker (with wage and hours as data members). Define following:
1. Constructor for hourly_worker class with default arguments
2. Getpay() function that calculates and returns the pay and
3. A print function*/

#include<iostream>
using namespace std;

class employee
{
    string fname,lname;
    public:
    employee(string fn="Mohan", string ln="Sharma")
    {
        fname=fn;
        lname=ln;
    }
    void display()
    {
        cout<<"First name:"<<fname<<endl;
        cout<<"Last name:"<<lname<<endl;
    }
};
class hr_worker:public employee
{
    int h,w;
    public:
    hr_worker(int hr=2,int wa=250)
    {
        h=hr;
        w=wa;
    }
    int getpay()
    {
        return h*w;
    }
    void display1()
    {
        display();
        cout<<"Payment:"<<getpay();
    }
};
int main()
{
    hr_worker h1;
    h1.display1();
    return 0;
}

/*
OUTPUT:
First name:Mohan
Last name:Sharma
Payment:500
*/