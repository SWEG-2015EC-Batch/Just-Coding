//This program ask password then check if it is correct
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
  char pass[8]= "1selam1";
  char your_pass[8];
  cout << "Please enter your password :";
  cin.getline(your_pass,8);

  if (strcmp(pass, your_pass)==0)
  {
    cout << "Correcr passwrd ";
  }
  else
  {
    cout << "Incorrect password ";
  }

}
