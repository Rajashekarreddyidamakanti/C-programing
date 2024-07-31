#include <iostream>
using namespace std;
int main() {
    int number, bitPosition;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the bit position you wish to set (0-based index): ";
    cin >> bitPosition;
    if (bitPosition < 0) {
        cout << "Invalid bit position. Please enter a non-negative integer." << endl;
    } else {
        int result = number | (1 << bitPosition);
        cout << "The number after setting the " << bitPosition << "th bit is " << result << "." << endl;
    }
    return 0;
}
