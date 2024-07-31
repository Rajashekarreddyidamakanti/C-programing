#include <iostream>
#include <stdexcept>
using namespace std;
class FailException : public runtime_error {
public:
    FailException() : runtime_error("Fail") {}
};

class Student {
private:
    double marks[4];
    double total;
    double aggregate;
    
public:
    void inputMarks() {
        cout << "Enter the marks in Python: ";
        cin >> marks[0];
        cout << "Enter the marks in C Programming: ";
        cin >> marks[1];
        cout << "Enter the marks in Mathematics: ";
        cin >> marks[2];
        cout << "Enter the marks in Physics: ";
        cin >> marks[3];
    }
    
    void calculateResults() {
        total = marks[0] + marks[1] + marks[2] + marks[3];
        aggregate = total / 4;
        
        if (aggregate < 50) {
            throw FailException(); 
        }
    }
    
    void displayGrade() const {
        if (aggregate < 50) {
            cout << "Fail" << endl;
        } else {
            cout << "Pass" << endl;
        }
    }
};

int main() {
    Student student;
    
    student.inputMarks();
    
    try {
        student.calculateResults();
        
        student.displayGrade();
    } catch (const FailException& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}

