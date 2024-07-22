#include <iostream>
using namespace std; 
class ReverseNumber {
private:
    int number;
    int reversedNumber;
    void reverse() {
        int num = number;
        reversedNumber = 0;
        while (num != 0) {
            int digit = num % 10;
            reversedNumber = reversedNumber * 10 + digit;
            num /= 10;
        }
    }
public:
    ReverseNumber() : number(0), reversedNumber(0) {}
    ReverseNumber(int num) : number(num) {
        reverse();
    }
    void display() const {
        cout << "The reverse of " << number << " is " << reversedNumber << endl;
    }
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    ReverseNumber reverseNumber(num);
    reverseNumber.display();
    return 0;
}

