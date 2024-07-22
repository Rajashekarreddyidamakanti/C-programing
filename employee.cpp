#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    long Mobile_no;
};
class Programmer : public Employee {
public:
    double Basic_Pay;
    void generatePaySlip() {
        double DA = 0.97 * Basic_Pay;
        double HRA = 0.10 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double clubFund = 0.001 * Basic_Pay;
        double grossPay = Basic_Pay + DA + HRA;
        double netPay = grossPay - PF - clubFund;
        cout << "=======================" << endl;
        cout << "PROGRAMMER PAYMENT SLIP" << endl;
        cout << "=======================" << endl;
        cout << "BASIC PAY => " << Basic_Pay << endl;
        cout << "DEARNESS ALLOWANCE => " << DA << endl;
        cout << "HOUSE RENT ALLOWANCE => " << HRA << endl;
        cout << "PROVIDENT FUND => " << PF << endl;
        cout << "CLUB FUND => " << clubFund << endl;
        cout << "GROSS PAY => " << grossPay << endl;
        cout << "NET PAY => " << netPay << endl;
    }
};
int main() {
    Programmer p;
    cout << "Enter Name of the Employee: ";
    getline(cin, p.Emp_name);
    cout << "Enter Address of the Employee: ";
    getline(cin, p.Address);
    cout << "Enter ID of the Employee: ";
    cin >> p.Emp_id;
    cout << "Enter Mobile Number: ";
    cin >> p.Mobile_no;
    cout << "Enter E-Mail ID of the Employee: ";
    cin >> p.Mail_id;
    cout << "ENTER THE BASIC PAY OF THE PROGRAMMER => ";
    cin >> p.Basic_Pay;
    p.generatePaySlip();
    return 0;
}

