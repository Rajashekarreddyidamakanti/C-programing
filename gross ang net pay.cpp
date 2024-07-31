#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string emp_id;
    double basic_salary;
public:
    Employee(const string& n, const string& id, double salary)
        : name(n), emp_id(id), basic_salary(salary) {}

    void displayDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};

class PayDetails : public Employee {
private:
    double gross_salary;
    double deductions;
    double net_salary;
public:
    PayDetails(const string& n, const string& id, double salary)
        : Employee(n, id, salary) {
        gross_salary = basic_salary + (0.70 * basic_salary);
        deductions = 0.50 * basic_salary;
        net_salary = gross_salary - deductions;
    }

    void displayPayDetails() const {
        displayDetails();
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Deductions: " << deductions << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};

int main() {
    string name, emp_id;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter Employee ID: ";
    getline(cin, emp_id);
    cout << "Enter Employee Salary: ";
    cin >> salary;

    PayDetails employee(name, emp_id, salary);

    employee.displayPayDetails();

    return 0;
}

