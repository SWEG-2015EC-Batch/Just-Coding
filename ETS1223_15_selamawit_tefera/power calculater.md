- Write a program to calculate the value of x raised to y when x and y are use inputs.

1.1 INPUT

- x (base)

- y (exponent)

1.2 OUTPUT

- the result of x raised to y

1.3 PROCESS

- calculate x power of y using pow() function


2. PROGRAM DESIGN

- declare three variable, x(base), y(exponent), result

- double x,y,result;

- read input data

- cout<<"please enter base= ";

- cin>>x;

- cout<<"please enter exponent= ";

- cin>>y;

- perform operation

- result= pow(x,y)

- display result

- cout<<"the result is= ";

- cout<<result;

3. ALGORITHM

- start

- read x (base),y(exponent)

- calculate result= pow(x,y)

- print result

- end


Algorithm: Flowchart

graph LR;
id1([Start]);
id2[/Read x, y/];
id3(power =x^y);
id4[/Print power/];
id5([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4-->id5;




