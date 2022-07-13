//WAP to implement stack
//https://www.programiz.com/cpp-programming/stack
#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    // create a stack of strings
    stack<string> lang;
    // add element to the Stack
    lang.push("C++");
    lang.push("Java");
    lang.push("Python");
    
    // print top element
    cout << lang.top();

    return 0;
}