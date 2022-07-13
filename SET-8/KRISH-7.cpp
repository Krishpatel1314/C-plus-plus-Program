/*Define Inheritance. Explain public, private and protected inheritance with example.*/

/*The capability of a class to derive properties and characteristics from another class is called 
Inheritance. Inheritance is one of the most important features of Object-Oriented Programming. 
Inheritance is a feature or a process in which, new classes are created from the existing classes. 
The new class created is called “derived class” or “child class” and the existing class is known as 
the “base class” or “parent class”. The derived class now is said to be inherited from the base class.*/

/*public inheritance: makes public members of the base class public in the derived class, 
                      and the protected members of the base class remain protected in the derived class.
protected inheritance: makes the public and protected members of the base class protected in the derived class.
private inheritance: makes the public and protected members of the base class private in the derived class.*/

class Base {
  public:
    int x;
  protected:
    int y;
  private:
    int z;
};

class PublicDerived: public Base 
{
  // x is public
  // y is protected
  // z is not accessible from PublicDerived
};

class ProtectedDerived: protected Base 
{
  // x is protected
  // y is protected
  // z is not accessible from ProtectedDerived
};

class PrivateDerived: private Base 
{
  // x is private
  // y is private
  // z is not accessible from PrivateDerived
};
