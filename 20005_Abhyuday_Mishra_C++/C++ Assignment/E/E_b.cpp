/*
    E. Operator-Overloading :

        E1. Support following operators to be overloaded for Complex numbers :
        
            b. Multiplication.
*/

#include <iostream>

/* 
    We have a class Complex which represents complex numbers. We overload the * operator using the function operator*.
*/

class ComplexNumber 
{
    private:

    double real;
    double imaginary;

    public:

    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    ComplexNumber operator*(const ComplexNumber& other) const 
    {
        double resultReal = (real * other.real) - (imaginary * other.imaginary);
        double resultImaginary = (real * other.imaginary) + (imaginary * other.real);

        return ComplexNumber(resultReal, resultImaginary);
    }

    void display() const 
    {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

/*
    In the main function, we create two complex numbers num1 and num2, 
    set their values, multiply them using the * operator, 
    and then display the result.
*/
int main() 
{
    ComplexNumber num1(2, 3);
    ComplexNumber num2(4, -1);

    ComplexNumber result = num1 * num2;

    std::cout << "Result of multiplication: ";
    result.display();

    return 0;
}

/*  OUTPUT

    Result of multiplication: 11 + 10i
*/