#include <iostream>
using namespace std;

class IncomeTax {
protected:
    double income;
public:
    IncomeTax(double inc) : income(inc) {}

    virtual void TDS() const = 0; 
};

class Slab1 : public IncomeTax {
public:
    Slab1(double inc) : IncomeTax(inc) {}

    void TDS() const override {
        if (income <= 150000) {
            cout << "No tax" << endl;
        } else {
            cout << "Income does not fall in this slab" << endl;
        }
    }
};

class Slab2 : public IncomeTax {
public:
    Slab2(double inc) : IncomeTax(inc) {}

    void TDS() const override {
        if (income > 150000 && income <= 300000) {
            double tax = (income - 150000) * 0.10;
            cout << "Tax = " << tax << endl;
        } else {
            cout << "Income does not fall in this slab" << endl;
        }
    }
};

class Slab3 : public IncomeTax {
public:
    Slab3(double inc) : IncomeTax(inc) {}

    void TDS() const override {
        if (income > 300000 && income <= 500000) {
            double tax = (income - 300000) * 0.20 + 15000; 
            cout << "Tax = " << tax << endl;
        } else if (income > 500000) {
            double tax = (income - 500000) * 0.30 + 65000; 
            cout << "Tax = " << tax << endl;
        } else {
            cout << "Income does not fall in this slab" << endl;
        }
    }
};

int main() {
    double income;

    cout << "Enter the total income: ";
    cin >> income;

    if (income <= 150000) {
        Slab1 s1(income);
        s1.TDS();
    } else if (income <= 300000) {
        Slab2 s2(income);
        s2.TDS();
    } else {
        Slab3 s3(income);
        s3.TDS();
    }

    return 0;
}

