#include<iostream>
#include<iomanip>
using namespace std;

class book
{
    string bname,aname;
    float price;
    int qty,edition;
    float total()
    {
        return qty*price;
    }

    public:
    book()
    {
        bname="";
        aname="";
        price=0;
        qty=0;
        edition=0;
    }
    void getdata()
    {
        cout<<"Enter Book name:";
        cin.ignore();
        getline(cin, bname);
        cout<<"Enter no. of quantity:";
        cin>>qty;
        cout<<"Enter Author name:";
        cin.ignore();
        getline(cin, aname);
        cout<<"Enter the edition of book:";
        cin>>edition;
        cout<<"Enter price of book:";
        cin>>price;
    }
    void display()
    {
        cout<<setw(20)<<bname<<setw(20)<<aname<<setw(15)<<edition<<setw(15)<<qty<<setw(20)<<price<<setw(20)<<total()<<endl;
    }
    void sort(book b[], int n)
    {
        for (int i = 0; i < n; i++)
        if (b[i].total()<250)
        {
            b[i].display();
        }         
    }
    ~book()
    {
    }
};
int main()
{
    int n;
    cout<<"Enter no.of data you want to enter:";
    cin>>n;
    book b[n];
    for (int i = 0; i < n; i++)
    {
        b[i].getdata();
    }
    cout<<setw(20)<<"Book name"<<setw(20)<<"Author name"<<setw(15)<<"Edition"<<setw(15)<<"Quantity"<<setw(20)<<"Price"<<setw(20)<<"Total Price"<<endl;
    for (int i = 0; i < n; i++)
    {
        b[i].display();
    }
    cout<<"-------------------------------------------SORTED BY TOTAL PRICE-----------------------------------------"<<endl;
    cout<<setw(20)<<"Book name"<<setw(20)<<"Author name"<<setw(15)<<"Edition"<<setw(15)<<"Quantity"<<setw(20)<<"Price"<<setw(20)<<"Total Price"<<endl;
    book k;
    k.sort(b,n);
    return 0;   
}