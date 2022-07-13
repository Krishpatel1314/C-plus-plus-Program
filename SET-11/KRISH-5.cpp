/*WAP to copy contents of one file to another.*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string j,k,l;
    cout<<"Enter the file you want to copy:";
    getline(cin,j);
    cout<<"Enter the file you in which want to copy:";
    getline(cin,k);
    ifstream file{j};
    ofstream file1{k};
    if(file && file1)
    {
        while(getline(file,l))
        {
            file1<<l<<endl;
        }
        cout<<"Copy Finished"<<endl;
    }
    else
    cout<<"Something went wrong"<<endl;
    return 0;
}