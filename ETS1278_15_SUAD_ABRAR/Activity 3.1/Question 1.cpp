#include<iostream>
using namespace std;

int main()
{
    float gross_salary, overtime_bonus_rate, pension, income_tax, bonus_payment, overtime_payment, net_salary;
    int worked_hrs;
    float pension_rate = 0.07;
    
    cout << "Enter gross salary: ";
    cin >> gross_salary;
    
    cout << "Enter worked hrs: ";
    cin >> worked_hrs;
    
    cout << "Enter overtime bonus rate: ";
    cin >> overtime_bonus_rate;
    
    pension = gross_salary * pension_rate;
    overtime_payment = (worked_hrs - 40) * overtime_bonus_rate;
    
    if(gross_salary <= 200){
        income_tax = 0;
    }
    else if(gross_salary > 200 && gross_salary <= 600){
        income_tax = gross_salary * 0.1;
    }
    else if(gross_salary > 600 && gross_salary <= 1200){
        income_tax = gross_salary * 0.15;
    }
    else if(gross_salary > 1200 && gross_salary <= 2000){
        income_tax = gross_salary * 0.2;
    }
    else if(gross_salary > 2000 && gross_salary < 3500){
        income_tax = gross_salary * 0.25;
    }
    else{
        income_tax = gross_salary * 0.3;
    }
    
    net_salary = (gross_salary - pension - income_tax) + overtime_payment;
    
    cout << "Net salary = " << net_salary << endl;
    
    return 0;
}
