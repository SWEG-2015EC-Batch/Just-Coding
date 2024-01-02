//Testing a program to find transmission time with given file size and transmission rate 
//file size = 400MB in bytes
//transmissionrate is in character per second
#include <iostream>
using namespace std;
int main()
{ 
int fileSize = 400*(1024*1024); 
int transmissionRate = 960; 
int transmissionTime = (fileSize/transmissionRate);
cout << "The file size is " << fileSize << " bytes" << endl;
cout<<"The transmission line will take " << transmissionTime << " seconds to send a file." <<endl;
return 0;
}