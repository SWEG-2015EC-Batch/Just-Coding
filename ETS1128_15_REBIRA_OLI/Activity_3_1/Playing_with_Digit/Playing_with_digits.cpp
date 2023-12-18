#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 
int main(){
   //a & b
   int num0,counter=0,lastDigit,factorial=1,Divisors=0,fact=0,temp=0,temp2=0,reverse=0,sum=0,even=1,swap=0,arm,freq[10]={0};
   char choice;
    cout<<"Enter any integer number: ";
    cin>>num0;

    cout<<"What do you want to check/perform?"<<"\n \t Please choose a letter of your choice which contain an oppration you want to perform: "<<endl;
    cout<<"Type: "<<" 'A' - For the reverses of the number"<<endl;
    cout<<" 'B' - For the number of digits"<<endl;
    cout<<" 'C' - For the sum of the digits"<<endl;
    cout<<" 'D' - For the product of even digits"<<endl;
    cout<<" 'E' - To get the first and the last digit of the number and their sum"<<endl;
    cout<<" 'F' - For Swapping the first and the last digit of the number"<<endl;
    cout<<" 'G' - To check whether a number is palindrome or not"<<endl;
    cout<<" 'H' - To find the frequency of each digit in a given integer"<<endl;
    cout<<" 'I' - To check if a number is Armstrong or not"<<endl;
    cout<<" 'J' - To check if a number is strong or not"<<endl;
    cout<<" 'K' - To check whether a number is Perfect number or not"<<endl;
    cin>>choice;
    
//Counting the number of digits
int num=num0;
    while(num>0){
        num/=10;
        counter++;
    }
//checking if the number is perfect or not
int num3=num0;
for (int n=1;n<num3;++n){
        if(num3%n==0){
        Divisors+=n;
        }
    }

//Finding the reverse, the sum of the digits
int num1=num0;
    while(num1>0){
        temp=(num1%10);
        //to find the product of the even numbers
        if (temp%2==0){
            even*=temp;
        }
        //checking the frequency of each digit
        freq[temp]++;
        //cheching whether it is armstrong or not
        arm=arm+pow(temp,counter);
        //Checking the factorials
        factorial=1;
        for(int i=1;i<=temp;++i){
            factorial *=i ;
        }
        //sum of the reverse
        reverse=(reverse*10)+temp;
        num1/=10;
        //Finding the sum of the digits
        sum+=temp;
        fact+=factorial;
    }
    

    //finding the last digit
    lastDigit=num0%10;
    //the sum of the first and the last digit
    lastDigit+temp;

    //Finding number swapping the first and last digits
    int num2=num0;
        temp2=(num2%10);
        swap=(temp2*pow(10,counter-1));
        num2=num2/10;
        temp2=static_cast<int>(num2 % static_cast<int>(pow(10, counter-2)));
        swap=swap+(temp2*10)+temp;

//The outputs
cout<<"The ";
switch (choice){
    case 'A' :
    case 'a' : 
        cout<<" reverse of the number is: "<<reverse<<endl;
    break;
    case 'B' :
    case 'b' :
        cout<<" number has "<<counter<<" digits"<<endl;
    break;
    case 'C' :
    case 'c' :
        cout<<" sum of digits is: "<<sum<<endl;
    break;
    case 'D' :
    case 'd' :
        cout<<" product of the even numbers is: "<<even<<endl;
    break;
    case 'E':
    case 'e':
        cout<<" first digit: "<<temp<<" the last digit: "<<lastDigit<< " and their sum is: "<<lastDigit+temp<<endl;
    break;
    case 'F': 
    case 'f':
        cout<<" When the first and last digigs are swapped: "<<swap<<endl;
    break;
    case 'G':
    case 'g':
     if (reverse==num0){
        cout<<" numbers are Palindrome since their reverse and original number are the same"<<endl;
    }else{
        cout<<" numbers are not Palindrome since their reverse and the original number is not the same"<<endl;
    }
    break;
    case 'H': 
    case 'h':
        cout<<" frequency of each digits is as follows: "<<endl;
        cout << setw(10) << "Digit " << setw(10) << " Frequency" << endl;
    for (int i = 0; i <= 9; ++i) {
        cout << setw(8) << i << setw(8) << freq[i] << endl;
    }
    break;
    case 'I':
    case 'i':
    if (arm==num0){
        cout<<" number is Armstrong(The sum of each digit raised to the power of the number of digits is equals the original number)"<<endl;
    }else{
        cout<<" number is not an Armstrong(The sum of each digit raised to the power of the number of digits is not equals the original number)"<<endl;
    }
    break;
    case 'J':
    case 'j':
     if(fact==num0){
        cout<<" number is Strong(the sum of the factorial of the digits is equal to the number itself)"<<endl;
    }else{
        cout<<" number is not strong(the sum of the factorial of the digits is not equal to the number itself)"<<endl;
    }
    break;
    case 'K':
    case 'k':
    if(Divisors==num0){
        cout<<" number is Perfect number(sum of its divisors minus the number itself equals the number)"<<endl;
    }else{
        cout<<" number is not a Perfect number(sum of its divisors minus the number itself is not equal to the number)"<<endl;
    }
    break;

default: cout<<"Please enter a valid letter of your choice (A-K)";
         cin>>choice;
    break;
}

return 0;
}
