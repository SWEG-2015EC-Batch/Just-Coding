// This program that calculates Body Mass Index of a person
#include<iostream>
using namespace std;

int main() {
float H, W, BMI; // H is the height of a person, W is the weight of a person, BMI is the body Mass Index of a person
cout<<"Please enter your Weight in kg ";
cin>>W;
cout<<"Please enter your Height in meters ";
cin>>H;

BMI = W/(H*H);
cout<<"the BMI is\n"<<BMI;
return 0;
}

