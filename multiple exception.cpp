#include <iostream>
#include <stdexcept>
#include <cmath>  
using namespace std;
class TooSmallException : public runtime_error {
public:
    TooSmallException() : runtime_error("The number is too small.") {}
};

class NonPositiveIntegerException : public runtime_error {
public:
    NonPositiveIntegerException() : runtime_error("Accept only positive integers.") {}
};
void checkNumber(double num) {
    if (num <= 0) {
        throw NonPositiveIntegerException();
    }
    if (std::abs(num) < 0.0001) { 
        throw TooSmallException();
    }
}

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        checkNumber(num);
        cout << "Number is valid." << endl;
    } catch (const TooSmallException& e) {
        cout << e.what() << endl;
    } catch (const NonPositiveIntegerException& e) {
        cout << e.what() << endl;
    } catch (const exception& e) {
        cout << "An unexpected error occurred: " << e.what() << endl;
    }

    return 0;
}

