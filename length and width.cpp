#include <iostream>
class Box {
public:
    int length; 
    void setWidth(int w) {
        width = w;
    }
    int getWidth() const {
        return width;
    }
private:
    int width; 
};
int main() {
    Box box;
    int length, width;
    std::cout << "Enter the Length of box: ";
    std::cin >> length;    
    std::cout << "Enter the Width of box: ";
    std::cin >> width;
    box.length = length;
    box.setWidth(width);
    std::cout << "Length of box: " << box.length << std::endl;
    std::cout << "Width of box: " << box.getWidth() << std::endl;
    return 0;
}

