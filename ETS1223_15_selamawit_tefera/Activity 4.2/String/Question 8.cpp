#include <iostream>
#include <cctype>
using namespace std;
int main()
{

    string text;
    cout << "Please enter a line of text: ";
    getline(cin, text);

    cout << "Text all Uppercase: ";
    for (int i = 0; i < text.length(); ++i)
    {
        text[i] = toupper(text[i]);
        cout << text[i];
    }
    cout <<endl<<"Text all Lowercase: ";
    for (int i = 0; i < text.length(); ++i)
    {
        text[i] = tolower(text[i]);
        cout << text[i];
    }
return 0;
}
