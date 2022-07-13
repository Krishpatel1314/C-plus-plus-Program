/*Explain and demonstrate, how virtual function to achieve runtime polymorphism?*/
/*->Virtual functions are resolved late, at runtime.
  ->The main use of virtual function is to achieve Runtime Polymorphism. 
  ->Runtime polymorphism can be achieved only through a pointer (or reference) of base class type.*/

#include<iostream>
using namespace std;
class B {
   public:
      virtual void s() {
         cout<<" In Base \n";
      }
};
class D: public B {
   public:
      void s() {
         cout<<"In Derived \n";
      }
};
int main(void) {
   D d; // An object of class D
   B *b= &d; // A pointer of type B* pointing to d
   b->s(); // prints "D::s() called"
   return 0;
}
//OUTPUT:In Derived 
