#include<iostream>

using namespace std;
double power(double m,int n=2)
{
    int result;
    result=m;
    for (int i = 0; i < n-1; i++)
    {
        result*=m;
    }
    return result;
}
int main()
{
    double num;
    char ans;
    int p;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Want to change the power?[y/n]:";
    cin>>ans;
    if(ans=='y')
    {
        cout<<"Enter the power:";
        cin>>p;
        cout<<"The answer is "<<power(num,p);
    }
    else
    {
        cout<<"The answer is "<<power(num);
    }
    return 0;
}