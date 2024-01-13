// A Program that check whether two one dimensional arrays of same size are identical or not
#include<iostream>
using namespace std;

 int main(){

     int row1 , row2;

    cout<<"Enter the number of row1: ";
    cin >> row1;
    cout<<"Enter the number of row2: ";
    cin >> row2;

    if(row1 == row2){

        cout<<"array1 and array2 are identical";

    }else{

    cout<<"array1 and array2 are not identical";
    }

    return 0;
}
