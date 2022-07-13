/*Declare a class catalog with following data members title, author, year_of_publication, no_of_copies
create array of 15 objects, Use constructors and destructors properly and write member function for each of the following
a. To get the data
b. To display the data
c. To search the particular title, if exists then display that particular record*/
#include<iostream>
#include<iomanip>
using namespace std;
class catlog
{
    string title,author;
    int yop, noc;

    public:
    catlog()
    {
        title="";
        author="";
        yop=0;
        noc=0;
    }
    void getdata()
    {
        cout<<"Enter the Title:";
        cin.ignore();
        getline(cin,title);
        cout<<"Enter year of publication:";
        cin>>yop;
        cout<<"Enter the name of author:";
        cin.ignore();
        getline(cin,author);
        cout<<"Enter the no. of copies:";
        cin>>noc;
    }
    void display()
    {
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Year of publication:"<<yop<<endl;
        cout<<"No. of copies:"<<noc<<endl;
    }
    void search(catlog c[], int n)
    {
        string stitle;
        int flag=0;
        cout<<"Enter the title you want to search:";
        cin.ignore();
        getline(cin, stitle);
        for (int i = 0; i < n; i++)
        {
            if(c[i].title==stitle)
            {
                cout<<"====Record Found!!===="<<endl;
                c[i].display();
                flag++;
            }
        }   
        if (flag==0)
        {
            cout<<"====No Record found!!====";
        }     
    }
    ~catlog()
    {
        title="";
        author="";
        yop=0;
        noc=0;
    }
};
int main()
{
    int n;
    cout<<"Enter no.of data you want to enter:";
    cin>>n;
    catlog c[n];
    for (int i = 0; i < n; i++)
    {
        c[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        c[i].display();
    }
    catlog j;
    j.search(c,n);
    return 0;    
}