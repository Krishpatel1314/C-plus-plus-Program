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

/*
OUTPUT:
Enter no. of class you wish to enter:2
Enter no. of student in class 1:2
Enter the name of student:Krish Patel
Enter roll no of student:1
Enter marks of subject 1:78
Enter marks of subject 2:81
Enter marks of subject 3:67
Enter marks of subject 4:92
Enter marks of subject 5:65
Enter marks of subject 6:82
Enter the name of student:Diya Patel
Enter roll no of student:2
Enter marks of subject 1:89
Enter marks of subject 2:94
Enter marks of subject 3:78
Enter marks of subject 4:91
Enter marks of subject 5:78
Enter marks of subject 6:93
Enter no. of student in class 2:1
Enter the name of student:Rohan
Enter roll no of student:1
Enter marks of subject 1:82
Enter marks of subject 2:59
Enter marks of subject 3:67
Enter marks of subject 4:78
Enter marks of subject 5:91
Enter marks of subject 6:54
---------CLASS DETAILS----------
Name of student:Krish Patel
Roll no of student:1
Marks of Subject 1:78
Marks of Subject 2:81
Marks of Subject 3:67
Marks of Subject 4:92
Marks of Subject 5:65
Marks of Subject 6:82
Passed with First Class
Percentage of student:77.5%
Name of student:Diya Patel
Roll no of student:2
Marks of Subject 1:89
Marks of Subject 2:94
Marks of Subject 3:78
Marks of Subject 4:91
Marks of Subject 5:78
Marks of Subject 6:93
Passed with distinction
Percentage of student:87.1667%
Name of student:Rohan
Roll no of student:1
Marks of Subject 1:82
Marks of Subject 2:59
Marks of Subject 3:67
Marks of Subject 4:78
Marks of Subject 5:91
Marks of Subject 6:54
Passed with First Class
Percentage of student:71.8333%
*/