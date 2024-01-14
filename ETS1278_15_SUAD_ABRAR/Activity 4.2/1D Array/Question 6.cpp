//A Program to display even numbers in reverse order from list of numbers
#include<iostream>
using namespace std;
int main(){
	int evenNum[100], value, count=0;
	
	cout<<"Enter series of numbers(enter 0 to stop):"<<endl;
	while(true){
		cout<<"Enter a number: ";
		cin>>value;
		if(value==0){
			break;
		}
		if(value%2==0){
			evenNum[count]=value;
			count++;
		}
	}
	
	if(count==0){
		cout<<"No even numbers were entered."<<endl;
	}else{
		cout<<"Even numbers in reverse order are:"<<endl;
		for (int i=count-1;i>=0;i--){
			cout<<evenNum[i]<<" ";
		}
		
		cout<<endl;
	}
	
return 0;		
	
}
 
