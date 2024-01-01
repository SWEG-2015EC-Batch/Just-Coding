Problem analysis

Input:

workingHours, bonusRatePerHour, baseSalary

Output:

grossSalary,bonusPayment,net salary

1.3) process

Variable declaration
Defining pension and tax as constant
Read the input data
Calculate grossSalary, bonusPayment,net salary
Print the outputs
Design the program

2.1) Variable declaration (what and how?):

Float workingHours, bonusRatePerHour, baseSalary
2.2) Constant definition (what and how?)

Const float pensionRate = 0.05;

Const float taxRate = 0.15;
2.3) Reading input data (how?)

Cout << “Please enter working hours: “;

Cin >> workingHours;

Cout << “Please enter bonus rate per hour: “;

Cin >> bonusRatePerHour;

Cout << “Please enter base salary: “;

Cin >> baseSalary;
2.4) Perform operation (how?)

Float grossSalary = (workingHours * bonusRatePerHour) + baseSalary;

Float bonusPayment = grossSalary – baseSalary;

Float pension = grossSalary * pensionRate;

Float tax = grossSalary * taxRate;

Float netSalary = grossSalary – pension – tax + bonusPayment;
2.5) Print the outputs (how?)

Cout << “Gross Salary: “ << grossSalary<<”$”<< endl;

Cout << “Bonus Payment: “ << bonusPayment<<”$”<< endl;

Cout << “Net Salary: “ << netSalary<<”$”<< endl;