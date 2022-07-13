/*Write overloaded functions to convert ascii to int and ascii to float.*/
#include<iostream>
using namespace std;

void convert(int j)
{
    char ch='A';
    cout<<"ASCII to integer:"<<(int)ch+j<<endl;
}
void convert(float k, char l)
{
    
    cout<<"ASCII to float:"<<l+k;
}
int main()
{
    convert(12);
    convert(13.5,'m');
    return 0;
}