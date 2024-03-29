/*WAP to convert from ton to Kg & gms and vice-versa. Create two classes for the same.
Class tons (with ton as data member) and Class kilo (with kg and gms as data members) 
Use formula 1 ton = 100 kg, 1kg = 1000gms*/
#include<iostream>
using namespace std;

class kilo;
class tons
{
    double ton;
    public:
    tons()
    {
        ton=0;
    }
    friend class kilo;
    void get()
    {
        cout<<"Enter the value in tons:";
        cin>>ton;
    }
    void display()
    {
        cout<<"Values in tons:"<<ton<<endl;
    }
};
class kilo
{
    double kg, gms;
    public:
    kilo()
    {
        kg=0;
        gms=0;
    }
    friend class tons;
    kilo(tons a)
    {
        kg=a.ton*100;
        gms=a.ton*1000;
    }
    void get()
    {
        cout<<"Enter the values in KG:";
        cin>>kg;
        cout<<"Enter the values in GMS:";
        cin>>gms;
    }
    void display()
    {
        cout<<"Values in KG:"<<kg<<" & GMS:"<<gms<<endl;
    }
    void conversion(tons t)
    {
        t.ton=((kg/100)+(gms/1000))/2;
        t.display();
    }
};
int main()
{
    tons x;
    x.get();
    kilo k=x;
    k.display();
    k.get();
    k.conversion(x);
    return 0;
}

/*
OUTPUT:
Enter the value in tons:2
Values in KG:200 & GMS:2000
Enter the values in KG:2000
Enter the values in GMS:3432
Values in tons:11.716
*/