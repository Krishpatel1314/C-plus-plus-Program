/*Create a class book with following data members bookname, authorname, rate, qty
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the total price of the book*/
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

/*
OUTPUT:
Enter no. of data you wish to enter:2
Enter book name:Engineering Graphics
Enter author name:P.J.Shah
Enter Rate of the book:750
Enter quantity of book:3
Enter book name:Basic Concept of OOp
Enter author name:Robert 
Enter Rate of the book:899
Enter quantity of book:11
           Book Name    Author Name   Rate of book    Quantity of book    Total Price
Engineering Graphics       P.J.Shah            750                   3           2250
Basic Concept of OOp        Robert             899                  11           9889
*/