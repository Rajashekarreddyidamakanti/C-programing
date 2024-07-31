#include <iostream>
using namespace std;
class Shape {
public:
    void area(int side) {
        cout << side * side << " ";
    }
    void area(int length, int breadth) {
        cout << length * breadth << endl;
    }
};
int main() {
    Shape s;
    s.area(7);
    s.area(7, 8);

    return 0;
}
