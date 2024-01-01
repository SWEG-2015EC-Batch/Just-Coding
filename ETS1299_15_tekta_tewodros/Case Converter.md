Problem analysis

Input: a letter

Output: converted letter (to its upper case or lower case equivalent)

1.3) process

Variable declaration
Read Input (a letter)
Convert the letter to its uppercase or lowercase equivalent according to the input
print the converted letter
Design the program

Variable declaration

Char letter;

Read input

Cout<<”please enter a letter”; Cin>>a letter

Convert the case if (islower(letter))

{

   Char upperCaseLetter = toupper(letter);

    Cout << “Upper case equivalent “ << upperCaseLetter <<endl;

} 
Else if (isupper(letter))

{

    Char lowerCaseLetter = tolower(letter);

    Cout << “Lower case equivalent “ << lowerCaseLetter <<endl;

} 
Else {

    Cout << “Invalid input please enter a letter” <<endl;

    }