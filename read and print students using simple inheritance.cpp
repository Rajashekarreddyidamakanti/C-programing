#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    string name;
    int age;
    char gender;
public:
    Student(string n, int a, char g) : name(n), age(a), gender(g) {}
    void displayBasicInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class Result : public Student {
private:
    int totalMarks;
    char grade;
public:
    Result(string n, int a, char g, int marks, char grd)
        : Student(n, a, g), totalMarks(marks), grade(grd) {}
    void displayResult() {
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    string name;
    int age;
    char gender;
    int totalMarks;
    char grade;
    cout << "Enter student's basic information:" << endl;
    cout << "Name?: ";
    getline(cin, name);
    cout << "Age?: ";
    cin >> age;
    cout << "Gender?: ";
    cin >> gender;
    cout << "Enter student's result information:" << endl;
    cout << "Total Marks?: ";
    cin >> totalMarks;
    cout << "Grade?: ";
    cin >> grade;
    Result studentResult(name, age, gender, totalMarks, grade);
    cout << "\nStudent's Basic Information:" << endl;
    studentResult.displayBasicInfo();
    cout << "\nStudent's Result Information:" << endl;
    studentResult.displayResult();

    return 0;
}

