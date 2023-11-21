/*  A2. Write a program in C++ to display n terms of natural numbers and their sum.
    Sample Output:
    Input a number of terms: 7
    The natural numbers upto 7th terms are:
    1 2 3 4 5 6 7
    The sum of the natural numbers is: 28
*/

#include<iostream>

using namespace std;

int main()
{
    int i, num, sum = 0;

    cout << "\nInput a number a of term(s) - ";
    cin >> num;

    for(i = 1; i <= num; i++)
    {
        cout << " " << i;
        sum = sum + i;          /*Calculation of running sum*/
    }

    cout << "\n\nThe sum of the natural numbers is " << sum;

    return 0;
}

/*  OUTPUT

    Input a number a of term(s) - 10
        1 2 3 4 5 6 7 8 9 10

        The sum of the natural numbers is 55

*/