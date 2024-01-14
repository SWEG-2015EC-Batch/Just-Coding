//Write a program to store exam scores (test, assignment, quiz, project and final). The
//program should determine and print the score level alongside with the total mark in tabular format.
// Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor
//and <40 Fail.

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float exam[6];
    string level[6]={"Excellent","Very-Good","Fair","poor","Fail"},scoreLevel;

    cout<<"Please enter your test mark: ";
    cin>>exam[0];
    cout<<"Please enter your assignment mark: ";
    cin>>exam[1];
    cout<<"Please enter your quiz mark: ";
    cin>>exam[2];
    cout<<"Please enter your project mark: ";
    cin>>exam[3];
    cout<<"Please enter your final score: ";
    cin>>exam[4];

    for(int i=0; i<5;i++){
        exam[5]+=exam[i];
    }

    if(exam[5]>=80){
        scoreLevel=level[0];
    }else if(exam[5]>=60){
         scoreLevel=level[1];
    }else if(exam[5]>=50){
         scoreLevel=level[2];
    }else if(exam[5]>=40){
         scoreLevel=level[3];
    }else{
         scoreLevel=level[4];
    }
    cout<<endl;
    
    cout<<"Your Score status level alongside with the total mark:"<<endl;
    cout<<"\n"<<setw(15)<<"Total mark"<< setw(15) <<" Score level "<<endl;
    cout<<setw(11)<<exam[5]<<setw(16)<<scoreLevel;

}