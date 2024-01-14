//Write a program to input eight integer numbers into an array named temp. 
//As each number is input, add the number into a total. 
//After all numbers are input, display the number and their average.

#include<iostream>
using namespace std;

int main(){
    int temp[8],Total=0,Average=0;
    
    cout<<"Please enter the numbers: "<<endl;
    for(int i=0; i<8; i++){
        cin>>temp[i];
        Total+=temp[i];
    }

    cout<<"The numbers are: "<<endl;
    for(int i=0; i<8; i++){
        cout<<temp[i]<<" ";
    }

    Average=Total/8;
    cout<<"\nThe average of the numbers is: "<<Average;

    return 0;
}