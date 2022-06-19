/*Create a class date with following data member int day, month and year
Use constructors and destructors properly and write member functions for each of the following
a. To set the date
b. To get the date
c. To Print the date into dd/mm/yy format
d. Nextday function, to increment the day by one, while incrementing day by one be sure for two things
i. Must increment month by one if day is 29, 28, 30 or 31 in a particular month
ii. Must increment year accordingly*/
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
			   	cout<<"Day is more then 31.";
                get();
			}
        }
		else if(month==4||month==6||month==9||month==11)
		{
			if(day>30)
			{
			   	cout<<"Day is more then 30.";
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
    void nextDay()
	{
		int x=28;
    	if(year%4==0)
		x=29;
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
			if(day==31)
			{
			   	day=1;
				if(month==12)
			   	{
			   		month=1;
				   	year++;
				}
				else
			        month++;
			}
			else
		    day++;
		}
		else if(month==4||month==6||month==9||month==11)
		{
			if(day==30)
			{
				day=1;
			   	month++;
			}
			else
			    day++;
		}
		else
		{
			if(day==x)
			{
			    day=1;
			    month++;
			}
			else
			    day++;
		}
		cout<<"Next Day is:"<<day<<"/"<<month<<"/"<<year<<endl;
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
	date d;
	d.get();
	d.display();
	d.nextDay();
	return 0;
}