#include<iostream>
using namespace std;

int main(){
    char character;

    cout<<"Enter any character you want to check: ";
    cin>>character;

    if (character>='A' && character<='Z'){
        if(character=='A' || character=='E' || character=='I'|| character=='O' || character=='U'){
            cout<<"The character \'"<<character<<"\' is Vowel and it is an uppercase";
        }else{
            cout<<"The character \'"<<character<<"\' consonant in uppercase form";
            }
    }else if(character>='a' && character<='z'){
        if(character=='a' || character=='e' || character=='i'|| character=='o' || character=='u'){
            cout<<"The character \'"<<character<<"\' Vowel in lowercase form";
        }else{
            cout<<"The character \'"<<character<<"\' consonant in lowercase form";
            }
    }else if(character>='0' && character<='9'){
        int num=character-'0';
        if(num%2==0){
            cout<<"The character \'"<<num<<"\' is even";
        }else{
            cout<<"The character \'"<<num<<"\' is odd";
        }
    }else{
            cout<<"The chararcter \'"<<character<<"\' is special character";
        }
        
    return 0;
}