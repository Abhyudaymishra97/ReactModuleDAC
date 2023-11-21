/*
    E. Operator-Overloading :

        E1. Support following operators to be overloaded for Complex numbers :
            
            d. Display Complex number.    
*/

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    Complex operator - (const Complex& other) {
        Complex temp;
        temp.real = real - other.real;
        temp.imag = imag - other.imag;
        return temp;
    }

    Complex operator * (const Complex& other) {
        Complex temp;
        temp.real = (real * other.real) - (imag * other.imag);
        temp.imag = (real * other.imag) + (imag * other.real);
        return temp;
    }

    void display() {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "i" << endl;
        else cout << " - " << -imag << "i" << endl;
    }
};

int main() 
{
    Complex num1(2, 3), num2(4, -1), result;

    result = num1 + num2;
    cout << "Sum: ";
    result.display();

    result = num1 - num2;
    cout << "Difference: ";
    result.display();

    result = num1 * num2;
    cout << "Product: ";
    result.display();

    return 0;
}

/*  OUTPUT

    Sum: 6 + 2i
    Difference: -2 + 4i
    Product: 11 + 10i
*/