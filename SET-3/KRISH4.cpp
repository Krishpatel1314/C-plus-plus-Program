/*WAP that prints various types of data using function overloading.*/
#include<iostream>
using namespace std;
void show(int i)
{
    cout<<"Here integer is "<<i<<endl;
}
void show(double k)
{
    cout<<"Here float is "<<k<<endl;
}
void show(string j)
{
    cout<<"Here string is "<<j;
}

int main()
{
    show(13);
    show(13.13);
    show("Thirteen");
    return 0;
}

/*
OUTPUT:
Here integer is 13
Here float is 13.13
Here string is Thirteen
*/