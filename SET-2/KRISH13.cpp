/*W.A.P. that will show the effect of reference variable.*/
#include<iostream>
using namespace std;
int main()
{
    int a=6;
    double d=13.5;
    int &r=a;
    double &s=d;
    cout<<"Value of A and D:"<<a<<" & "<<d<<endl;
    cout<<"Reference of A and D:"<<r<<" & "<<s;
    return 0;
}