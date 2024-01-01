#include <iostream>
using namespace std;

int main(){
float weight,
height,
BMI;
cout<<"enter the weight";
cin>>weight;
cout<<"enter the height";
cin>>height;
BMI=weight/(height*height);
cout<<"Body mass index(BMI) of a person is "<<BMI <<endl;
return 0;
} 