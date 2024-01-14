//A Program that give the product of row elements and sum of column elements 
#include<iostream>
using namespace std;
int main(){
int rows,cols;
int arr[rows][cols];

cout<<"enter the number of the row of matrix: "<<endl;
cin>>rows;
cout<<"enter the number of column of matrix"<<endl;
cin>>cols;

cout<<"enter the elements of the matrix: "<<endl;

for(int i=0; i<rows; i++)
{
	for(int j=0; j<cols; j++)
	{
		cin>>arr[i][j];
	}

}	

cout<<"the matrix elements are:"<<endl;
for(int i=0; i<rows; i++)
{
	for(int j=0; j<rows; j++)
	{
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
	}	
	
	for(int i=0; i<rows; i++)
	{
		int product=1;
       for(int j=0; j<cols; j++)
	   {
	
       	product*=arr[i][j];
	   }
	cout<<"the product of elements of row "<<i+1<<": "<<product<<endl;
	}
	for(int i=0; i<cols; i++){
		int sum=0;
		for(int j=0; j<rows; j++)
		{
	    sum+=arr[j][i];		
		
		}
		cout<<"the sum of elements of column "<<i+1<<": "<<sum<<endl;
	}
return 0;	
}	
	

 