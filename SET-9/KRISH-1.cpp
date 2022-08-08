/*Create a class Account. It has three data member account id, name and balance. Define function
 to assign value and display value. Define function that search account number given by the user.
  If account number exists, print detail of that account. Write a program using array of pointers 
  to the object. Declare at least 5 account and print details.*/

#include<iostream>
using namespace std;

int flag=0;
class account
{
    int id;
    string name;
    float balance;
    public:
    void get()
    {
        cout<<"Enter account ID:";
        cin>>id;
        cout<<"Enter your name:";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the balance:";
        cin>>balance;
    }
    void display()
    {
        cout<<"Account ID:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
    void search(account *ac[],int n)
    {
        int s;
        cout<<"Enter account ID you want to search:";
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if(s==ac[i]->id)
            {
                flag=1;
                ac[i]->display();
                break;
            }
            else
            {
                flag=0;
            }
        }
    }
};
int main()
{
    int n;
    cout<<"Enter no. of data you wish to enter:";
    cin>>n;
    account *a_c[n],b;
    for (int i = 0; i < n; i++)
    {
        a_c[i]=new account;
        a_c[i]->get();
    }
    for (int i = 0; i < n; i++)
    {
        a_c[i]->display();
    }
    b.search(a_c,n);
    return 0;
}

/*
OUTPUT:
Enter no. of data you wish to enter:3
Enter account ID:1
Enter your name:Krish Patel
Enter the balance:57000
Enter account ID:2
Enter your name:Diya Patel
Enter the balance:80000
Enter account ID:3
Enter your name:Rohan Sharma
Enter the balance:55000
Account ID:1
Name:Krish Patel
Balance:57000
Account ID:2
Name:Diya Patel
Balance:80000
Account ID:3
Name:Rohan Sharma
Balance:55000
Enter account ID you want to search:1
Account ID:1
Name:Krish Patel
Balance:57000
*/