//A Program that puts names in alphabetical order
#include<iostream>
#include <string>
using namespace std;

int main()
{

    const int MAX_NAMES = 25;
    string names[MAX_NAMES];
    int numNames = 0;

    cout << "Enter names (type 'stop' to finish):\n";

    while (numNames < MAX_NAMES)
    {
        getline(cin, names[numNames]);
        if (names[numNames] == "stop")
        {
            break;
        }
        numNames++;
    }

    for (int i = 0; i < numNames - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < numNames; j++)
        {
            if (strcmp(names[j].c_str(), names[minIndex].c_str()) < 0)
            {
                minIndex = j;
            }
        }
        string temp = names[i];
        names[i] = names[minIndex];
        names[minIndex] = temp;
    }

    cout << "\nNames in alphabetical order:\n";

    for (int i = 0; i < numNames; i++){

        cout << names[i] << "\n";
    }

    return 0;
	}
 