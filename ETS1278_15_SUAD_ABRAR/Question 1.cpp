//BMI calculator 
#include <iostream>
using namespace std;

int main(){
float weight, height, BMI;
cout<<"enter the weight";
cin>>weight;
cout<<"enter the height";
cin>>height;
cout<<"Body mass index(BMI) of a person is "<<weight/(height*height)<<endl;
return 0;
} 
