#include <iostream>
using namespace std;
int main()
{

    char answers[10] = {'D', 'C', 'B', 'B', 'A', 'C', 'D', 'A', 'D', 'B'};
    char studentAnswers[10];

    cout << "Enter your answers (A,B,C,D): ";

    for (int i = 0; i < 10; i++)
    {
        cin >> studentAnswers[i];
        studentAnswers[i] = toupper(studentAnswers[i]);
    }

    int score = 0;
    for (int i = 0; i < 10; i++)
    {
        if (answers[i] ==studentAnswers[i])
        {
            score++;
        }
    }
    cout << "Your score is: " << score << "/10" << endl;

    cout << "Your answers were: ";
    for (int i = 0; i < 10; i++)
    {
        cout << studentAnswers[i] << " ,";
    }

    cout << endl;

    return 0;
}
