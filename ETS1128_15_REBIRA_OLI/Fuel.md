1)Problem alalysis
1.1) input
•	capacity in gallons of an automobile fuel tank
•the number of mile per gallons the automobile can be driven
1.2) output
•	the number of miles the automobile can be driven without refuelling
1.3) process
•	declare a variable
•	read input
•	calculate the miles the automobile can be driven without refuelling
•	print the result (miles the automobile can be driven without refuelling)
2) program design
  2.1) declare variable
	int fueltank, milespergallons, result;
  2.2) read input
	cout<<"enter the capacity in gallons of an automobile fuel tank:";

cin>>fueltank;

cout<<"Enter the mile per gallons the automobile can be driven:";

cin>>milespergallons;
  2.3) calculating the miles the automobile can be driven without refuelling
	result=fueltank*milespergallons;
  2.4) print the result
	cout<<"The automobile can be drived without refuelling"<<result<<"miles:";
