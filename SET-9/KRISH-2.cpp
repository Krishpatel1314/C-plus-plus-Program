/*Create class Country with country name, capital and population as data member. Country name
and capital should be defined as char *.Write a program using array of pointers to the object.
 Read data at least for 5 countries and sort it country wise.*/
#include<iostream>
#include<string.h>
using namespace std;
class Country
{
    char cn[20],c[20];
    int p;
    public:
    Country()
    {
        cn[20]=0;
        c[20]=0;
    }
    Country(char *l,char *k)
    {
        l=cn;
        k=c;
    }
    void get()
    {
        cout<<"Enter the name of country:";
        cin.ignore();
        cin>>cn;
        cout<<"Enter population of the country:";
        cin>>p;
        cout<<"Enter the name of capital:";
        cin.ignore();
        cin>>c;
    }
    void display()
    {
        cout<<"Name of Country:"<<cn<<endl;
        cout<<"Name of Capital:"<<c<<endl;
        cout<<"Population of Country:"<<p<<endl;
    }
    void sort(Country *x[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if(strcmp(x[i]->cn,x[j]->cn)>=1)
                {
                    Country temp;
                    temp=*x[i];
                    *x[i]=*x[j];
                    *x[j]=temp;
                }
            }   
        }  
    }
};
int main()
{
    int n;
    cout<<"Enter no. of data you wish to enter:";
    cin>>n;
    Country *a[n],b;
    for (int i = 0; i < n; i++)
    {
        a[i] = new Country;
        a[i]->get();
    }
    for (int i = 0; i < n; i++)
    {
        a[i]->display();
    }
    b.sort(a,n);
    for (int i = 0; i < n; i++)
    {
        a[i]->display();
    }
    return 0;
}

/*
OUTPUT:
Enter no. of data you wish to enter:2
Enter the name of country:India
Enter population of the country:9883938
Enter the name of capital:Delhi
Enter the name of country:Austrailia
Enter population of the country:7327732 
Enter the name of capital:Sydney
Name of Country:India
Name of Capital:Delhi
Population of Country:9883938
Name of Country:Austrailia
Name of Capital:Sydney
Population of Country:7327732
Name of Country:Austrailia
Name of Capital:Sydney
Population of Country:7327732
Name of Country:India
Name of Capital:Delhi
Population of Country:9883938
*/