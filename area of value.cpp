#include <iostream>

class Shape {
public:
    double length;
    double breadth;
};

class Rectangle : public Shape {
public:
    double area() {
        return length * breadth;
    }
};

class Cuboid : public Rectangle {
public:
    double height;

    Cuboid(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    double volume() {
        return length * breadth * height;
    }
};

int main() {
    double l, b, h;
    std::cout << "Enter the length, breadth, and height of the cuboid: ";
    std::cin >> l >> b >> h;
    
    Cuboid cuboid(l, b, h);
    
    std::cout << "Area of the base rectangle: " << cuboid.area() << std::endl;
    std::cout << "Volume of the cuboid: " << cuboid.volume() << std::endl;
    
    return 0;
}

