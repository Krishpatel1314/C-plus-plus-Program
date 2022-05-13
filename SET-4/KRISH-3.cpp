#include<iostream>
#include<iomanip>
using namespace std;

class book
{
    int rate, qty, total_price;
    string authorname, bookname;

    public:
    
    void getdata()
    {
        cout<<"Enter book name:";
        cin.ignore();
        getline(cin, bookname);
        cout<<"Enter author name:";
        getline(cin, authorname);
        cout<<"Enter Rate of the book:";
        cin>>rate;
        cout<<"Enter quantity of book:";
        cin>>qty;
    }

    void displaydata()
    {
        total_price=rate*qty;
        cout<<setw(15)<<bookname<<setw(15)<<authorname<<setw(15)<<rate<<setw(20)<<qty<<setw(15)<<total_price<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter no. of data you wish to enter:";
    cin>>n;
    book b[n];
    for (int i = 0; i < n; i++)
    {
        b[i].getdata();
    }
    cout<<setw(15)<<"Book Name"<<setw(15)<<"Author Name"<<setw(15)<<"Rate of book"<<setw(20)<<"Quantity of book"<<setw(15)<<"Total Price"<<endl;
    for (int i = 0; i < n; i++)
    {
        b[i].displaydata();
    }
}