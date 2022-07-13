//Explain with the help of an example why templates are used in programming?
//A template safely overcomes all the limitations occurring during the overloading function and gives 
//more flexibility to the program.
#include <iostream>  
using namespace std;  
template<class T> 
T add(T &a,T &b)  
{  
    return a+b;     
}  
int main()  
{  
  int i =13;  
  int j =9;  
  float m = 2.3;  
  float n = 1.2;  
  cout<<"Addition of i and j is :"<<add(i,j);  
  cout<<'\n';  
  cout<<"Addition of m and n is :"<<add(m,n);  
  return 0;  
}  