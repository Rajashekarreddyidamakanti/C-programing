#include <iostream>
#include <stdexcept>  
using namespace std;
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero.");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num, denom;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> denom;

    try {
        double result = divide(num, denom);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}

