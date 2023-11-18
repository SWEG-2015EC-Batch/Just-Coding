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

algorithm: flowchart

graph LR;
id1([Start]);
id2[/Read letter/];
id3{Is uppercase?};
id4{Is uppercase?};
id5(To lowercase);
id6(To uppercase);
id7[/Print character/];
id8[/Print Not a letter/];
id9[/Print Not a letter/];
id10([End]);
id1-->id2;
id2-->id3;
id2-->id4;
id3--yes-->id5;
id4--yes-->id6;
id5-->id7;
id6-->id7;
id3--no-->id8;
id4--no-->id9;
id7-->id10;
id8-->id10;
id9-->id10;

