/*What is Generic Programming? How it is implemented in C++. Write General format of class templates and 
function Template. Write program to swap Number using Function Template. Function prototype is given below:
void swap(int, int , float , float )
Swap two integer number and swap two float number.*/
/*The method of Generic Programming is implemented to increase the efficiency of the code. Generic 
Programming enables the programmer to write a general algorithm which will work with all data types. 
It eliminates the need to create different algorithms if the data type is an integer, string or a character.
The advantages of Generic Programming are:
->Code Reusability
->Avoid Function Overloading
->Once written it can be used for multiple times and cases.*/
#include <iostream>
using namespace std;

// Function template to swap
// two numbers
template <class T>
int swaps(T& x, T& y)
{
	T t;
	t = x;
	x = y;
	y = t;
	return 0;
}
int main()
{
	int a=10, b=20;
    float j=13.5, k=15.7;
	swaps(a, b);
    swaps(j,k);
	cout << a << "   " << b << endl;
    cout << j << "   " << k << endl;
	return 0;
}

// OUTPUT:
// 20   10
// 15.7   13.5