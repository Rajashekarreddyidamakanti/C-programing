#include <iostream>
using namespace std;
class Person {
protected:
    float salary;
public:
    void getdata() {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displaydata() const {
        cout << "Salary: " << salary << endl;
    }
    virtual float bonus() const = 0; 
};
class Master : public Person {
public:
    float bonus() const override {
        return salary * 1.10; 
    }
};
int main() {
    Master m;
    m.getdata();
    m.displaydata();
    cout << "Bonus = " << m.bonus() << endl;
    return 0;
}

