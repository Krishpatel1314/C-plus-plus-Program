/*Explain pointer to objects with example.*/
/*->You can access an object either directly, or by using a pointer to the object.
->To access an element of an object when using the actual object itself, use the dot operator.
->To access a specific element of an object when using a pointer to the object, you must use the
 arrow operator.
->To declare an object pointer, you use the same declaration syntax that you would use for any other
 pointer type.*/
#include<iostream>
using namespace std;
class number
{
    int j, k;
    public:
    void get(int a, int b)
    {
        j = a;
        k = b;
    }
    void display()
    {
        cout<<"The real part is "<<j<<endl;
        cout<<"The imaginary part is "<<k<<endl;
    }
};
int main()
{
    number *ptr = new number;
    ptr->get(1, 54);
    ptr->display();
    return 0;
}

/*
OUTPUT:
The real part is 1
The imaginary part is 54
*/