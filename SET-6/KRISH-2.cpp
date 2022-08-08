/*Rewrite matrix class (from assignment 5) using operator overloading concept. i.e. overload (+,-,*,/)*/
#include<iostream>
#include<iomanip>
using namespace std;

class matrix
{
    float m[5][5];
    public:
    matrix()
	{
        for(int i=0;i<3;i++)
    	{
            for(int j=0;j<3;j++)
			m[i][j]=0;
		}
	}
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
    matrix operator +(matrix d)
    {
        matrix t;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                t.m[i][j]=m[i][j]+d.m[i][j];
            }  
        }
        return t;
    }
    matrix operator -(matrix d)
    {
        matrix t;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                t.m[i][j]=m[i][j]-d.m[i][j];
            }  
        }
        return t;
    }
    matrix operator *(matrix d)
    {
        matrix t;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    t.m[i][j]=m[i][j]*d.m[i][j];
                }
                
            }  
        }
        return t;
    }
    matrix operator/(matrix d)
    {
        matrix t;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                t.m[i][j]=m[i][j]/d.m[i][j];
            }  
        }
        return t;
    }
    ~matrix()
    {
        for(int i=0;i<3;i++)
    	{
            for(int j=0;j<3;j++)
			m[i][j]=0;
		}
    }
};
int main()
{
    matrix a,b,c;
    cout<<"Enter the first matrix:"<<endl;
    a.get();
    cout<<"Enter the second matrix:"<<endl;
    b.get();
    cout<<"Addition of two matrix"<<endl;
    c=a+b;
    c.display();
    cout<<"Subtraction of two matrix"<<endl;
    c=a-b;
    c.display();
    cout<<"Multiplication of two matrix"<<endl;
    c=a*b;
    c.display();
    cout<<"Division of two matrix"<<endl;
    c=a/b;
    c.display();
    return 0;
}

/*
OUTPUT:
Enter the first matrix:
1 2 3    
4 5 6
7 8 9
Enter the second matrix:
4 5 6
1 2 3
8 2 4
Addition of two matrix
      5      7      9
      5      7      9
     15     10     13
Subtraction of two matrix
     -3     -3     -3
      3      3      3
     -1      6      5
Multiplication of two matrix
      4     10     18
      4     10     18
     56     16     36
Division of two matrix
   0.25    0.4    0.5
      4    2.5      2
  0.875      4   2.25
*/