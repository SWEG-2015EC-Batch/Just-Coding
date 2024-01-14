//A Program to display consonant and vowel counter in a string 
#include<iostream>
#include<string>
using namespace std;
int main(){

        string word;
        cout<<"please enter a string"<<endl;
        cin>>word;

    int consonantCount=0, vowelCount=0;

    for(int i=0; i<word.length(); i++)
        {
                    char ch =tolower(word[i]);

            if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
                {
                    vowelCount++;                
                }
                else
                {
                        consonantCount++;
                }
        }
cout<<"the string contains "<<vowelCount<<" vowel letters"<<endl;
cout<<"the string contains "<<consonantCount<<" consonant letters"<<endl;

  return 0;
}