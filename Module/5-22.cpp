#include<iostream>
using namespace std; 
class arithmetic 
{   
    int a,b; 
    char op; 
    public: 
    arithmetic() 
    {   
        cout<<"Give the value of A and B : "; 
        cin>>a>>b; 
        cout<<"\nSelect Operation (+,-,*,/) : "; 
        cin>>op; 
    }
    void show() 
    { 
        cout<<"\n A "<<op<<" B :== "<<a<<" "<<op<<" "<<b<<" :== "; 
        if(op == '+') 
        {
            cout<<a+b; 
        } 
        else if(op == '-') 
        { 
            cout<<a-b; 
        } 
        else if(op == '*') 
        { 
            cout<<a*b; 
        } 
        else if(op == '/')
        { 
            cout<<a/b; 
        } 
        else 
        { 
            cout<<"\nERROR : INVALID CHARACTER"; 
        } 
    } 
}; 
int main() 
{  
    arithmetic obj; 
    obj.show();  
    return 0; 
}
// OUTPUT:
// Give the value of A and B : 2 3

// Select Operation (+,-,*,/) : +

//  A + B :== 2 + 3 :== 5