#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char First[50];
    char Middle[50];
    char Last[50];
   
    
    cout<<"Enter your first name"<<endl;
    cin.getline(First,50);
    cout<<"Enter your middle name"<<endl;
    cin.getline(Middle,50);
    cout<<"Enter your last name"<<endl;
    cin.getline(Last,50);
    
cout<<First[0]<<". ";
cout<<Middle[0]<<". ";
cout<<Last[0]<<". ";
}