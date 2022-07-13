/*Create a class distance with the following data members int feet, float inches
Use constructors and destructors properly and write member functions for the following
i. To get the data
j. To display the data
k. Add two distance objects*/
#include<iostream>
using namespace std;
class distance
{
    int feet;
    float inches;
    public:
    distance()
    {
        feet=0;
        inches=0;
    }
    void get()
    {
        cout<<"Enter the feet:";
        cin>>feet;
        cout<<"Enter the inches:";
        cin>>inches;
    }
    void display()
    {
        if(inches>=12)
		{
			inches-=12;
			feet++;
		}
        cout<<"Distance:"<<feet<<"ft  "<<inches<<"inch "<<endl;
    }
    void add(distance j, distance k)
    {
        
        feet=j.feet+k.feet;
        inches=j.inches+k.inches;
        if(inches>12)
		{
			inches-=12;
			feet++;
		}
        display();
    }
    ~distance()
    {
        feet=0;
        inches=0;
    }
};
int main()
{
    class distance d1,d2,s;
    d1.get();
    d2.get();
    s.add(d1,d2);
    return 0;
}
