Problem analysis
1.1) No input

1.2) Output: transmissionTime

1.3) Process

Variable declaration

Compute transmissionTime using the given terms (fileSize and transmissionRate)

Print result

Design the program
2.1) Variable declaration

   Int fileSize = 400*(1024*1024); 

   Int transmissionRate = 960; 

   Int transmissionTime = (fileSize/transmissionRate);
2.2) No input data

2.3) Perform operation and print the result

   Cout << “The file size is “ << fileSize << “ bytes” << endl;
   Cout<<”The transmission line will take “ << transmissionTime << “ seconds to send a file.” <<endl;