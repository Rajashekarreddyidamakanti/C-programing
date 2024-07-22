#include <iostream>
using namespace std;
class Largest {
    int a, b, m;
public:
    void setdata(int x, int y) {
        a = x;
        b = y;
        m = (a > b) ? a : b; 
    }
    friend void find_Max(Largest obj);
};
void find_Max(Largest obj) {
    cout << "Maximum number is " << obj.m << endl;
}
int main() {
    Largest obj;
    int num1, num2;
    cout << "Enter the first no: ";
    cin >> num1;
    cout << "Enter the second no: ";
    cin >> num2;
    obj.setdata(num1, num2);
    find_Max(obj);
    return 0;
}

