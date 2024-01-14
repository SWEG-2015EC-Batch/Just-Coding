// A Program to inputs a line of text, and tokenizes an application 
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char word[100];

    cout << "Enter your sentence:" << endl;
    cin.getline(word, 100);

    for (int i = 0; word[i] != '\0'; i++) {

        if (word[i] == ' ') {
            cout << endl;
        } else {
            cout << word[i];
        }
    }

    return 0;
}