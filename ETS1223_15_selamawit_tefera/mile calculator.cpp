// program to calculate the number of miles a automobile can be driven without refueling
#include <iostream>
using namespace std;

int main(){
    double capacity,
    miles_pergallon;
    cout << "please enter the capacity of the fuel tank in gallons: " << endl;
    cin >> capacity;
    cout << "please enter the miles per gallon ratio of the automobile: " << endl;
    cin >> miles_pergallon;
    cout << "the automobile  can be driven " << (capacity * miles_pergallon) << "miles without refueling." << endl;

    return 0;
}