#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char pass[5] = "1234";
    char trypass[5];
    const int maxTrials = 3;
    int trials = 0;

    while (trials < maxTrials) {
        cout << "Enter your password: ";
        cin.getline(trypass, 5);

        
        bool accessGranted = true;
        for (int i = 0; i < 4; i++) {
            if (trypass[i] != pass[i]) {
                accessGranted = false;
                break; 
            }
        }

        if (accessGranted) {
            cout << "Access Granted" << endl;
            break;  
        } else {
            cout << "Access Denied. Try again." << endl;
            trials++;
        }
    }

    if (trials == maxTrials) {
        cout << "Maximum trials reached. Access Denied." << endl;
    }

    return 0;
}
