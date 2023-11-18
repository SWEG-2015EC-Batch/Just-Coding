//this is a program that calculates the value of x^y 

#include<iostream>

#include<cmath>

using namespace std;

int main()

{
float x, y, result;
	
cout<<"Enter the value of x:";
	
cin>>x;

cout<<"Enter the value of y:";

cin>>y;

result= pow(x,y);

cout<<result;

return 0;

}
