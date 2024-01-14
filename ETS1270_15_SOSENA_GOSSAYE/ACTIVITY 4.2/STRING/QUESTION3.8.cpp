//program that display string in upper and lower case 
#include<iostream>
#include<string>

using namespace std;
int main(){
	//string in upper and lower case working question 8
	string input;
	
	cout<<"Enter a string"<<endl;
	getline(cin,input);
	
	cout<<"string in uppercase is:"<<endl;
	for(int i=0; i<input.length(); i++)
	{
	 putchar(toupper(input[i]));
	}
	
	cout<<"\nstring in lowercase is:"<<endl;
	for(int i=0; i<input.length(); i++)
	{
	 putchar(tolower(input[i]));
	}
return 0;
}
