// C++ program to explain
// Single inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};

// sub class derived from a single base classes
class Car : public Vehicle {

};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}
//OUTPUT:This is a Vehicle
//-----------------------------------------------------------------------------------------
// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// second base class
class FourWheeler {
public:
	FourWheeler()
	{
		cout << "This is a 4 wheeler Vehicle\n";
	}
};

// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Car obj;
	return 0;
}
//OUTPUT:
// This is a Vehicle
// This is a 4 wheeler Vehicle
//---------------------------------------------------------------------------------
// C++ program to implement
// Multilevel Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle {
public:
	fourWheeler()
	{
		cout << "Objects with 4 wheels are vehicles\n";
	}
};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler {
public:
	Car() { cout << "Car has 4 Wheels\n"; }
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Car obj;
	return 0;
}
//OUTPUT:
// This is a Vehicle
// Objects with 4 wheels are vehicles
// Car has 4 Wheels
//---------------------------------------------------------------------------------
// C++ program to implement
// Hierarchical Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub class
class Car : public Vehicle {
};

// second sub class
class Bus : public Vehicle {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
	Car obj1;
	Bus obj2;
	return 0;
}
//OUTPUT:
// This is a Vehicle
// This is a Vehicle
//-----------------------------------------------------------------------------
// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// base class
class Fare {
public:
	Fare() { cout << "Fare of Vehicle\n"; }
};

// first sub class
class Car : public Vehicle {
};

// second sub class
class Bus : public Vehicle, public Fare {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
	Bus obj2;
	return 0;
}
//OUTPUT:
// This is a Vehicle
// Fare of Vehicle