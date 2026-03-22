#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    Complex subtract(Complex c2) {
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;
        return temp;
    }

    Complex multiply(Complex c2) {
        Complex temp;
        temp.real = (real * c2.real) - (imag * c2.imag);
        temp.imag = (real * c2.imag) + (imag * c2.real);
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    cout << "\nAddition: ";
    result = c1.add(c2);
    result.display();

    cout << "Subtraction: ";
    result = c1.subtract(c2);
    result.display();

    cout << "Multiplication: ";
    result = c1.multiply(c2);
    result.display();

    return 0;
}