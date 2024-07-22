#include <iostream>
using namespace std;
class Employee {
private:
    double taxableIncome;
    double tax;
public:
    void input() {
        cout << "Enter your Income: ";
        cin >> taxableIncome;
    }
    void calculateTax() {
        if (taxableIncome <= 60000) {
            tax = 0;
        } else if (taxableIncome > 60000 && taxableIncome <= 150000) {
            tax = taxableIncome * 0.05;
        } else if (taxableIncome > 150000 && taxableIncome <= 500000) {
            tax = taxableIncome * 0.1;
        } else {
            tax = taxableIncome * 0.15;
        }
    }
    void displayTax() {
        cout << "Your income tax is: " << tax << endl;
    }
};
int main() {
    Employee emp;
    emp.input();         
    emp.calculateTax();  
    emp.displayTax();    

    return 0;
}

