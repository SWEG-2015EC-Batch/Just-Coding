# 1 Problem Description 
Program that performs simple calculator that perform basic arithmetic operation
## 1.1 Input(s):
  -	Numbers: n1 & n2 
  -	Operators
## 1.2 Output(s): 
  -	Result
## 1.3 Operation(s):
  -	Reading two numbers and the operator
  -	Calculating Result:
     	Result=n1 + n2 (If user choose sum)
    	Result=n1 - n2 (If user choose subtraction)
    	Result=n1 * n2 (If user choose multiplication)
    	Result=n1 / n2 (If user choose division)
  -	Accept numbers (1-9) If the user want to continue 
    	If the user type 0 : exit the program

# 2 Pseudocode
step-1: Start
step-2: Read operator 
step-3: Read num1
step-4: Read num2
step-5: If operator = + then
             Result = num1 + num2
             print Result
             end if
           else if operator = - then
             Result = num1 - num2
             print Result
             end if
           else if operator = * then
                Result = num1 * num2
             print Result
             end if
             else if operator = / then
                  if num2<--0 then
                     print "Undefined!  since a number can't be divided by 0"
                     print "Enter a valid numbers: "
                  Read num2 then
             Result = num1 / num2
             print Result
             end if
           else goto step 3
step 6: read operator
step 7: print "Enter: - Any number(1-9) to continue or - \"0\" to stop: "
step 8: read operator
step 8: if operator != 0 then
     goto step 3
   End if
step 7: else print Result
step 8: end

