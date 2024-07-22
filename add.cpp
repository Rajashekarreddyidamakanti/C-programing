#include <iostream>
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int a = 10, b = 20, c = 25;
    std::cout << "add(int, int): " << add(a, b) << std::endl;
    std::cout << "add(int, int, int): " << add(a, b, c) << std::endl;
    return 0;
}

