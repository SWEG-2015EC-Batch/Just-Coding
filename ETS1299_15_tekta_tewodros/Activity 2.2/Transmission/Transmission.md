Problem analysis

1.1) No input

1.2) output: transmissionTime

1.3) process

Variable declaration

Compute transmissionTime using the given terms (fileSize and transmissionRate)

print result

Design the program

2.1) Variable declaration

int fileSize = 400*(1024*1024); 

int transmissionRate = 960; 

int transmissionTime = (fileSize/transmissionRate);
2.2) No input data

2.3) Perform operation and print the result

cout << "The file size is " << fileSize << " bytes" << endl;
cout<<"The transmission line will take " << transmissionTime << " seconds to send a file." <<endl;