
#include<iostream>
using namespace std;
int main()
{
	double balance[5]={1000.0, 2.0, 3.4,17.0, 50.0};
	double *bal=&balance[0];
	int arr[3][4]={{10,11,12,13}, {20,21,22,23}, {30,31,32,33}};
	int *ptr=&arr[0][0];
	
	//printing address
	cout<<"The address of the first array element is as follows."<<endl;
	for(int i=0; i<5; i++){
	
	cout<<"the address of element"<<i+1<<":"<<balance+i<<endl;
	
	
	}
	cout<<"\nthe address of each array element in array2 is as follows."<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
		cout<<"The address of element row "<<i+1<<" and column "<<j+1<<":"<<*(arr+i)+j<<endl;	
		}
	
	}
	//printing array elements using pointer instead of array index
	cout<<"The elements of array1 are as follows."<<endl;
		for(int i=0; i<5; i++)
		{
	
	cout<<"Element "<<i+1<<":"<<*(balance+i)<<endl;
		}
	cout<<"\nThe elements of array2 are as follows."<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
		cout<<"element at row "<<i+1<<" and column "<<j+1<<":"<<*(*(arr+i)+j)<<endl;	
		}
	
	}
	//printing array elements using another pointer
		cout<<"\nThe elements of array1 are as follows."<<endl;
		for(int i=0; i<5; i++)
		{
	
	cout<<"Element "<<i+1<<":"<<*(bal+i)<<endl;
		}
	cout<<"\nThe elements of array2  are as follows."<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
		cout<<"element at row "<<i+1<<" and column "<<j+1<<":"<<(*(ptr+i)+j)<<endl;	
		}
	
	}
	
}