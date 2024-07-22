#include <iostream>
using namespace std;
class Car {
public:
    int id;
    string name;
    int marks;
    Car(int carId, const string &carName, int carMarks) : id(carId), name(carName), marks(carMarks) {
        count++;
    }
    static int getCount() {
        return count;
    }
    void display() const {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
private:
    static int count; 
};
int Car::count = 0;
int main() {
    int id, marks;
    string name;
    cout << "Enter the Id of the Car: ";
    cin >> id;
    cout << "Enter the name of the Car: ";
    cin >> name;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;
    Car car1(id, name, marks);
    cout << "Enter the Id of the Car: ";
    cin >> id;
    cout << "Enter the name of the Car: ";
    cin >> name;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;
    Car car2(id, name, marks);
    car1.display();
    car2.display();
    cout << "No. of objects created in the class: " << Car::getCount() << endl;

    return 0;
}

