//Write a program that read a string and count number of vowels and consonants alphabet present in a string.

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char word[100];
    int vowelcount = 0,Count=0;

    cout << "Enter any word: ";
    cin.getline(word, 100);

    for (int i = 0; word[i] != '\0'; i++) {
        switch (word[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowelcount++;
                break;
        }
    }

    cout << "Number of vowels is: " << vowelcount << endl;
    cout << "Number of consonants is: ";

    for (int i = 0; word[i] != '\0'; i++) {
        if ((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')) {
            Count++;
        }
    }
    cout<<Count-vowelcount;

    return 0;
}
