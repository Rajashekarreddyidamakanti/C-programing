#include <iostream>
#include <string>
using namespace std;
class DecimalToBinary {
private:
    int decimal;
    string binary;
    void convertToBinary() {
        int n = decimal;
        binary = "";
        while (n > 0) {
            binary = (n % 2 == 0 ? "0" : "1") + binary;
            n /= 2;
        }
        if (binary.empty()) {
            binary = "0";
        }
    }
public:
    DecimalToBinary() : decimal(0), binary("0") {}
    DecimalToBinary(int dec) : decimal(dec) {
        convertToBinary();
    }
    DecimalToBinary(const DecimalToBinary& other) : decimal(other.decimal), binary(other.binary) {}
    string getBinary() const {
        return binary;
    }
};
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    DecimalToBinary converter(decimal);
    cout << "The binary equivalent is: " << converter.getBinary() << endl;
    return 0;
}

