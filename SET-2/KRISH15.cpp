/*Explain the working of scope resolution operator (::) with example.*/
#include<iostream>
using namespace std;
int j=13;
int main()
{
    int j=15;
    {
        int k=j;
        int j=20;
        cout<<"(Inner block)K="<<k<<endl;
        cout<<"j="<<j<<endl;
        cout<<"::j="<<::j<<endl;
    }
    cout<<"(Outer block)j="<<j<<endl;
    cout<<"::j="<<::j<<endl;
    return 0;
}