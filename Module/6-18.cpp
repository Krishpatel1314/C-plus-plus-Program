#include<iostream>
using namespace std;
class bird{
    char name;
    int weight;
    public:
    bird()
    {
        cout<<"NAme:-";
        cin>>name;
        cout<<"Weight:-";
        cin>>weight;
    }
    bird(char a,int x)
    {
      name=a;
      weight=x;
    }
    void display()
    {
        cout<<name<<weight;
    }
    void operator >=(bird v)
    {
        if(v.weight>weight)
        {
            cout<<"False";
        }
    }
};
int main()
{
    bird b1,b2;
    b1.display();
    b2.display();
    b1 >= b2;
}
// OUTPUT:
// NAme:-a
// Weight:-15
// NAme:-b
// Weight:-25
// a15b25False