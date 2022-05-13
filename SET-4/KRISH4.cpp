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