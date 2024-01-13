using namespace std;
#include<iostream>
int main()
{

  int num[3][4];
  int sum = 0;
  cout << "Enter your 12 array elements \n";
  for (int i = 0;i < 3;i++)
  {
    for (int j = 0;j < 4;j++)
    {
      cin >> num[i][j];
      if (num[i][j] % 2 == 0)
      {
        sum = sum + num[i][j];
      }
    }
  }
  cout << " -------------------------------- "<<endl;

  for (int i = 0;i < 3;i++)
  {
    for (int j = 0;j < 4;j++)
    {
      if (num[i][j] % 2 == 0)
        cout << num[i][j]<<"\t | ";
      else
        cout << "* "<<"\t | ";
    }
    cout << endl;
  }
  cout << " -------------------------------- " << endl;
  cout << "The sum of given even integers is= " << sum;
  return 0;
}
