/*W.A.P. to show the effects of manipulator endl and setw.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float j[20],k[20],l[20],n,sum[20];
    string name[50];
    cout<<"Enter no. of data you wish to enter:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"Emter name of student:";
    cin>>name[i];
    cout<<"Enter marks of Physics:";
    cin>>j[i];
    cout<<"Enter marks of Maths:";
    cin>>k[i];
    cout<<"Enter marks of Chemistry:";
    cin>>l[i];
    }
    cout<<setw(10)<<"Name"<<setw(10)<<"Physics"<<setw(10)<<"Maths"<<setw(15)<<"Chemistry"<<setw(15)<<"Total Marks"<<setw(15)<<"Percentage(%)"<<endl;
    for (int  i = 0; i < n; i++)
    {
        sum[i]=j[i]+k[i]+l[i];
        cout<<setw(10)<<name[i]<<setw(10)<<j[i]<<setw(10)<<k[i]<<setw(15)<<l[i]<<setw(15)<<sum[i]<<setw(15)<<sum[i]/3<<endl; 
    }
    return 0;
}