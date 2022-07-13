/*What is this pointer? Write a complete program to illustrate the use of this pointer.*/
/*->Every object in C++ has access to its own address through an important pointer called this pointer. 
->The this pointer is an implicit parameter to all member functions. 
->Therefore, inside a member function, this may be used to refer to the invoking object.*/
#include<iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
    int x;
    public:
    void setX (int x)
    {
	    // The 'this' pointer is used to retrieve the object's x
	    // hidden by the local variable 'x'
	    this->x = x;
    }
    void print() { cout << "x = " << x << endl; }
};

int main()
{
    Test t1;
    int x;
    cout<<"Enter a number:"; cin>>x;
    t1.setX(x);
    t1.print();
    return 0;
}
