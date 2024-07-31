#include <iostream>
using namespace std;
int main() {
    double income, tax;
    cout << "Enter your Income: ";
    cin >> income;
    if (income <= 60000) {
        tax = 0;
    } else if (income <= 150000) {
        tax = income * 0.05;
    } else if (income <= 500000) {
        tax = income * 0.1;
    } else {
        tax = income * 0.15;
    }
    cout << "Your income tax is: " << tax << endl; 
    return 0;
}
