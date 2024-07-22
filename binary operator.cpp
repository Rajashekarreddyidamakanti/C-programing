#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }
    friend ostream& operator<<(ostream& os, const Complex& c);
    void input() {
        cout << "Enter the value of Complex Numbers a, b\n";
        cin >> real >> imag;
    }
};
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}
int main() {
    Complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1 + c2;
    cout << "Sum of the complex numbers: " << c3 << endl;
    return 0;
}

