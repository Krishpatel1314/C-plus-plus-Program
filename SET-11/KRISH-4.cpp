/*Write a program to demonstrate use of read() and write() functions for person class.*/
#include<iostream>
#include<fstream>
using namespace std;

class person
{
    int roll;
    string fname,lname;
    public:
    void get()
    {
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter first name:";
        cin>>fname;
        cout<<"Enter last name:";
        cin>>lname;
    }
    void display()
    {
        cout<<"Roll No.:"<<roll<<endl;
        cout<<"First Name:"<<fname<<endl;
        cout<<"Last Name:"<<lname<<endl;
    }
};
int main()
{
    person p1,p2;
    p1.get();
    ofstream file;
    file.open("4.txt",fstream::out);
    file.write((char*)&p1,sizeof(p1));
    file.close();
    cout<<"File written"<<endl;
    ifstream file1;
    file1.open("4.txt",fstream::in);
    file1.read((char*)&p2,sizeof(p2));
    file1.close();
    cout<<"File readed"<<endl;
    p2.display();
    return 0;
}