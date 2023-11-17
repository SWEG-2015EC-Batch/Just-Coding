
//This program calculates power of a number the user inputing the base and exponent
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x,
           y,
         result;
    cout << "Enter x= ";
    cin >> x;
    cout<< "Enter y= ";
    cin>> y; 
    
    result = pow(x, y);
    
     cout <<  x << "^" << "=" << result << endl;
    

    return 0;
}