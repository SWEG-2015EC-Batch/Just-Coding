//A Program to input a line of text and output the text twice, once in all uppercase
and once in all lowercase letters.

#include<iostream>
#include<cstring>
#include<cctype>  
using namespace std;

int main() {
    char text[100];

    cout<<"Enter your text"<<endl;
    cin.getline(text,100);

    char lower[100];
    char upper[100];

    cout << "Lowercase text:" << endl;

    for(int i=0;text[i]!='\0';i++){

      lower[i]=tolower(text[i]);
      cout<<lower[i];
    }

    cout<<endl;
    cout << "Uppercase text:" << endl;

    for(int i=0;text[i]!='\0';i++){

      upper[i]=toupper(text[i]);
      cout<<upper[i];
    }

    cout<<endl;

    return 0;
}
 