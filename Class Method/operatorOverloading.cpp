#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the + operator to add two complex numbers
    Complex operator+(const Complex &obj) {
        Complex result(0, 0);
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; // Uses the overloaded + operator
    c3.display();
    return 0;
}
