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
    // float sum()
    // {
    //     for (int i = 0; i < 6; i++)
    //     {
            
    //     }
    //     return 
    // }
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
        //sum();
        per=total/6;
        cout<<setw(20)<<name<<setw(20)<<rollno<<setw(20)<<per<<setw(20)<<grade()<<endl;
    }
    void sort(student s[], int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (s[i].per>s[j].per)
                {
                    student temp;
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
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
    int n;
    cout<<"Enter no.of data you want to enter:";
    cin>>n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].getdata();
    }
    cout<<setw(20)<<"Name of student"<<setw(20)<<"Rollno"<<setw(20)<<"Percentage"<<setw(20)<<"Grade"<<endl;
    for (int i = 0; i < n; i++)
    {
        s[i].displaydata();
    }
    cout<<"------------------------------SORTING OF PERCENTAGE-----------------------------"<<endl;
    cout<<setw(20)<<"Name of student"<<setw(20)<<"Rollno"<<setw(20)<<"Percentage"<<setw(20)<<"Grade"<<endl;
    student k;
    k.sort(s,n);
    for (int i = 0; i < n; i++)
    {
        s[i].displaydata();
    }
}