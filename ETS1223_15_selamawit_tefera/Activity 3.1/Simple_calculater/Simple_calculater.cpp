//simple calculator
#include<iostream>
using namespace std; 
int main()
{
	float num1,num2, iscontinue;
	char operation;
	cout<<"**our calculator**"<<endl;	
	do{
		
	cout<<"please enter the first number: ";
	cin>>num1;
	cout<<"please enter the operation: ";
	cin>>operation;
	cout<<"please enter the second number: ";
	cin>>num2;

	switch (operation){
		
		 case '-':cout<<" their difference is:"<<num1<<" "<<operation<<" "<<num2<<" = "<<num1-num2<<endl;break;
		 case '+': cout<<"their sum is:"<<num1<<" "<<operation<<" "<<num2<<" = "<<num1+num2<<endl;break;
		 case '*':cout<<"their multiple is:"<<num1<<" "<<operation<<" "<<num2<<" = "<<num1*num2<<endl;break;
		 case '/': 
	 if(num2!=0)
	{cout<<"their factor is:"<<num1<<" "<<operation<<" "<<num2<<" = "<<num1/num2<<endl;break;
	 }
	else 
	{cout<<"error division by zero";
         }
		       
		 case '%' :
		 bool isnum1int, isnum2int;
		  isnum1int=((int)num1==num1);
		  isnum2int=((int)num2==num2);
		  
		  if(isnum1int && isnum2int)
		  
		  { 
		  cout<<"their remainder is:"<<num1<<" "<<operation<<" "<<num2<<" = "<<(int)num1%(int)num2<<endl;break;
		  }
		  
	default : cout<<"invalid input";	 	
		 }
		 
		 
		 cout<<"Enter 1 to continue or 0 to stop: ";
		
		 cin>>iscontinue;
		 
		 }while(iscontinue);
		 
		 return 0;	 
	
	}
	
