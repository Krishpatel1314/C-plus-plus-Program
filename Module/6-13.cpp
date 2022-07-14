#include<iostream>
using namespace std;
int main()
{
    int sum(int,int); //function with 2 argument
    int sum(int,int,int); //function with 3 argument
    int a,b,c,d,result;
    cout<<"Enter 2 Integers:";
    cin>>a>>b;
    result=sum(a,b);
    cout<<"Addition =" << result<<endl;
    cout<<"Enter 3 Integers:";
    cin>> a >> b >> c;
    result=sum(a,b,c);
    cout<<"Addition ="<< result<<endl;;
    return 0;
}
//function with 2 argument
int sum(int a,int b)
{
    return(a+b);
}
//function with 3 argument
int sum(int a,int b,int c)
{
    return(a+b+c);
}



