/*W.A.P. to show the effect of type conversion.*/
#include<iostream>
using namespace std;
int main()
{
    int j=13;
    float k=15.9;
    char y='b';
    cout<<"Implicit Conversion:"<<j+y<<endl;
    cout<<"Explicit Conversion:"<<(int)k+3;
    return 0;
}