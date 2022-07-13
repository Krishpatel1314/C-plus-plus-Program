/*Define and Discuss Pure Virtual Function*/
/*->A pure virtual function is a member function in a base class whose declaration is provided in a
 base class and implemented in a derived class.
 ->The classes which are containing pure virtual function are the abstract classes.
 ->In case of a pure virtual function, definition of a function is not provided in the base class.
 ->The base class that contains a pure virtual function becomes an abstract class, and that 
 cannot be instantiated.
 ->If the derived class does not define the pure virtual function; it will not throw any error 
 but the derived class becomes an abstract class.
 ->All the derived classes must define the pure virtual function.*/
#include<iostream>
using namespace std;

class baseClass
{   
    public:
    virtual void show()=0;
};
class deriveClass: public baseClass
{
    public:
    void show()
    {
        cout << "Welcome";
    }
};
int main()
{
    deriveClass obj;
    obj.show();
    return 0;
}
//OUTPUT:
//Welcome