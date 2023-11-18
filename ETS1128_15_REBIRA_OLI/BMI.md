1)Problem analysis

1.1 Input - weight, height

1.2 output - BMI

1.3 process - variable declaration
   - read the input data
   - calculate BMI= weight/(height*height)
   - print output

2)Design the program

2.1 variable declaration( what and how? )

   - float user_weight,user_height,user_BMI;

2.2 reading input data( how? )

   - cout<<"please enter your weight";

   - cin>>user_weight;

   - cout<<"please enter your height";

   - cin>>user_height;

2.3 perform operation- finding the BMI(how?)

   - user_BMI=user_weight/(user_height*user_height);

2.4 print result(BMI) (how?)

   - cout<<"Body Mass Index(BMI) of user is ";
   - cout<<user_BMI;

Algorithm(flowchart)

```mermaid
graph LR;
id1([Start]);
id2[/Read weight, height/];
id3(BMI = weight/height * height);
id4[/Print BMI/];
id5([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4-->id5;
```
