/*Explain Friend function and its characteristics. Define a class matrix with an integer array of 
3X3 as a data member. Define a friend function which adds two matrix objects and returns resultant 
matrix object.*/
/*A friend function is a non-member function and is a friend of a class. It is declared inside a 
 class with the prefix friend and defined outside the class like any other normal function without the
 prefix friend. This friend function can access private and protected data members if it is a friend 
 function of that class
 The characteristics of friend function are: 
 ->The friend function should not be defined inside the class. 
 ->It can be declared inside a class under public, private or protected access specifier since it is a 
 non member function and make no difference. 
 ->A friend function should be defined outside the class without prefix friend 
 ->The scope resolution operator should not be used while defining the friends function outside the class 
 since it is not member function of any class. 
 ->It should be called like any other normal function and not to be called using an object with dot operator. 
 ->The data members of class are accessed through object and dot operator with a data members.*/
 #include<iostream>
#include<iomanip>
using namespace std;

class matrix
{
    float m[3][3];
    public:
    matrix()
	{
        for(int i=0;i<3;i++)
    	{
            for(int j=0;j<3;j++)
			m[i][j]=0;
		}
	}
    friend void add(matrix &,matrix &);
    void get()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>m[i][j];
            }  
        }      
    } 
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<setw(7)<<m[i][j];
            }  
            cout<<endl;
        }  
    } 
};
void add(matrix &x, matrix &y)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x.m[i][j]=x.m[i][j]+y.m[i][j];
        }  
    }
}
int main()
{
    matrix m1,m2,m3;
    cout<<"Enter the first matrix:"<<endl;
    m1.get();
    cout<<"Enter the second matrix:"<<endl;
    m2.get();
    cout<<"Addition of two matrix"<<endl;
    add(m1,m2);
    m1.display();
    return 0;
}