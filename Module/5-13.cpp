#include<iostream> 
#include<conio.h> 
using namespace std;
class point 
{   
    public: 
    int x,y; 
    point() 
    { 
        x=5; 
        y=5; 
    } 
    point(int a,int b) 
    { 
        x=a; 
        y=b; 
    } 
    point(point &p) 
    { 
        x=p.x; 
        y=p.y; 
    } 
    void show() 
    { 
        cout<<"(X,Y) : ("<<x<<","<<y<<")"<<endl<<endl; 
    }
}; 
int main() 
{  
    cout<<"Default Constructor Value :\n"; 
    point p1; 
    p1.show(); 
    cout<<"\nParameterized Constructor Value :\n"; 
    point p2(8,3); 
    p2.show(); 
    cout<<"\nCopy Constructor Value :\n"; 
    point p3(p2); 
    p3.show(); 
    return 0; 
}
// OUTPUT:
// Default Constructor Value :
// (X,Y) : (5,5)

// Parameterized Constructor Value :
// (X,Y) : (8,3)

// Copy Constructor Value :
// (X,Y) : (8,3)