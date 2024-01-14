//A Program to print resulting data elements in table form
#include<iostream>
using namespace std;

int main() {
    int row, column;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;

     if (row == column) {

    int first[row][column];
    int second[row][column];
    int result[row][column];

    cout << "\nEnter elements for the first array: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Enter element[" << i << "][" << j << "]: ";
            cin >> first[i][j];
        }
    }

    cout << "\nEnter elements for the second array: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Enter element[" << i << "][" << j << "]: ";
            cin >> second[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }

       cout << "\nResulting data elements:" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    } else {

        cout << "Invalid input. Please input equivalent rows and columns in order to get a result. " << endl;
    }

    return 0;
}