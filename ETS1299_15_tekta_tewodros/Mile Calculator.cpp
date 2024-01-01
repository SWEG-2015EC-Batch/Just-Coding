// program to calculate the number of miles the automobile can be driven without refueling
#include <iostream>
using namespace std;

int main(){
    double capacity,
    miles_pergallom;
    cout << "please enter the capacity of the fuel tank in gallons: " << endl;
    cin >> capacity;
    cout << "please enter the miles per gallon ratio of the automobile: " << endl;
    cin >> miles_pergallom;
    cout << "the automobile  can be driven " << (capacity * miles_pergallom) << " miles without refueling." << endl;

    return 0;
}