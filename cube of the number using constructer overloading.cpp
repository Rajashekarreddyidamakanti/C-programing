#include <iostream>
using namespace std;
class Cube {
private:
    int number;
    int cube;
public:
    Cube() : number(0), cube(0) {}
    Cube(int num) : number(num) {
        cube = number * number * number;
    }
    void display() const {
        cout << "Cube of " << number << " is " << cube << endl;
    }
};
int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    for (int i = 1; i <= limit; ++i) {
        Cube cube(i);
        cube.display();
    }

    return 0;
}

