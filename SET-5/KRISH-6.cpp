/*Create class matrix with following data members
int array[size][size] (size can vary), Use constructors and destructors properly and for performing various arithmetic operations write member functions for each of the following
a. Addition function to add two matrices
b. Subtraction function to add two matrices
c. Multiplication function to add two matrices
d. Division function to add two matrices
e. Function to get data and to print data*/
#include<iostream>
#include<iomanip>
using namespace std;

class matrix
{
    float m[5][5];
    int r,c;
    public:
    matrix(int r,int c)
    {
	this->r=r;
        this->c=c;
        for(int i=0;i<r;i++)
    	{
            for(int j=0;j<c;j++)
	    m[i][j]=0;
	}
    }
    void get()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>m[i][j];
            }  
        }      
    } 
    void display()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout<<setw(7)<<m[i][j];
            }  
            cout<<endl;
        }  
    }  
    void add(matrix d,matrix e)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                m[i][j]=d.m[i][j]+e.m[i][j];
            }  
        }
        display();
    }
    void sub(matrix d,matrix e)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                m[i][j]=d.m[i][j]-e.m[i][j];
            }  
        }
        display();
    }
     void multi(matrix d,matrix e)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                for (int k = 0; k < r; k++)
                {
                    m[i][j]=d.m[i][j]*e.m[i][j];
                }
                
            }  
        }
        display();
    }
    void div(matrix d,matrix e)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                m[i][j]=d.m[i][j]/e.m[i][j];
            }  
        }
        display();
    }
    ~matrix()
    {
		r=0;
        c=0;
        for(int i=0;i<r;i++)
    	{
            for(int j=0;j<c;j++)
			m[i][j]=0;
		}
    }
};
int main()
{
    int x,y;
    cout<<"Enter no. of rows:";
    cin>>x;
    cout<<"Enter no. of columns:";
    cin>>y;
    matrix a(x,y),b(x,y),c(x,y);
    cout<<"Enter the first matrix:"<<endl;
    a.get();
    cout<<"Enter the second matrix:"<<endl;
    b.get();
    cout<<"Addition of two matrix"<<endl;
    c.add(a,b);
    cout<<"Subtraction of two matrix"<<endl;
    c.sub(a,b);
    cout<<"Multiplication of two matrix"<<endl;
    c.multi(a,b);
    cout<<"Division of two matrix"<<endl;
    c.div(a,b);
    return 0;
}

/*
OUTPUT:
Enter no. of rows:3
Enter no. of columns:3
Enter the first matrix:
1 3 5 
2 4 6
9 7 5
Enter the second matrix:
8 6 4
1 3 5
7 2 8
Addition of two matrix
      9      9      9
      3      7     11
     16      9     13
Subtraction of two matrix
     -7     -3      1
      1      1      1
      2      5     -3
Multiplication of two matrix
      8     18     20
      2     12     30
     63     14     40
Division of two matrix
  0.125    0.5   1.25
      21.33333    1.2
1.28571    3.5  0.625
*/