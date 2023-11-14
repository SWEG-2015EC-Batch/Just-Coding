// Print BMI
#include<iostream>
using namespace std;

int main(){

      float user_weight,
		         user_height,
		         user_BMI;
		 cout<<"please enter weight ";
		 cin>>user_weight;
		 cout<<"please enter height ";
		 cin>>user_height;
		 user_BMI=user_weight/(user_height*user_height);
		 cout<<"BMI of user is ";
		 cout<<user_BMI;
	return 0;
}
