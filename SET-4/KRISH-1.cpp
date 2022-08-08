/*Create a class player with the following data members name, age, runs, hi, lo, tsts, avg
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the average of the player */
#include<iostream>
#include<iomanip>
using namespace std;

class player
{
    string name;
    int age, hi, lo;
    float runs, test, avg;
    
    public:
    
    void getdata()
    {
        cout<<"DETAILS OF THE PLAYER"<<endl;
        cout<<"Enter Name of the player:";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter Age of the player:";
        cin>>age;
        cout<<"Enter total runs of the player:";
        cin>>runs;
        cout<<"Highest Score of the player:";
        cin>>hi;
        cout<<"Lowest Score of the player:";
        cin>>lo;
        cout<<"No .of Test match played by the player:";
        cin>>test;
        
    }

    void displaydata()
    {
        avg=runs/test;
        cout<<setw(15)<<name<<setw(15)<<age<<setw(15)<<runs<<setw(15)<<hi<<setw(15)<<lo<<setw(15)<<test<<setw(20)<<avg<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter no. of players data you wish to enter:";
    cin>>n;
    player p[n];
    for ( int i = 0; i < n; i++)
    {
        p[i].getdata();   
    }
    cout<<setw(15)<<"Name"<<setw(15)<<"Age"<<setw(15)<<"Runs"<<setw(15)<<"Highest Score"<<setw(15)<<"Lowest Score"<<setw(15)<<"Test"
    <<setw(20)<<"Batting Average"<<endl;
    for ( int i = 0; i < n; i++)
    {
        p[i].displaydata();   
    }
}

/*
OUTPUT:
Enter no. of players data you wish to enter:3
DETAILS OF THE PLAYER
Enter Name of the player:Sachin
Enter Age of the player:42
Enter total runs of the player:57392
Highest Score of the player:167
Lowest Score of the player:12
No .of Test match played by the player:256
DETAILS OF THE PLAYER
Enter Name of the player:Virat Kholi
Enter Age of the player:32
Enter total runs of the player:67293
Highest Score of the player:188
Lowest Score of the player:4
No .of Test match played by the player:189
DETAILS OF THE PLAYER
Enter Name of the player:M.S.Dhoni
Enter Age of the player:40
Enter total runs of the player:57233
Highest Score of the player:152
Lowest Score of the player:7
No .of Test match played by the player:127
           Name            Age           Runs  Highest Score   Lowest Score           Test     Batting Average
         Sachin             42          57392            167             12            256             224.188
    Virat Kholi             32          67293            188              4            189             356.048
      M.S.Dhoni             40          57233            152              7            127             450.654
*/