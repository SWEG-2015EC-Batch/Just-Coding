//the program checks if the two arrays are identical or not.
#include<iostream>
using namespace std;
int main(){
	string comment;
	int arr1[5]={1,2,3,4,5}, arr2[5]={1,2,3,4,5};
	
	for(int i=0; i<5; i++){
			
		if(arr1[i]==arr2[i]){
			comment="The two arrays have same element.";
			
		}else{
			comment="The two arrays have different elements.";
		}
			
		}
	cout<<comment;
	return 0;
}
