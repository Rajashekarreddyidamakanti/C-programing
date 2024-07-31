#include <iostream>
using namespace std;
class CubeCalculator {
    int n;
public:
    CubeCalculator(int num) : n(num) {}
    ~CubeCalculator() {
        for (int i = 1; i <= n; ++i) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
};
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    CubeCalculator calculator(num);

    return 0;
}
