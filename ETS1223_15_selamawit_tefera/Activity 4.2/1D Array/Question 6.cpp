//A program that print score level with the mark
#include<iostream>
using namespace std;

  int main(){

     int n;
    cout<< "please enter the number of students: ";
    cin>>n;

    float score[n];
    string scoreLevel[n];

    for(int i=0; i<n; i++) {
        cout<<"Please enter the total mark of student"<<i+1<<": ";
        cin>>score[i];

        if(score[i] >= 80) {
            scoreLevel[i] = "Excellent";
        } else if (score[i] >= 60) {
            scoreLevel[i] = "Very Good";
        } else if (score[i] >= 50) {
            scoreLevel[i] = "Fair";
        } else if (score[i] >= 40) {
            scoreLevel[i] = "Poor";
        } else {
            scoreLevel[i] = "Fail";
        }
    }

    cout<<"SCORE\t\tSCORE STATUS LEVEL"<<endl;
    for(int i=0; i<n; i++) {
        cout<<score[i]<<"\t\t"<<scoreLevel[i]<<endl;
    }

    return 0;
}

