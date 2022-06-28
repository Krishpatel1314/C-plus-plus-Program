/*Create a class item with the following data members item code, cost, qty, total_price
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the total price of the item*/
#include<iostream>
#include<iomanip>
using namespace std;

class item
{
    int code, qty;
    float cost, total_price;

    public:
    void getdata()
    {
        cout<<"Enter code of item:";
        cin>>code;
        cout<<"Enter Cost of item:";
        cin>>cost;
        cout<<"Enter Quantity of item:";
        cin>>qty;
    }

    void displaydata()
    {
        total_price=cost*qty;
        cout<<setw(20)<<code<<setw(20)<<cost<<setw(20)<<qty<<setw(20)<<total_price<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter no. of data you wish to enter:";
    cin>>n;
    item item[n];
    for (int i = 0; i < n; i++)
    {
        item[i].getdata();
    }
    cout<<setw(20)<<"Code of item"<<setw(20)<<"Cost of item"<<setw(20)<<"Quantity of item"<<setw(20)<<"Total Price"<<endl;
    for (int i = 0; i < n; i++)
    {
        item[i].displaydata();
    }
}
    