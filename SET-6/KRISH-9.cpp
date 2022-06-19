/*Rewrite student class (from assignment 5) using comparison overloaded operators < & >.*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class student
{
    string name;
    int rollno;
    float marks[6], per,total;

    public:
    student()
    {
        name="";
        rollno=0;
        marks[6]=0;
        per=0;
        total=0;
    }
    void getdata()
    {
        cout<<"Enter the name of student:";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter roll no of student:";
        cin>>rollno;
        for (int i = 0; i < 6; i++)
        {
            cout<<"Enter marks of subject "<<i+1<<":";
            cin>>marks[i];
            total=total+marks[i];
        } 
    }
    char grade()
    {
        if (per>=80)
        cout<<"Distinction";
        else if (per>=60)
        cout<<"First Class";
        else if (per>=40)
        cout<<"Second Class";
        else
        cout<<"Failed";
        return 0;
    }
    void displaydata()
    {
        per=total/6;
        cout<<setw(20)<<name<<setw(20)<<rollno<<setw(20)<<per<<setw(20)<<grade()<<endl;
    }
    void operator <(student j)
    {
        if (per<j.per)
        cout<<"Student one percentage is Smaller"<<endl;    
    }
    void operator >(student j)
    {
        if (per>j.per)
        cout<<"Student one percentage is Greater"<<endl;  
    }
    ~student()
    {
        name="";
        rollno=0;
        marks[6]=0;
        per=0;
        total=0;
    }
};
int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<setw(20)<<"Name of student"<<setw(20)<<"Rollno"<<setw(20)<<"Percentage"<<setw(20)<<"Grade"<<endl;
    s1.displaydata();
    s2.displaydata();
    s1<s2;
    s1>s2;
}