#include <iostream>
using namespace std;
class FloydsTriangle {
private:
    int rows;
public:
    FloydsTriangle(int n) : rows(n) {
        printTriangle();
    }
    ~FloydsTriangle() {
    }
    void printTriangle() const {
        int number = 1;
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << number << " ";
                ++number;
            }
            cout << endl;
        }
    }
};
int main() {
    int rows;
    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> rows;
    FloydsTriangle triangle(rows);
    return 0;
}

