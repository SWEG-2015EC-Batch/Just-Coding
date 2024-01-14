//A Program to display number taken from user and their average
#include<iostream>
using namespace std;

 int temp [8];
     int number;
     float average;
     float total=0;

     for(int i=0; i<8; i++){
      cout<<"Enter number"<<i+1<<": ";
      cin>>number;
      temp[i]=number;
      total+=temp[i];
     }

     average=total/8;

  cout<<"The numbers are: ";
     for(int i=0; i<8; i++){
            cout<<temp[i]<<" ";
     }
     cout<<endl;

  cout<<"Average: "<<average<<endl;

  return 0;
  }