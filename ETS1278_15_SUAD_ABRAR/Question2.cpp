//Mile calculator
#include <iostream>
using namespace std;

int main(){
float mileage, capacity;
cout<<"please enter the mileage";
cin>>mileage;
cout<<"please enter the capacity of the fuel tank (in gallons)";
cin>>capacity;
cout<<"The miles the automobile can be driven without refueling is "<<mileage*capacity<<endl;
return 0;
} 
