#include <iostream>
using namespace std;
class student
{
protected:
    char name[10];
    int eno;

public:
    void getdata_s()
    {
        cout << "Enter Name:-";
        cin >> name;
        cout << "Enrollment Number:-";
        cin >> eno;
    }

    void display_s()
    {
        cout << "Name = " << name << endl
             << "Enrollment Number =" << eno << endl;
    }
};

class inter : public student
{
protected:
    int itm;

public:
    void getdata_in()
    {
        getdata_s();
        cout << "INternel Marks:-";
        cin >> itm;
    }
    void display_in()
    {
        display_s();
        cout << "Internal Marks = " << itm << endl;
    }
};

class university : public student
{
protected:
    int uni;

public:
    void getdata_uni()
    {
        // getdata_s();
        cout << "University Marks:-";
        cin >> uni;
    }
    void display_uni()
    {
        // display_s();
        cout << "University marks = " << uni << endl;
    }
};

class externel : public student
{
protected:
    int ext;

public:
    void getdata_ext()
    {
        // getdata_s();
        cout << "External Marks:-";
        cin >> ext;
    }
    void display_ext()
    {
        // display_s();
        cout << "External Marks = " << ext<<endl;;
    }
};

class result : public inter, public university, public externel
{
	public:
	void get()
	{
		getdata_in();
		getdata_ext();
		getdata_uni();
	}
	void display()
	{
		display_in();
		display_ext();
		display_uni();
		cout<<"Total Marks:"<<itm+ext+uni;
	}
};

int main()
{
    result r1;
	r1.get();
	r1.display();
    return 0;
}
