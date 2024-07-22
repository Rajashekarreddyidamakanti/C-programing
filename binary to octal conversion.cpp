#include <iostream>
#include <string>
#include <algorithm>
class BinaryToOctal {
private:
    std::string binary;
    std::string octal;
    void convert() {
        int len = binary.length();
        int padding = (3 - len % 3) % 3;
        binary = std::string(padding, '0') + binary;
        for (size_t i = 0; i < binary.length(); i += 3) {
            std::string group = binary.substr(i, 3);
            octal += binaryToOctal(group);
        }
    }
    char binaryToOctal(const std::string& binGroup) {
        if (binGroup == "000") return '0';
        if (binGroup == "001") return '1';
        if (binGroup == "010") return '2';
        if (binGroup == "011") return '3';
        if (binGroup == "100") return '4';
        if (binGroup == "101") return '5';
        if (binGroup == "110") return '6';
        if (binGroup == "111") return '7';
        return '0'; 
    }
public:
    BinaryToOctal(const std::string& bin) : binary(bin) {
        convert();
    }
    std::string getOctal() const {
        return octal;
    }
};
int main() {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;
    BinaryToOctal converter(binary);
    std::cout << "The octal equivalent is: " << converter.getOctal() << std::endl;
    return 0;
}

