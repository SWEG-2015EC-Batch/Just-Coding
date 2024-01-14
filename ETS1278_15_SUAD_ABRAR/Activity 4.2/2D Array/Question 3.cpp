//A Program 
#include<iostream>
using namespace std;

 int main(){

    int n;
    cout<< "Enter the number of students: ";
    cin>>n;

    string scoreLevel[n];
    float total_mark[n];

     for(int i=0; i<n; i++){

    int test , assignment , quiz , project , final_result ;

        cout<<"Enter test result out of 10 of student"<<i+1<<": ";
        cin>>test;
        cout<<"Enter assignment result out of 15 of student"<<i+1<<": ";
        cin>>assignment;
        cout<<"Enter quiz result out of 5 student"<<i+1<<": ";
        cin>>quiz;
        cout<<"Enter project result out of 20 student"<<i+1<<": ";
        cin>>project;
        cout<<"Enter final result out of 50 student"<<i+1<<": ";
        cin>>final_result;

          total_mark[i] = test + assignment + quiz + project + final_result;

        if(total_mark[i] >= 80) {
            scoreLevel[i] = "Excellent";
        } else if (total_mark[i] >= 60) {
            scoreLevel[i] = "Very Good";
        } else if (total_mark[i] >= 50) {
            scoreLevel[i] = "Fair";
        } else if (total_mark[i] >= 40) {
            scoreLevel[i] = "Poor";
        } else {
            scoreLevel[i] = "Fail";
        }
    }

    cout<<"TOTAL_MARK\t\tSCORE LEVEL"<<endl;
    for(int i=0; i<n; i++) {
        cout<<total_mark[i]<<"\t\t"<<scoreLevel[i]<<endl;
    }
   return 0;
}
