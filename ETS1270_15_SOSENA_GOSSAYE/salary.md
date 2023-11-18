1)	Problem analysis
1.1)	Input
•	Name, weekly working hours, base salary, bonus rate
1.2)	Output
•	Gross salary, net salary, bonus payment
1.3)	Process
•	Declare a variable and initialize
•	Read input
•	Calculate pension payment, tax payment, gross salary, net salary, bonus payment
•	Print gross salary, net salary, bonus payment
2)	Program design
2.1) declare a variable and initialize
 String name;

double WeeklyWorkingHours, BonusRate, BaseSalary, GrossSalary, PensionPayment,     TaxPayment, NetSalary, BonusPayment;

const double PensionRate=0.05;

const double TaxRate=0.15;
2.2) read input
       cout<<"Enter your name:";
	
       cin>>name;

       cout<<"Enter weekly working hours:";

       cin>>WeeklyWorkingHours;

       cout<<"Enter bonus rate per hour:";

       cin>>BonusRate;

       cout<<"Enter base salary:";

       cin>>BaseSalary;
2.3) Calculate pension payment, tax payment, gross salary, net salary, bonus payment
             	       GrossSalary=BaseSalary+(WeeklyWorkingHours*BonusRate);
         PensionPayment=GrossSalary*PensionRate;
         
         TaxPayment=GrossSalary*TaxRate;
         
         NetSalary=GrossSalary-PensionPayment-TaxPayment;
         
         BonusPayment=WeeklyWorkingHours*BonusRate;
2.4)	print gross salary, net salary, bonus payment
cout<<"your Gross Salary is:"<<GrossSalary<<endl;

cout<<"your Net Salary is:"<<NetSalary<<endl;

cout<<"your Bonus Payment is:"<<BonusPayment<<endl;
