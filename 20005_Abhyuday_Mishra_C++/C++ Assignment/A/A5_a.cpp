/*
    A5. Write a C++ program with following options:

        a. Find a number is Shakuntala Devi's number or not. Ex: 145
*/

#include<iostream>

//Function for calculating Factorial of a Number
int factorial(int);     /*Function prototype*/

using namespace std;

int main()
{
    int num, a, b, temp, sum = 0;

    cout << "Enter a Number - ";
    cin >> num;

    temp = num;

    while(num > 0)
    {
        a = num % 10;
        b = factorial(a);
        num = num / 10;
        sum = sum + b;
    }

    if(sum == temp)
    {
        cout << "\n" << temp << " is a Shakuntala Devi Number";
    }
    else
    {
        cout << "\n" << temp << " isn't Shakuntala Devi Number";
    }

    return 0;
}

int factorial(int x)    /*Function Definition*/
{
    int temp1 = x;

    while(--temp1 > 1)
    {
        x = x * temp1;
    }

    return x;
}

/*  OUTPUT

    Enter a Number - 143

    143 isn't Shakuntala Devi Number
*/