/*Rewrite assignment 1&2(from assignment 6) using +=,-=, *= & /=operator overloading.*/
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
    matrix operator +=(matrix d)
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
    matrix operator -=(matrix d)
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
    matrix operator *=(matrix d)
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
    matrix operator/=(matrix d)
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
    c=a+=b;
    c.display();
    cout<<"Subtraction of two matrix"<<endl;
    c=a-=b;
    c.display();
    cout<<"Multiplication of two matrix"<<endl;
    c=a*=b;
    c.display();
    cout<<"Division of two matrix"<<endl;
    c=a/=b;
    c.display();
    return 0;
}