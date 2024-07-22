#include <iostream>
using namespace std;
class Cube {
private:
    int number;
public:
    Cube(int num) : number(num) {}
    ~Cube() {
        cout << "Cube of " << number << " is " << (number * number * number) << endl;
    }
};

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    for (int i = 1; i <= limit; ++i) {
        Cube cube(i);
    }

    return 0;
}

