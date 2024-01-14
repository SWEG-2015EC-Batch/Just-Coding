//Design a program that read total mark of a students’ and print the score level with the mark in tabular format. 
//Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the number of students: ";
    cin>>n;

    float Mark[n];
    string level[5]={"Excellent","Very Good","Fair","Poor","Fail"},score_level[5];

    for(int i=0; i<n; i++){
        cout<<"\nPlease enter the total mark of student-"<<i<<": ";
        cin>>Mark[i];  
    
    if (Mark[i]>=80){
        score_level[i]=level[0];
    }else if(Mark[i]>=60){
        score_level[i]=level[1];
    }else if(Mark[i]>=50){
        score_level[i]=level[2];
    }else if(Mark[i]>=40){
        score_level[i]=level[3];
    }else{
        score_level[i]=level[4];
    }}
    cout<<endl;
    
    cout<<"Here is the the the mark of each student with score level: "<<endl;
    cout<< setw(5) << "Student" << setw(15) << " Total mark "<< setw(15) <<" Score level "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Student-"<<i<<setw(8)<<Mark[i]<<setw(15)<<score_level[i]<<endl;
    }

}