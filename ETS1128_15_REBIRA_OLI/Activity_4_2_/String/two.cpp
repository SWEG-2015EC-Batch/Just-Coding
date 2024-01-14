//Design a program to check either the word is palindrome or not using loop.

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char word[100];
    int length=0;
    bool Palindrome=true;

    cout<<"Please enter any word: ";
    cin>>word;

    length=strlen(word);
    
    char reverse[length];
    int i=0;
    while(i<length){
        reverse[i]=word[length-1];
        i++;
        length--;
    }
    
    for(int i=0; i<length; i++){
        if(reverse[i]!=word[i]){
            Palindrome=false;
            break;
        }
    }

    if(Palindrome){
        cout<<"The word is Palindrome";
    }else{
        cout<<"The word is not Palindrome";
    }
    
    return 0;
}
