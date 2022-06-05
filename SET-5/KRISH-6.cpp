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