//the program erases nonalphabet character from a string.
#include<iostream>
#include<string>
using namespace std;
int main(){

  string word;
	cout<<"please enter a string"<<endl;
	cin>>word;
	
	for(int i=0; i<word.size(); i++)
	{
		if(word[i]<'A'||word[i]>'Z' && word[i]<'a'||word[i]>'z')
		{
			word.erase(i,1);
			i--;
		}
	}
	cout<<word;
return 0;
}
