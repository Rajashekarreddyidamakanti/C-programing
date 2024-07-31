#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double base, exponent, result;
    cout << "Input the base: ";
    cin >> base;
    cout << "Input the exponent: ";
    cin >> exponent;
    result = pow(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << result;
    return 0;
}
