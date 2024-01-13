#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "Please enter your text: ";
  string text;
  getline(cin, text);

  for (int i = 0;i < text.length();i++)
  {
    while (i < text.length() && text[i] != ' ')
    {
      cout << text[i]<<",";
      i++;
    }
    cout <<endl;

  }

}
