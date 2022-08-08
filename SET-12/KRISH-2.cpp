/*What is Copy Constructor? Explain with example*/
/*A copy constructor is a member function that initializes an object using another object of the same class.
 A copy constructor has the following general function prototype: 
Syntax: ClassName (const ClassName &old_obj); */
#include<iostream>
using namespace std;
class Sample
{
    int x;   
    public:
    Sample(int x1)
    {
        x = x1;
    }
    Sample(const Sample &sam)                               /* Copy constructor */
    {
        x = sam.x;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
int main()
{
    Sample s1(10);     // Normal constructor
    Sample s2 = s1;      // Copy constructor
    cout<<"Normal constructor : ";
    s1.display();
    cout<<"Copy constructor : ";
    s2.display();
    return 0;
}

/*
OUTPUT:
Normal constructor : 10
Copy constructor : 10
*/