#include<iostream>
using namespace std;
int main(){
	int temp[8], total=0, average;
 for(int i=0; i<8; i++)
 {
	cout<<"please enter number"<<i+1<<endl;
	cin>>temp[i];
		
	total=total+temp[i];
	average= total/8;
		
	}
	
	cout<<"the numbers are:"<<endl;
	
	for(int j=0; j<8; j++){
	
		cout<<temp[j]<<" ";
	}
	cout<<"\ntheir average is:"<<average;*/
    return 0;
}
