#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int regno;
    int mark1, mark2, mark3;
    float average;
    char grade;
    void calculate() {
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

public:
    void input() {
        cout << "ENTER THE STUDENT NAME => ";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER => ";
        cin >> regno;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
        calculate();
    }
    void show() {
        cout << "Student Name: " << name << endl;
        cout << "Register Number: " << regno << endl;
        cout << "MARK 1: " << mark1 << endl;
        cout << "MARK 2: " << mark2 << endl;
        cout << "MARK 3: " << mark3 << endl;
        cout << "AVERAGE SCORE IS => " << average << endl;
        cout << "GRADE => " << grade << endl;
    }
};
int main() {
    const int NUM_STUDENTS = 10;
    Student students[NUM_STUDENTS];
    int n;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for student " << i + 1 << endl;
        students[i].input();
        cout << endl;
    }
    for (int i = 0; i < n; ++i) {
        cout << "Details of student " << i + 1 << endl;
        students[i].show();
        cout << endl;
    }
    return 0;
}

