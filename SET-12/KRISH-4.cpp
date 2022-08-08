/*What is Exception? Explain Exception Handling Mechanism. Write a program that demonstrates use of multiple 
catch. Add at least three catch blocks in your Program.*/
// A C++ exception is a response to an exceptional circumstance that arises while a program is running, 
// such as an attempt to divide by zero.
#include<iostream>
using namespace std;

int main()
{
    int a=10, b=0, c;
    try
    {
	    //if a is divided by b(which has a value 0);
	    if(b==0)
		    throw(c); 
	    else
	    c=a/b; 			
    }
    catch(char c)     //catch block to handle/catch exception
    {
	    cout<<"Caught exception : char type ";
    }
    catch(int i)     //catch block to handle/catch exception
    {
	    cout<<"Caught exception : int type ";
    }
    catch(short s)     //catch block to handle/catch exception
    {
	    cout<<"Caught exception : short type ";
    }
    cout<<"\n Hello";
}

// OUTPUT:
// Caught exception : int type 
//  Hello