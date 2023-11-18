//this program converts a letter to its uppercase or lowercase equivallent

#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{

char letter;

cout<<"Enter a letter:";

cin>>letter;

if (islower(letter)){
cout<<"upper case equivallent :"<<(char)toupper (letter)<<endl;
}
else if (isupper(letter)){
cout<<"lowercase equivallent:"<<(char)tolower(letter)<< endl;	
}
else{
	cout<<"invalid input.please enter a letter"<<endl;
}

return 0;

}
