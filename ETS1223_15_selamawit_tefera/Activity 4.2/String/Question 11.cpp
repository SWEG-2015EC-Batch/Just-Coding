#include <iostream>
#include <string.h>

using namespace std;
int main(){

    char firstName[20];
    char middleName[20];
    char lastName[20];

    cout<<"Please enter your first name: ";
    cin>>firstName;
    cout<<"Please enter your middle name: ";
    cin>>middleName;
    cout<<"Please enter your last name: ";
    cin>>lastName;

    cout<<"The initials of your fullname are: ";
    cout<<firstName[0]<<"  "<<middleName[0]<<"  "<<lastName[0]<<endl; 


    return 0;
}
