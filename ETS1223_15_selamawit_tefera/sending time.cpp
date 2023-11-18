// This program calculates a file sending time based on file size input 
#include <iostream>
using namespace std;

int main()
{
  double fileSize, transmissionRate {960}, transmissionTime;

  cout << "Enter file size in MB: ";
  cin >> fileSize;

  // Convert files' size to bytes
  fileSize = fileSize * 1024 * 1024;
  transmissionTime = fileSize / transmissionRate;

  cout << "The time to transmit a " << fileSize << " byte file at "  
       << transmissionRate << " characters per second is " 
       << transmissionTime << " seconds" << endl;

  return 0;
}