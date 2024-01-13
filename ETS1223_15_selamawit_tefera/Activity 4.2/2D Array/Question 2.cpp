#include<iostream>
using namespace std;
int main()
{
  const int row=5;
  const int col = 5;
  int num[row][col];
  int product=1, sum=0;
  cout << "List five row elements :"<<endl;
  for (int i = 0;i < row;i++)
  {
    cin >> num[i][0];
    product = product * num[i][0];
  }
  cout << "List five columun elements :" << endl;
  for (int i = 0;i < col;i++)
  {
    cin >> num[0][i];
    sum = sum + num[0][i];
  }
  cout << "Rows \t\t Columuns\t\tProduct of rows\t\t Sum of Columns"<<endl;
  for (int i = 0;i < 5;i++)
  {
    cout << num[i][0]<<"\t\t  "<<num[0][i]<<"\t\t\t"<<product<< "\t\t          "<<sum<<endl;
  }
}
