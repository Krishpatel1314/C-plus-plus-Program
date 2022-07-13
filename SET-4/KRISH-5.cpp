/*Create a student with the following data members rollno, name, marks[6],per, class
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate percentage
d. To calculate class based on percentage*/
#include<iostream>
#include<string>
using namespace std;

class Class
{
    public:
    class student
    {
        string name;
        int rollno;
        float marks[6], per,total=0;

        public:
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
        void displaydata()
        {
            cout<<"Name of student:"<<name<<endl;
            cout<<"Roll no of student:"<<rollno<<endl;
            per=total/6;
            for (int i = 0; i < 6; i++)
            {
                cout<<"Marks of Subject "<<i+1<<":"<<marks[i]<<endl;
            }
            if (per>80)
            {
                cout<<"Passed with distinction"<<endl;
            }
            else if (per>60)
            {
                cout<<"Passed with First Class"<<endl;
            }
            else if (per>40)
            {
                cout<<"Passed with Second Class"<<endl;
            }
            else
            cout<<"Failed"<<endl; 
            cout<<"Percentage of student:"<<per<<"%"<<endl;
        }
    }s[50];
};
int main()
    {
        int i,j,n;
        cout<<"Enter no. of class you wish to enter:";
        cin>>n;
        class Class c[n];
        int x[n];
        for ( i = 0; i < n; i++)
        {
            cout<<"Enter no. of student in class "<<i+1<<":";
            cin>>x[i];
            for ( j = 0; j < x[i]; j++)
            {
                c[i].s[j].getdata();
            }  
        }
        cout<<"---------CLASS DETAILS----------"<<endl;
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < x[i]; j++)
            {
                c[i].s[j].displaydata();
            }  
        }
    }
