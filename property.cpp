#include <iostream>

class Grandfather {
protected:
    int property;

public:
    Grandfather(int p) : property(p) {}

    int getProperty() const {
        return property;
    }
};

class Father : public Grandfather {
public:
    Father(int p) : Grandfather(p) {}
};

class Grandson : public Father {
public:
    Grandson(int p) : Father(p) {}

    void inheritProperty() const {
        std::cout << "Received the Property of " << getProperty() << " Cr" << std::endl;
    }
};

int main() {
    int propertyValue = 500; 
    Grandson grandson(propertyValue);
    grandson.inheritProperty();

    return 0;
}

