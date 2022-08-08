/*Create a class player with following data members Player,name, Team name,Batting average, Read data for 
10 payers, Use constructors and destructors properly and write member function for each of the following
a. To get the data
b. To display the data
c. Sort it according to the batting average
d. Print a team wise sorted list of player’s name with their batting average*/
#include<iostream>
#include<iomanip>
using namespace std;

class player
{
    string pname, tname;
    float batavg;

    public:
    player()
    {
      pname="";
      tname="";
      batavg=0;  
    }
    void getdata()
    {
        cout<<"Enter Team name:";
        cin.ignore();
        getline(cin, tname);
        cout<<"Enter player name:";
        getline(cin, pname);
        cout<<"Enter batting average:";
        cin>>batavg;
    }
    void display()
    {
        cout<<setw(20)<<tname<<setw(2)<<setw(20)<<pname<<setw(20)<<batavg<<endl;
    }
    void sortbat(player p[], int n)
    {
        
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (p[i].batavg>p[j].batavg)
                {
                    player temp;
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }   
            }   
        }  
    }
    void sortteam(player p[],int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (p[i].tname>p[j].tname)
                {
                    player temp;
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }   
        }   
    }
    ~player()
    {
      pname="";
      tname="";
      batavg=0;  
    }
};
int main()
{
    int n;
    cout<<"Enter no. of data you want to enter:";
    cin>>n;
    player p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].getdata();
    }
    player s;
    s.sortbat(p,n);
    cout<<"------------------------SORTING BY BATTING AVG-----------------------------------"<<endl;
    cout<<setw(20)<<"Team Name"<<setw(20)<<"Player Name"<<setw(20)<<"Batting Average"<<endl;
    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }
    s.sortteam(p,n);
    cout<<"------------------------SORTING BY TEAM NAME-----------------------------------"<<endl;
    cout<<setw(20)<<"Team Name"<<setw(20)<<"Player Name"<<setw(20)<<"Batting Average"<<endl;
    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }
    return 0;
}

/*
OUTPUT:
Enter no. of data you want to enter:3
Enter Team name:India
Enter player name:Virat Kholi
Enter batting average:57.43
Enter Team name:Austrailia
Enter player name:Glenn Maxwell
Enter batting average:69.23
Enter Team name:India
Enter player name:M.S.Dhoni
Enter batting average:65.34
------------------------SORTING BY BATTING AVG-----------------------------------
           Team Name         Player Name     Batting Average
               India         Virat Kholi               57.43
               India           M.S.Dhoni               65.34
          Austrailia       Glenn Maxwell               69.23
------------------------SORTING BY TEAM NAME-----------------------------------
           Team Name         Player Name     Batting Average
          Austrailia       Glenn Maxwell               69.23
               India           M.S.Dhoni               65.34
               India         Virat Kholi               57.43
*/