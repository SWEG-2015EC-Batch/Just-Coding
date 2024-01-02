problem analysis

1.1) Input: a letter

1.2) output: converted letter (to its upper case or lower case equivalent)

1.3) process

Variable declaration
Read Input (a letter)
Convert the letter to its uppercase or lowercase equivalent according to the input
print the converted letter
Design the program

2.1) Variable declaration

  char letter;
2.2) Read input

 cout<<"please enter a letter";
 cin>>a letter
2.3) convert the case if (islower(letter))

{

   char upperCaseLetter = toupper(letter);

    cout << "Upper case equivalent " << upperCaseLetter <<endl;

} 
else if (isupper(letter))

{

    char lowerCaseLetter = tolower(letter);

    cout << "Lower case equivalent " << lowerCaseLetter <<endl;

} 
else {

    cout << "Invalid input please enter a letter" <<endl;

    }