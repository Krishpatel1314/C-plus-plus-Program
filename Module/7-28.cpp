#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    char name[10];
    public:
    void getdata_s(){
        cout<<"ENter Name:-";
        cin>>name;
        cout<<"Enter rollno:-";
        cin>>rollno;

    }
    void display_s(){
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};

class test{
    protected:
    float marks[5];
    float sum=0;
    public:
    void getdata_t(){
        cout<<"Enter Marks";
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
            sum=sum+marks[i];
        }
    }
};
class result:public student,public test
{
    public:
    void getdata()
    {
        getdata_s();
        getdata_t();
    }
    void display()
    {   
        display_s();
        float percentage=(sum/500)*100;
        cout<<"Percentage obtained:-"<<percentage<<"%"<<endl;
    }
};

int main()
{
    result r1;
    r1.getdata();
    r1.display();
}
// OUTPUT:
// ENter Name:-krish 
// Enter rollno:-1
// Enter Marks87
// 92
// 78
// 81
// 96
// krish
// 1
// Percentage obtained:-86.8%