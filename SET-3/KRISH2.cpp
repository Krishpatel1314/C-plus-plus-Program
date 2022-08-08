/*WAP to add two matrices using default argument.*/
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
    cout<<"Enter the values of first matrices:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Enter the values of second matrices:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>b[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)                     //sum of matrices
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    cout<<"Sum of matrices:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<"  ";
            if(j==3-1)
            cout<<endl;
        }
        
    }
    return 0;
}

/*
OUTPUT:
*/