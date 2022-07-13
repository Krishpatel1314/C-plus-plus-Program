/*Write a program to compare two date class objects by overloading <, >, ==,!= operators.*/
#include<iostream>
using namespace std;

class date
{
    int day,month,year,leap;
    public:
    date()
    {
        day=0;
        month=0;
        year=0;
    }
    void get()
    {
        cout<<"Enter a day:";
        cin>>day;
        cout<<"Enter a month:";
        cin>>month;
        cout<<"Enter a year:";
        cin>>year; 
        int x=28;
		if(year%4==0)
		    x=29;
        if(day<1)
        {
            cout<<"Error! Date does not exist!"<<endl;
            get();
        }
        if(month<0 || month>13)
        {
            cout<<"Error! Date does not exist!"<<endl;
            get();
        }
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
			if(day>31)
			{
			   	cout<<"Day is more then 31."<<endl;
                get();
			}
        }
		else if(month==4||month==6||month==9||month==11)
		{
			if(day>30)
			{
			   	cout<<"Day is more then 30."<<endl;
                get();
			}
		}
		else if(month==2)
		{
			if(day>x)
			{
				cout<<"Day is more then "<<x<<"."<<endl;
                get();
			}
		}
		else
		{	
			cout<<"==========INVALID INPUT=============";
		}
    }
    void display()
    {
        cout<<"The date is:"<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void operator <(date j)
    {
        if (year<j.year)
        {
            cout<<"Date one is Greater"<<endl;
        }
        else if (year==j.year)
        {
            if (month<j.month)
            cout<<"Date one is Greater"<<endl;
        }
        else if (month==j.month)
        {
            if(day>j.day)
            cout<<"Date one is Greater"<<endl;
        }    
    }
    void operator >(date j)
    {
        if (year>j.year)
        {
            cout<<"Date one is Smaller"<<endl;
        }
        else if (year==j.year)
        {
            if (month>j.month)
            cout<<"Date one is Smaller"<<endl;
        }
        else if (month==j.month)
        {
            if(day>j.day)
            cout<<"Date one is Smaller"<<endl;
        }    
    }
    void operator ==(date j)
    {
        if (day==j.day && month==j.month && year==j.year)
        cout<<"Both dates are equal"<<endl;
    }
    void operator !=(date j)
    {
        if (day!=j.day || month!=j.month || year!=j.year)
        cout<<"Both dates are not equal"<<endl;
    }
	~date()
    {
        day=0;
        month=0;
        year=0;
    }	
};
int main()
{
	date d1,d2;
	d1.get();
    d2.get();
    d1.display();
    d2.display();
	d1<d2;
    d1>d2;
    d1==d2;
    d1!=d2;
	return 0;
}