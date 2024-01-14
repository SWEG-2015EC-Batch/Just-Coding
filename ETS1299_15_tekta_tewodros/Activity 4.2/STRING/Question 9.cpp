// A Program to store and print the names of two favorite television programs
#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char program1[50]="Friends";
    char program2[50];

    strcpy(program2,"Breaking Bad");

     cout << "First Program: " << program1 << endl;

     cout << "Second Program: " << program2 << endl;
} 
return 0;
}