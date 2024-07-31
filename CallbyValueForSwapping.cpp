#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping by value (temp variables): a = " << a << ", b = " << b << endl;
    int &refA = a; 
    int &refB = b;
    temp = refA;
    refA = refB;
    refB = temp;
    cout << "After swapping by reference: a = " << refA << ", b = " << refB << endl;
    return 0;
}
