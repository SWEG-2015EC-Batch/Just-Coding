//Write a program that accept name of persons and put them in alphabetical order.

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){

    cout << "Enter the number of persons: ";
    int n;
    cin >> n;

    string name[n];
    for(int i=0;i<n;i++){
    cout << "Enter the name of person "<<i+1<<" : ";
    cin >> name[i];

    for(int j = 0; j<name[i].size();j++){
        name[i][j] = tolower(name[i][j]); // change all to small not to make biased
    }}

    for(int i=1;i<n;i++){    
        // comparing the element with proir elements
        for(int j=0;j<i;j++){       
            int k=0;
            // finding unequal character
            while(name[j][k]==name[i][k] && k<=name[j].size() && k<=name[i].size()){
            k++;
            }
            if(name[j][k]>name[i][k]){
                string swap;
                swap = name[j];
                 name[j] = name[i];
                 name[i] = swap;
            }
        }
    }
    cout<<"\nThe person's name in the alphabetic order:\n";
for(int i=0;i<n;i++){
        name[i][0] = toupper(name[i][0]);
        cout << name[i]<<"   ";
        }
}