#include <iostream>

using namespace std;

int main() {
    int n = 8;  // Adjust this value to change the size of the pattern

    // Loop to print the upper half of the pattern
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << "   ";
        }

        // Print characters in descending order
        for (int j = n - 1; j >= i; j--) {
            cout << char('A' + j - i) << "  ";
        }

        // Print characters in ascending order
        for (int j = i + 1; j < n; j++) {
            cout << char('A' + j - i) << "  ";
        }

        // Move to the next line
        cout << endl;
    }

    // Loop to print the lower half of the pattern
    for (int i = 1; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "   ";
        }

        // Print characters in descending order
        for (int j = n - 1; j >= n - i - 1; j--) {
            cout << char('A' + j - (n - i - 1)) << "  ";
        }

        // Print characters in ascending order
        for (int j = n - i; j < n; j++) {
            cout << char('A' + j - (n - i - 1)) << "  ";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
