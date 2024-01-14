//Write a program that store a list of number and print the even numbers in the array in reverse order they
//are entered.

#include<iostream>
using namespace std;

int main(){
    int n,counter=0;
    
    cout<<"How many list of numbers do you want to enter: ";
    cin>>n;
    
    long  number[n],even[n];

    cout<<"Enter any list of numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>number[i];

        if(number[i]%2==0){
            even[counter++]=number[i]; 
        }
    }
    cout<<"Here are the even numbers in reverse order theyvare entered: ";
    for(int i=(counter-1); i>=0; --i){
        cout<<even[i]<<" ";
        }
    }
    
    