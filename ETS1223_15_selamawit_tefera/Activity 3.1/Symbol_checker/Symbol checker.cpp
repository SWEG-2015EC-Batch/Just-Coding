//symbol checker
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
 char ch;
 cout<<"symbol checker"<<endl;
 cout<<"please enter any one character: ";
 cin>>ch;
 
 if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
 
 if(islower(ch)){
  cout<<"it is lower case letter";
  }
  
  else if(isupper(ch)){
   cout<<"it is upper case letter"; 
   } 
  }
  
  else if (ch>='0' && ch<='9'){

   if(ch%2==0){
    cout<<"it is even number";
    }
    else if(ch%2!=0){
     cout<<"it is odd number"; 
    }
   }
   else {
 cout<<"it is a special character";
        }
}  
