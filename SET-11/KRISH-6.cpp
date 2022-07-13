/*WAP to create array of 10 numbers and write even and odd numbers into two different files.*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int j[10],k;
    cout<<"Enter 10 number:";
    for (int i = 0; i < 10; i++)
    cin>>j[i];
    ofstream file("even.txt");
    ofstream file1("odd.txt");
    for (int i = 0; i < 10; i++)
    {
        if (j[i]%2==0)
        file<<j[i]<<" ";
        else
        file1<<j[i]<<" ";
    }
    file.close();
    file1.close();
    cout<<"File Separated!!"<<endl;
    cout<<"===========ODD NUMBER FILE========="<<endl;
    ifstream file3;
    file3.open("odd.txt",fstream::in);
    if(!file3)
    {
        cout<<"File not found!!"<<endl;
    }
    while(file3>>k)
    cout<<k<<" ";
    file1.close();
    return 0;
}