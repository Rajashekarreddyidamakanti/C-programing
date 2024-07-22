#include <iostream>
using namespace std;
class AddAmount {
    int amount;
public:
    AddAmount() : amount(50) {}
    AddAmount(int add) : amount(50 + add) {}  
    int getAmount() {
        return amount;
    }
};
int main() {
    AddAmount piggieBank1;
    AddAmount piggieBank2(7);
    cout << piggieBank1.getAmount() << " ";
    cout << piggieBank2.getAmount() << endl;   
    return 0;
}
