/*Given the 1D – array declarations below,
double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0}
int arr[3][4] = { { 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 }}
a. Print the address of each array elements
b. Print the array elements using
    ✓ pointer instead of the array index
    ✓ Using an other pointer*/


#include <iostream>
using namespace std;

int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    
    cout<<"\nAddresses of elements in 'balance' array:"<<endl;
    for (int i=0; i<5; i++) {
        cout<<"Address of balance[" <<i<<"] = "<<&balance[i]<<endl;
        }
        cout<<"\nAddresses of elements in 'arr' array:" << endl;

        for (int i=0; i<3; i++) {
            for (int j=0; j<4; j++) {
                cout<<"Address of arr["<<i<<"]["<<j<<"] = "<<&arr[i][j]<<endl;
                }
        }
        cout<<endl;


//Here’s a code to print the array elements using pointer instead of the array index

cout << "\nElements in 'balance' array (using pointers):" << endl;
for (int i = 0; i < 5; i++) {
cout << "*(balance + " << i << ") = " << *(balance + i) << endl;
}
cout << "Elements in 'arr' array (using pointers):" <<endl;
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 4; j++) {
cout << "*(*(arr + " << i << ") + " << j << ") = " << *(*(arr + i) + j) << endl;
}
}
cout<<endl;


//Here is a code to print the array elements using an other pointer
cout << "\nElements in 'balance' array (using pointer to pointer):" << endl;
double* ptr = balance;
for (int i = 0; i < 5; i++) {
std::cout << "*(ptr + " << i << ") = " << *(ptr + i) << endl;
}
cout << "Elements in 'arr' array (using pointer to pointer):" << endl;
int** ptr2 = reinterpret_cast<int**>(arr);
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 4; j++) {
cout << "*(*(ptr2 + " << i << ") + " << j << ") = " << *(*(ptr2 + i) + j) << endl;
}
}

return 0;
}

