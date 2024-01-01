Step 1: Start

2: Initialize variables float gross_salary, overtime_bonus_rate, pension, income_tax, bonus_payment, overtime_payment, and net_salary and int worked_hrs

3: Prompt the user to enter gross salary

4: Read gross salary

5: Prompt the user to enter worked hours

6: Read worked hours

7: Prompt the user to enter overtime bonus rate

8: Read overtime bonus rate

9: Calculate pension as gross_salary * 0.07

10: Calculate overtime_payment = (worked_hrs - 40) * overtime_bonus_rate

11: Check If gross_salary <=200, set income_tax = 0

If gross_salary >200 and <=600, calculate income_tax as gross_salary * 0.1

If gross_salary > 600 and <= 1200, calculate income_tax as gross_salary * 0.15

If gross_salary > 1200 and <= 2000, calculate income_tax as gross_salary * 0.2

If gross_salary > 2000 and < 3500, calculate income_tax as gross_salary * 0.25

If gross_salary >= 3500, calculate income_tax as gross_salary * 0.3 12: Calculate net_salary = (gross_salary - pension - income_tax) + overtime_payment

13: Print "Net salary = " followed by the value of net_salary

14: End