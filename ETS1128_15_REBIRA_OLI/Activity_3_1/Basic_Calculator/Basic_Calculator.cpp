#include<iostream>
using namespace std;

int main(){
    float num1,num2, Result,n;
    char operation;

    do{
        cout<<"What operation you want to perform?"<<endl;
        cout<<"\t Type \"+\" for addition"<<endl<<"\t Type \"-\" for subtarction"<<endl;
        cout<<"\t Type \"*\" for multiplication"<<endl<<"\t Type \"/\" for addition"<<endl;
        cin>>operation;

        cout<<"Enter any number you want: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;

        switch (operation){
            case '+': Result=num1+num2;
            cout<<"The sum of the two given numbers is: "<<Result<<endl;
            break;
            case '-': Result=num1-num2;
            cout<<"The subtraction of the two given numbers is: "<<Result<<endl;
            break;
            case '*': Result=num1*num2;
            cout<<"The multiplication of the two given numbers is: "<<Result<<endl;
            break;
            case '/': 
            if(num2==0){
                cout<<"Undefined!  since a number can't be divided by 0";
                cout<<"Enter a valid numbers: ";
                cin>>num2;
            }
            Result=num1/num2;
            cout<<"The division of the two given numbers is: "<<Result<<endl;
            break;

        default:
        cout<<"Please enter a valid operation: ";
        cin>>operation;
        break;
        }

        cout<<"Enter: \n - Any number(1-9) to continue or \n - \"0\" to stop: ";
        cin>>n;
        if (n==0){
            break;
        }
    }   
    while(true); 

    return 0;
}