#include <iostream>
using namespace std;
class TrianglePattern {
private:
    int rows;
public:
    TrianglePattern() : rows(0) {}
    TrianglePattern(int n) : rows(n) {}
    void printPattern() const {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    TrianglePattern triangle(n);
    triangle.printPattern();
    return 0;
}

