#include <iostream>
using namespace std;
int main(){

    string mixed,temp = "";

    cout<<"Enter a string: ";
    getline(cin,mixed);

    int sizeOfmixed = mixed.size();

    for (int i = 0; i < sizeOfmixed; i++){

        if((mixed[i] >= 'a' && mixed[i] <= 'z') || (mixed[i] >= '0' && mixed[i] <= '9' ) ){

            temp += mixed[i];
        }

    }

    mixed = temp;

    cout<<"The alphanumerical characters of the string are: "<<mixed<<endl;
  
    return 0;

}
