//A Program to display values in three column in table form 
#include<iostream>
using namespace std;

  int main(){

    float volt[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

     cout<<"data entered in a three column table:"<<endl;
       for(int i=0; i<9; i+=3){
        for(int j=i; j<i+3; j++){

        cout<<volt[j]<<"\t";
  }
    cout<<endl;
  }
  return 0;
  }
