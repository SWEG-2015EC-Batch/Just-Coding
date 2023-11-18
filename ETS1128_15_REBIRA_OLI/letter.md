1.1 INPUT

-A character value

1.2 OUTPUT

-Changed character value

1.3 PROCESS

-Use case changing functions from ctype standard library - toupper(char) and tolower(char) functions.:

2. PROGRAM DESIGN

-variable declaration and initialization

-char letter;

-reading input data

-cout<<"Enter a letter ";

-cin>>letter;

-perform operation

-if(isupper(letter)) {cout<<"lowercase "<<char(tolower(letter))<<endl;}

-else if (islower(letter)) {cout<<"uppercase "<<char(toupper(letter))<<endl;}

-else {cout<<"Not a letter "<<endl;}

3. ALGORITHM

-start

-read a character from the keyboard

-check if a valid character Only alphabetic characters are accepted.

-convert the case.

-print the converted character value.

-end



