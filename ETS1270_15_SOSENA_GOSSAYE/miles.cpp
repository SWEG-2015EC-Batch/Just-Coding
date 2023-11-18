//this program calculates the number of miles the automobile travels without refuelling

#include<iostream>

using namespace std;

int main()

{
int fueltank, milespergallons, result;
	
cout<<"enter the capacity in gallons of an automobile fuel tank:";
	
cin>>fueltank;

cout<<"Enter the mile per gallons the automobile can be driven:";

cin>>milespergallons;

result=fueltank*milespergallons;

cout<<"The automobile can be drived without refuelling"<<result<<"miles:";

return 0;

}
