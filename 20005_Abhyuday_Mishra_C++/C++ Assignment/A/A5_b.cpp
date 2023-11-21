/*
    A5. Write a C++ program with following options:

	    b. Find range of Shakuntala Devi's numbers. Ex: between 1 to 1000 is : 1, 2, 145 
*/

#include<iostream>


//Function for calculating Factorial of a Number
int factorial(int);     /*Function prototype*/

using namespace std;

int main()
{
    int num, a, b, temp, sum;


    cout << "\n" << "Shakuntala Devi's Number(s) (1 - 1000)\n\n";

    for(int num = 1; num <= 1000; num++)
    {
        sum = 0;

        temp = num;

        while(temp > 0)
        {
            a = temp % 10;
            b = factorial(a);       /*Function Call*/
            temp = temp / 10;
            sum = sum + b;
        }

        if(sum == num)
        {
            cout << "\n" << sum;
        }
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

    Shakuntala Devi's Number(s) (1 - 1000)


    1
    2
    145
*/