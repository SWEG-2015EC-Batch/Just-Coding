#include <iostream>
using namespace std;
int main()
{
  const int max = 50;
  int nums[max] = {};
  int n;
  cout << "How many numbers in the list: ";
  cin >> n;


  cout << "Enter the numbers " << endl;
  for (int j = 0;j < n;j++)
    cin >> nums[j];

  cout << "*********" << endl;
  cout << "Even numbers in reverse order are :" << endl;

  for (int i = n - 1;i >= 0;--i)
  {
    if (nums[i] % 2 == 0)
      cout << nums[i] << endl;
  }

}
