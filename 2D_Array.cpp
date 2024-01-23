/*Create a 2D array and string that stores N person height, weight and BMI and full name respectively. 
Write a program to read the height, weight and then calculate the BMI using pointer. 
The program should print the record in tabular format using pointer operation.*/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
    const int MAX_N = 100, MAX_NAME_LENGTH = 50;

    struct Person {
    double height, weight, bmi;
    char name[MAX_NAME_LENGTH];};
    void calculateBMI(Person* person) {
        
        person->bmi = person->weight / ((person->height / 100.0) * (person->height / 100.0)); }
    void printRecords(const Person* people, int numPeople) {
        cout << "       Name         |  Height |Weight|   BMI " << endl;
        
        for (int i = 0; i < numPeople; i++) {
    const Person* person = &people[i];
    
    cout << left << setw(18) << person->name;
    cout << right << setw(10) << person->height;
    cout << right << setw(10) << person->weight;
    cout << right << setw(13) << person->bmi <<endl;
    }
    }

int main() {
    int numPeople;
    
    cout << "Enter the number of people: ";
    cin >> numPeople;
    Person people[MAX_N];
    
    for (int i = 0; i < numPeople; i++) {
        Person* person = &people[i];
    cout << "\nPerson #" << i + 1 << endl;
    cout << "Enter full name: ";
    cin.ignore(); // Ignore the newline character from previous input
    cin.getline(person->name, MAX_NAME_LENGTH);
    cout << "Enter height (in cm): ";
    cin >> person->height;
    cout << "Enter weight (in kg): ";
    cin >> person->weight;
    calculateBMI(person);
    }
     printRecords(people, numPeople);
     
return 0;
}