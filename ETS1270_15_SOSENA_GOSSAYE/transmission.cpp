//Testing a program to find transmission time with the given file size and transmission rate
//File size = 400MB in bytes
//Transmission rate is in character per second
#include<iostream>

using namespace std;

int main()
{
	int FileSize=400*1024*1024;
	
	int TransmissionRate=960;
	
	int TransmissionTime=FileSize/TransmissionRate;
	
	cout<<"The file size is"<<FileSize<<"bytes"<<endl;
	
	cout<<"the transmisssion line will take"<<TransmissionTime<<"seconds to send a file"<<endl;
	
	return 0;
}	
