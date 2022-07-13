/*Create a class distance with following data members
int feet
float inches
write an overloaded operators <, >, ==, != two compare two distance objects.*/
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
    void operator <(distance j)
    {
        if(feet<j.feet && inches<j.inches)
        cout<<"Distance one is Smaller"<<endl;
    }
    void operator >(distance j)
    {
        if(feet>j.feet && inches>j.inches)
        cout<<"Distance one is Greater"<<endl;
    }
    void operator ==(distance j)
    {
        if(feet==j.feet && inches==j.inches)
        cout<<"Both distances are equal"<<endl;
    }
    void operator !=(distance j)
    {
        if(feet!=j.feet && inches!=j.inches)
        cout<<"Both distances are unequal"<<endl;
    }
    ~distance()
    {
        feet=0;
        inches=0;
    }
};
int main()
{
    class distance d1,d2;
    d1.get();
    d2.get();
    d1.display();
    d2.display();
    d1<d2;
    d1>d2;
    d1==d2;
    d1!=d2;
    return 0;
}