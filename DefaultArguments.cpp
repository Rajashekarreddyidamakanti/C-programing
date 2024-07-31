#include <iostream>
using namespace std;
void printDetails(string name, int age = 18, string country = "Unknown") {
    cout << "Name: " << name << ", Age: " << age << ", Country: " << country << endl;
}
int main() {
    printDetails("Alice", 25, "USA");
    printDetails("Bob", 30);
    printDetails("Charlie");
    return 0;
}
