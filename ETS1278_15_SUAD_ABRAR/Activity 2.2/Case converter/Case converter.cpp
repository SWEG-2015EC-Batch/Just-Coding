//Case converter program 
#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
char letter;
cout<<"please enter a letter";
cin>>letter;
 if (islower(letter)) {
       char upperCaseLetter = toupper(letter);
        cout << "Upper case equivalent " << upperCaseLetter <<endl;
    } else if (isupper(letter)) {
        char lowerCaseLetter = tolower(letter);
        cout << "Lower case equivalent " << lowerCaseLetter <<endl;
    } else {
        cout << "Invalid input please enter a letter" <<endl;
        }

return 0;
}
 