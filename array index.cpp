#include <iostream>
#include <stdexcept>  
using namespace std;

int getElement(const int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("The element is an array index out of boundary.");
    }
    return arr[index];
}

int main() {
    int x[] = {10, 20, 30, 40};
    int size = sizeof(x) / sizeof(x[0]);
    int index;

    cout << "Enter the index to access: ";
    cin >> index;

    try {
        int element = getElement(x, size, index);
        cout << "Element at index " << index << " is " << element << endl;
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}

