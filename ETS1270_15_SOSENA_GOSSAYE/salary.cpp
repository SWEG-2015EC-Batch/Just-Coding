//this is a program that calculates grooss salary, net salary and bonus payement

#include<iostream>

#include<string>

using namespace std;

int main()

{
string name;

double WeeklyWorkingHours, BonusRate, BaseSalary, GrossSalary, PensionPayment, TaxPayment, NetSalary, BonusPayment;

const double PensionRate=0.05;

const double TaxRate=0.15;
	
cout<<"Enter your name:";
	
cin>>name;

cout<<"Enter weekly working hours:";

cin>>WeeklyWorkingHours;

cout<<"Enter bonus rate per hour:";

cin>>BonusRate;

cout<<"Enter base salary:";

cin>>BaseSalary;

GrossSalary=BaseSalary+(WeeklyWorkingHours*BonusRate);

PensionPayment=GrossSalary*PensionRate;

TaxPayment=GrossSalary*TaxRate;

NetSalary=GrossSalary-PensionPayment-TaxPayment;

BonusPayment=WeeklyWorkingHours*BonusRate;

cout<<"your Gross Salary is:"<<GrossSalary<<endl;

cout<<"your Net Salary is:"<<NetSalary<<endl;

cout<<"your Bonus Payment is:"<<BonusPayment<<endl;

return 0;

}
