/*Write a program to count number of objects created for any class.*/
#include<iostream>
using namespace std;

class object
{
    public:
    static int count;
    object()
    {
        count++;
    }
};
int object::count; 
int main() 
{
    int n;
    cout<<"Enter no. of data you want to enter:";
    cin>>n;
    object c[n]; 
    cout<<"No. of objects created is "; 
    cout<<object::count; 
    return 0;
}

/*
OUTPUT:
Enter no. of data you want to enter:3
No. of objects created is 3
*/