#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    int largeFreq = 0;
    char largeChar;

    int smallFreq = str.length();
    char smallChar;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > largeFreq)
        {
            largeFreq = freq[i];
            largeChar = (char)i;
        }

        if (freq[i] > 0 && freq[i] < smallFreq)
        {
            smallFreq = freq[i];
            smallChar = (char)i;
        }
    }

    cout << "Character with large frequency is: " << largeChar << endl;
    cout << "Character with smallest frequency is: " << smallChar << endl;

    return 0;
}
