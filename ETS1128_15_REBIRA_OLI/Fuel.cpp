// This program calculates the miles that an automobile travels without refuling
#include<iostream>
using namespace std;
int main() {

         //FTC:Fuel tank capacity, MPG: Miles per gallon, PMOR: Miles with out refueling
double FTC, MPG, MWOR;
cout<<"Please, enter your car's fuel tank capacity";
cin>>FTC;
cout<<"Please, enter how much miles can your car's travel per gallon";
cin>>MPG;
        //MWOR means Miles the car travels without refueling
MWOR =FTC*MPG;
cout<<"Your can car travel "<<MWOR<<" miles without refueling";
return 0;
}
