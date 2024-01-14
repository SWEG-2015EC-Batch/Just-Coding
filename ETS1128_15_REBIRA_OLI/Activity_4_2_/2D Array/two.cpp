//Write a C++ program to that accepts a two-dimensional array and displays the multiplication
//of row elements and the sum of column elements.

#include<iostream>
using namespace std;

int main(){
    int r,c;

    cout<<"Please enter the size of the array you want: \nRaws: ";
    cin>>r;
    cout<<"Column: ";
    cin>>c;
    int ary[r][c];
    float rowMulti[r]={},colSum[c]={0};
       
    cout<<"Please enter the values of each elements of the array:"<<endl;
    for(int i=0; i<r; i++){
        rowMulti[i]=1;
        for(int j=0; j<c; j++){
            cout<<"Value of row-"<<i+1<<", column-"<<j+1<<": ";
            cin>>ary[i][j];
            rowMulti[i]*=ary[i][j];
            colSum[j]+=ary[i][j];
        }
    }

    cout<<endl;
    cout<<"Mutiplication of rows:"<<endl;
    for(int i=0;i<r;i++){
    cout<<"Row-"<<i+1<<": "<<rowMulti[i]<<endl;
    }

    cout<<endl;
    cout<<"The sum of columns:"<<endl;
    for(int i=0;i<c;i++){
    cout<<"Column-"<<i+1<<": "<<colSum[i]<<endl;
    }

}