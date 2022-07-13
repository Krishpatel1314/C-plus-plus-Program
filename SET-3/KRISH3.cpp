/*WA function called zerosmaller() uses two arguments.
Use return by reference to the function concept and set a smaller value to 0.*/
#include<iostream>
using namespace std;
void zerosmaller(int &, int &);
int main()
{
    int j,k;
    cout<<"Enter first number:";
    cin>>j;
    cout<<"Enter second number:";
    cin>>k;
    zerosmaller(j,k);
    cout<<"First number:"<<j<<endl;
    cout<<"Second number:"<<k;
    return 0;
}
void zerosmaller(int &a, int &b)
{
    if (a<b)
    a=0;
    else
    b=0;
}