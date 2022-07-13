/*Write a program using file handling concepts to read from “Country” and “capital” file and 
display data for the same.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string a,b,d;
    fstream file;
    cout<<"Enter first file name to read:";
    getline(cin,a);
    cout<<"Enter second file name to read:";
    getline(cin,b);
    cout<<"=============Country file============="<<endl;
    file.open(a,fstream::in);                   //fstream::in is file opening mode. It opens a file 
    if(!file)                                   //in reading mode only.
    {
        cout<<"File not found!!"<<endl;
    }
    while(file>>d)                    //noskipws->reads data from a file in character-by-character 
    cout<<d<<endl;                                  //manner, without skipping white spaces.
    file.close();
    cout<<"\n=============Capital file============="<<endl;
    file.open(b,fstream::in);
    if(!file)
    {
        cout<<"File not found!!"<<endl;
    }
    while(file>>d)
    cout<<d<<endl;
    file.close();
    return 0;
}