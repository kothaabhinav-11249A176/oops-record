#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Default and parameterized constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Function to display complex number
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    // Overload the binary '+' operator
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter real and imaginary part of first complex number: ";
    float r1, i1;
    cin >> r1 >> i1;
    c1 = Complex(r1, i1);

    cout << "Enter real and imaginary part of second complex number: ";
    float r2, i2;
    cin >> r2 >> i2;
    c2 = Complex(r2, i2);

    // Using overloaded '+' operator
    c3 = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "------------------------------------\n";
    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
