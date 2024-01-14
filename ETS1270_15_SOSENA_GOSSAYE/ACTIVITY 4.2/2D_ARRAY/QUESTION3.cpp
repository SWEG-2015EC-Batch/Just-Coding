//program that displays the test, assignment, quiz, project and final result of a student with the score level
#include<iostream>
using namespace std;
int main()
{
  const int row = 1, col = 5;
  int test[row][col];
  int score = 0;
  int i;
  string status;
  cout << "Enter your test result(15%) " << endl;
  for (i = 0;i < row;i++)
    {
      cin >> test[i][0];
      score = score + test[i][0];
    }
    cout << "Enter your assignment result(10%) " << endl;
  for (i = 0;i < row;i++){
      cin >> test[i][1];
      score = score + test[i][1];
    }
    cout << "Enter your quiz result(5%) " << endl;
  for (i = 0;i < row;i++){
      cin >> test[i][2];
      score = score + test[i][2];
    }
    cout << "Enter your project result(20%) " << endl;
  for (i = 0;i < row;i++) {
      cin >> test[i][3];
      score = score + test[i][3];
    }
    cout << "Enter your final result(50%) " << endl;
  for (i = 0;i < row;i++) {
      cin >> test[i][4];
      score = score + test[i][4];
    }

  if (score >= 80)
      status = "Excellent";
  else if (score >= 60)
      status = "Very Good";
  else if (score >= 50)
      status = "Fair";
  else if (score >= 40)
      status = "Poor";
  else if (score < 40)
      status = "Fail";

  cout << "Test\tAssignment\tQuiz\tProject\t   Final\tTotal score\tStatus"<<endl;
  for (int i = 0;i < 1;i++)
    cout << test[i][0] << "\t    " << test[i][1] << "      \t" << test[i][2] << "\t   "<<test[i][3]<< "\t    " <<test[i][4]<<"\t\t " << score <<"\t        " << status << endl;
  return 0;
}
