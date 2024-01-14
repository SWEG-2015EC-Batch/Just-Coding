// A Program to find the frequency of vowel, consonant, digit and special character
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char word[100];
    int countV = 0;
    int countC = 0;
    int countS = 0;
    int countD = 0;


    cout << "Please enter your characters:" << endl;
    cin.getline(word, 100);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            countV++;
        }else if (word[i] == ' ' )  {
            continue;
        } else if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) {
            countC++;
        }else if (word[i] >= '0' && word[i] <= '9')  {
            countD++;
        } else  {
            countS++;
        }
    }

    cout << "Number of vowels: " << countV << endl;
    cout << "Number of consonants: " << countC << endl;
    cout << "Number of special characters: " << countS << endl;
    cout << "Number of digits: " << countD << endl;

    return 0;
}
 