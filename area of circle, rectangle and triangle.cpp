#include <iostream>
#include <cmath> 
using namespace std;
class Shape {
private:
    double area;
public:
    Shape(double radius) {
        area = M_PI * pow(radius, 2);
    }
    Shape(double length, double width) {
        area = length * width;
    }
    Shape(double base, double height, bool isTriangle) {
        if (isTriangle) {
            area = 0.5 * base * height;
        }
    }
    double getArea() const {
        return area;
    }
};
int main() {
    double radius, length, width, base, height;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Shape circle(radius);
    cout << "Area of the circle: " << circle.getArea() << endl;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    Shape rectangle(length, width);
    cout << "Area of the rectangle: " << rectangle.getArea() << endl;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    Shape triangle(base, height, true);
    cout << "Area of the triangle: " << triangle.getArea() << endl;
    return 0;
}

