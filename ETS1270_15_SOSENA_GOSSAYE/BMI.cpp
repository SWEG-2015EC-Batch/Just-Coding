//this program calculates BMI

#include<iostream>

using namespace std;	

int main()

{
float weight, height, BMI;

cout<< "please enter your weight in kg:";
cin>> weight;

cout<<"please enter your height in m:";
cin>>height;

BMI= weight/(height*height);

cout<< "your BMI is"<< BMI;

return 0;

}
