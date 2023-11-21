/*
    E. Operator-Overloading :
        E1. Support following operators to be overloaded for Complex numbers :
	        a. Subtraction.
*/

#include <iostream>
using namespace std;

class Complex
{
    private:
      float real;
      float imag;
    public:
       Complex(): real(0), imag(0){ }
       void input()
       {
           cout << "Enter real and imaginary parts respectively: ";
           cin >> real;
           cin >> imag;
       }

       // Operator overloading
       Complex operator - (Complex c2)
       {
           Complex temp;
           temp.real = real - c2.real;
           temp.imag = imag - c2.imag;

           return temp;
       }

       void output()
       {
           if(imag < 0)
               cout << "Output Complex number: "<< real << imag << "i";
           else
               cout << "Output Complex number: " << real << "+" << imag << "i";
       }
};

int main()
{
    Complex c1, c2, result;

    cout<<"Enter first complex number:\n";
    c1.input();

    cout<<"Enter second complex number:\n";
    c2.input();

    // In case of operator overloading of binary operators in C++ programming, 
    // the object on right hand side of operator is always assumed as argument by compiler.
    result = c1 - c2;
    result.output();

    return 0;
}
/*  OUTPUT

    Enter first complex number:
    Enter real and imaginary parts respectively: 10 21
    Enter second complex number:
    Enter real and imaginary parts respectively: 9 11
    Output Complex number: 1+10i
*/