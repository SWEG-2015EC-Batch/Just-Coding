#include<iostream>
#include<string>
using namespace std;

int main()
{

  string word;
  cout << "Enter your word ";
  getline(cin,word);
  string reverse_word;

  for (int i = word.length() - 1;i >= 0;i--)
  {
      reverse_word = reverse_word + word[i];
  }
  if (word == reverse_word)
  {
    cout << "The word is palindrome ";
  }
  else
  {
    cout << "The word is not Palindrome ";
  }
  return 0;
}
