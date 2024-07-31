#include <iostream>
using namespace std;

class Example {
public:
    Example();
};
Example::Example() {
    cout << "Constructor called!" << endl;
}
int main() {
    Example e;

    return 0;
}
