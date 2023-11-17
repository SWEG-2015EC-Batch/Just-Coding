1) Problem analysis
   
   1.1) Input: 

workingHours, bonusRatePerHour, baseSalary
   
   1.2) output:

 grossSalary,bonusPayment,net salary 
   
   1.3) process
   - Variable declaration 
   - Defining pension and tax as constant 
   - Read the input data
   - Calculate grossSalary, bonusPayment,net salary 
   - Print the outputs 

2) Design the program

  2.1) Variable declaration (what and how?):

 float workingHours, bonusRatePerHour, baseSalary

   2.2) Constant definition (what and how?)

    const float pensionRate = 0.05;

    const float taxRate = 0.15;

   2.3) Reading input data (how?) 

    cout << "Please enter working hours: ";

    cin >> workingHours;

    cout << "Please enter bonus rate per hour: ";

    cin >> bonusRatePerHour;

    cout << "Please enter base salary: ";

    cin >> baseSalary;

   2.4) Perform operation (how?)

    float grossSalary = (workingHours * bonusRatePerHour) + baseSalary;

    float bonusPayment = grossSalary - baseSalary;

    float pension = grossSalary * pensionRate;

    float tax = grossSalary * taxRate;

    float netSalary = grossSalary - pension - tax + bonusPayment;

   2.5) Print the outputs (how?)
 
    cout << "Gross Salary: " << grossSalary<<"$"<< endl;

    cout << "Bonus Payment: " << bonusPayment<<"$"<< endl;

    cout << "Net Salary: " << netSalary<<"$"<< endl;

