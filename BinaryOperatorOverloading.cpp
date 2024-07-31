#include <iostream>
using namespace std;
class Complex {
public:
    int real, imag;
};
int main() {
    Complex c1, c2, result;
    cout << "Enter the value of Complex Number 1 (a, b): ";
    cin >> c1.real >> c1.imag;
    cout << "Enter the value of Complex Number 2 (a, b): ";
    cin >> c2.real >> c2.imag;

    cout << "Input Values" << endl;
    cout << c1.real << " + " << c1.imag << "i" << endl;
    cout << c2.real << " + " << c2.imag << "i" << endl;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    cout << "Result of addition: " << result.real << " + " << result.imag << "i" << endl;

    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    cout << "Result of subtraction: " << result.real << " - " << result.imag << "i" << endl;
    return 0;
}
