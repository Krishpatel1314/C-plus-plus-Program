/*Write a function using variables as arguments to swap the values of a pair of 
integers using call by value, call by address and call by reference.*/
#include<iostream>
using namespace std;
void swapbyvalue(int j, int k)                     //by value                   //it is done with call by value
{
    int l;
    l=j;
    j=k;
    k=l;
    cout<<j<<"     "<<k<<endl;
}
void swapbyreference(int &m, int &n)                 //by reference                       //it is done with call by reference
{
    int l;
    l=m;
    m=n;
    n=l;
}
void swapbyaddress(int *j, int *k)                   //by address                     //it is done with call by address
{
    int l;
    l=*j;
    *j=*k;
    *k=l;
}
int main()
{
    int j,k;
    cout<<"Enter first number:";
    cin>>j;
    cout<<"Enter second number:";
    cin>>k;
    cout<<"Numbers before swapping:"<<endl;
    cout<<j<<"     "<<k<<endl;
    cout<<"Numbers after swapping(call by value):"<<endl;
    swapbyvalue(j,k);
    swapbyreference(j,k);
    cout<<"Numbers after swapping(call by reference):"<<endl;
    cout<<j<<"     "<<k<<endl;
    swapbyaddress(&j,&k);
    cout<<"Numbers after swapping(call by address):"<<endl;
    cout<<j<<"     "<<k<<endl;
    return 0;
}
