//Write a program that checks whether two one dimensional arrays of the same size are
//identical (have the same elements) or not.
#include<iostream>
using namespace std;

int main(){
    int r,c; 
    bool identical=true;
    
    cout<<"Please enter the row of the array you want: ";
    cin>>r;
    cout<<"Please enter the column of the array you want: ";
    cin>>c;

    int ary1[r][c],ary2[r][c];
    cout<<"Please enter the elements of the first array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"Element on row-"<<i+1<<", column-"<<j+1<<endl;
            cin>>ary1[i][j];
        }
    }
    cout<<endl;

    cout<<"Please enter the elements of the second array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"Element on row-"<<i+1<<", column-"<<j+1<<endl;
            cin>>ary2[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(ary1[i][j]!=ary2[i][j]){
                identical=false;
            break;
            }
        }
    }
    
    if(identical){
        cout<<"The given arrays are identical"<<endl;
    }else{
        cout<<"The given arrays are not identical"<<endl;
    }

return 0;
}
   
