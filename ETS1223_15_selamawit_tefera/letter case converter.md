

1.1 INPUT
A character value

1.2 OUTPUT
Changed character value

1.3 PROCESS
Use case changing functions from ctype standard library - toupper(char) and tolower(char) functions.:

2. PROGRAM DESIGN
-start
-declare two character variables, one for input and another for changed value
-check if the value is in [a-z] or [A-Z] range. Use isalpha(char) cctype.h. If not display error message and exit
-flip the case by using toupper() and tolower() functions.
-print the changed value
-exit successfully

3. ALGORITHM

-start
-read a character from the keyboard
-check if a valid character. Only alphabetic -characters are accepted.
-convert the case.
-print the converted character value.
-end