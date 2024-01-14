//the program tokenizes a line of text
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){

	string input;
	
	cout<<"please enter a line of text"<<endl;
	getline(cin,input);
	
	istringstream iss(input);
	string token;
	
	cout<<"tokens:"<<endl;
	while(iss>>token)
	{
		cout<<token<<endl;
    return 0;
	}
	
