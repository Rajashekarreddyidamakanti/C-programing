#include <iostream>
using namespace std;
class Area {
public:
    Area(double radius) {
        cout << 3.14 * radius * radius << " \n";
    }
    Area(int length, int breadth) {
        cout << length * breadth << " \n";
    }
    Area(double base, double height) {
        cout << 0.5 * base * height << endl;
    }
};
int main() {
	double radius,base,height;
	int length,breadth;
	cout<<"Enter the raduis of the circle ";
	cin>>radius;
	cout<<"Enter the Length and breadth of rectangle";
	cin>>length>>breadth;
	cout<<"Enter the Base  and Height of Triangle";
	cin>>base>>height;
    Area a1(radius);
    Area a2(length,breadth);
    Area a3(base,height);
    return 0;
}
