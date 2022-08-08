/*Consider a class network as shown in figure given below. The class Employee derives information 
from both Account and Admin classes which in turn derive information from the class Person. Define all 
the four classes and write a program to create, update and display the information contained in Employee 
objects.*/

#include<iostream>
#include<string.h>
using namespace std;

class person
{
    string name;
    int code;
    public:
    void getp()
    {
        cout<<"Enter the name of employee:";
        getline(cin,name);
        cout<<"Enter the code of employee:";
        cin>>code;
    }
    void disp()
    {
        cout<<"Name of the employee:"<<name<<endl;
        cout<<"Code of the employee:"<<code<<endl;
    }
};
class account:virtual public person
{
    int pay;
    public:
    void geta()
    {
        cout<<"Enter the amount:";
        cin>>pay;
    }
    void disa()
    {
        cout<<"Amount:"<<pay<<endl;
    }
};
class admin:virtual public person
{
    int exp;
    public:
    void getad()
    {
        cout<<"Enter the experience:";
        cin>>exp;
    }
    void disad()
    {
        cout<<"Experience:"<<exp<<endl;
    }
};
class employee:public account,public admin
{
    public:
    void display()
    {
        getp();
        geta();
        getad();
        disp();
        disa();
        disad();
    }
};
int main()
{
    employee e1;
    e1.display();
    return 0;
}

/*
OUTPUT:
Enter the name of employee:Krish Patel
Enter the code of employee:1
Enter the amount:75000
Enter the experience:1
Name of the employee:Krish Patel
Code of the employee:1
Amount:75000
Experience:1
*/