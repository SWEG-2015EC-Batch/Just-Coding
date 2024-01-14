//Write C++ program, to read 3*4 2D-array, find and print the sum of even array elements. The
//program should also print even array elements and ‘*’ instead of odd numbers in tabular form

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long long ary[3][4], even[12], sum=0;
    int counter=0;
    string odd[3][4];

    cout<<"Please enter the elements of the array:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"Element on row-"<<i+1<<",column-"<<j+1<<": ";
            cin>>ary[i][j];

            if(ary[i][j]%2==0){
                even[counter++]=ary[i][j];
                sum+=ary[i][j];
            }else{
                odd[i][j]='*';
            }
        }
    }cout<<endl;

    cout<<"The even numbers are: "<<endl;
    for(int i=0; i<counter; i++){
        cout<<even[i];
        if (i < counter - 1) {
            cout << ", ";
        }
    }
    cout<<setw(20)<<"and their sum is: "<<sum<<endl;
    cout<<endl;

    cout<<"The array becames: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(ary[i][j]%2==0){
                cout<<setw(5)<<ary[i][j]<<setw(5);  
            }else{
                cout<<setw(5)<<odd[i][j]<<setw(5);
            }
        }cout<<endl;
    }
}
