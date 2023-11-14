// Print Body Mass Index(BMI)
#include<iostream>
using namespace std;

int main(){
    float user_weight,
		       user_height,
		       user_BMI;
    cout<<"please enter your weight ";
    cin>>user_weight;
    cout<<"please enter your height ";
    cin>>user_height;
    user_BMI=user_weight/(user_height*user_height);
    cout<<"Body Mass Index(BMI) of user is ";
    cout<<user_BMI;
	return 0;
}
