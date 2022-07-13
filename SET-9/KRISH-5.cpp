//What is pointer to void?
/*A void pointer is a pointer that has no associated data type with it. A void pointer
 can hold address of any type and can be typecasted to any type.*/

/*Example just for concept clearance*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	char b = 'x';
	
	void* p = &a; // void pointer holds address of int 'a'
    cout<<p<<endl;
	p = &b; // void pointer holds address of char 'b'
    cout<<p;
}
/*OUTPUT:
0xfba5fff8b4
0xfba5fff8b3*/