/*Write a program for string class using copy constructor.*/
#include<iostream>
using namespace std;
class strings
{
    string j,k;
    public:
    strings()
    {
        j="";
        k="";
    }
    strings(string x, string y)
    {
        j=x;
        k=y;
    }
    void display()
    {
        cout<<"String 1:"<<j<<endl;
        cout<<"String 2:"<<k<<endl;
    }
};
int main()
{
    string a,b;
    cout<<"Enter String 1:";
    getline(cin,a);
    cout<<"Enter String 2:";
    getline(cin,b);
    strings s1(a,b),s2;
    s2=s1;
    s2.display();
    return 0;
}