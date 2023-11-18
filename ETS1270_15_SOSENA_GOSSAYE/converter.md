1)Problem analysis
  1.1) input
•	character value
  1.2) output
•	changed character value
  1.3) process
•	variable declaration
•	read input
•	use case changing functions from to ctype standard library i.e toupper(char) and tolower(char) functions
•	print output
2) program design
•	variable declaration 
char letter;
•	read input
cout<<"Enter a letter:";

cin>>letter;
•	perform operations by using functions in the ctype standard library and print output
if (islower(letter)){
cout<<"upper case equivallent :"<<(char)toupper (letter)<<endl;
}
else if (isupper(letter)){
cout<<"lowercase equivallent:"<<(char)tolower(letter)<< endl;	
}
else{
	cout<<"invalid input.please enter a letter"<<endl;
