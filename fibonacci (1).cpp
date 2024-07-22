#include <iostream>
using namespace std;
class Series {
private:
    int limit;
public:
    void input() {
        cout << "Enter the limit: ";
        cin >> limit;
    }
    void show() {
        int a = 0, b = 1, c;
        cout << "Fibonacci series up to " << limit << " terms:" << endl;
        for (int i = 0; i < limit; ++i) {
            if (i <= 1)
                c = i;
            else {
                c = a + b;
                a = b;
                b = c;
            }
            cout << c << " ";
        }
        cout << endl;
    }
};
int main() {
    Series obj;
    obj.input();
    obj.show();
    return 0;
}

