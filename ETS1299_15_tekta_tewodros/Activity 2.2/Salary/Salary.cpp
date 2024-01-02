//Print employee's gross_salary, bonus salary and net salary 
#include <iostream>
using namespace std;

int main(){ 
float workingHours, bonusRatePerHour, baseSalary;
    const float pensionRate = 0.05;
    const float taxRate = 0.15;

    cout << "Please enter working hours: ";
    cin >> workingHours;
    cout << "Please enter bonus rate per hour: ";
    cin >> bonusRatePerHour;
    cout << "Please enter base salary: ";
    cin >> baseSalary;
    float grossSalary = (workingHours * bonusRatePerHour) + baseSalary;
    float bonusPayment = grossSalary - baseSalary;
    float pension = grossSalary * pensionRate;
    float tax = grossSalary * taxRate;
    float netSalary = grossSalary - pension - tax + bonusPayment;
    cout << "Gross Salary: " << grossSalary<<"$"<< endl;
    cout << "Bonus Payment: " << bonusPayment<<"$"<< endl;
    cout << "Net Salary: " << netSalary<<"$"<< endl;

    return 0;
}