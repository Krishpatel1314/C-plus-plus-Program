#include<iostream>
using namespace std;

 void show(int j)
 {
     cout<<j<<endl;
 }
 void show(int k, char l)
 {
     cout<<k<<"    "<<l;
 }
 int main()
 {
     show(13);
     show(14,'K');
     return 0;
 }