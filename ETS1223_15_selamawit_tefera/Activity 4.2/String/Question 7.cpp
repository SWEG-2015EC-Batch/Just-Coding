#include <iostream>
using namespace std;
int main(){

    int num ;

    cout<<"How many people you want to enter? ";
    cin>>num;

    string names[num], temp;

    cout<<"Enter the names of the "<<num<<" people:" <<endl;
    for (int i = 0; i < num; i++){

        cin>>names[i];

    }

    for (int i = 0; i < num; ++i){
        for (int j = i + 1; j < num; ++j){
            if(names[i] > names[j]){
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;

            }
        
        }

    }

    cout<<"The names alphabeticaly are: "<<endl;
    for (int i = 0; i < num; ++i){

        cout<<names[i]<<endl;

    }    

    return 0;
}
