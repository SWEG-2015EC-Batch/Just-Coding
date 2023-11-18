// program to calculate the number of miles a automobile can be driven without refueling
#include <iostream>
using namespace std;

int main(){
    double capacity,
           mileage;
    cout << "please enter the capacity of the fuel tank in gallons: " << endl;
    cin >> capacity;
    cout << "please enter the miles per gallon ratio of the automobile: " << endl;
    cin >> mileage;
    cout << "the automobile  can be driven " << (capacity * mileage) << " miles without refueling." << endl;

    return 0;
}