//A Program that validates password
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
  char pass[10]= "sos123456";
  char your_pass[10];

  cout << "Please enter your password :";
  cin.getline(your_pass,10);

  if (strcmp(pass, your_pass)==0){

    cout << "you have entered the correct password ";
  }
  else
  {
    cout << "Incorrect password ";
  }
  return 0;
}
 