/*  A3. Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
    Sample Output:
    Input the value for nth term: 5
    1 = 1
    1+2 = 3
    1+2+3 = 6
    1+2+3+4 = 10
    1+2+3+4+5 = 15
    The sum of the above series is: 35
*/

#include <iostream>
using namespace std;

int main()
{
  int i, j, n, sum, total = 0;

  cout << "Input the value for nth term : ";
  cin >> n;

  for (i = 1; i <= n; i++)      //Outer Loop
  {
    sum = 0;

    for (j = 1; j <= i; j++)    //Inner Loop
    {
      total += j;
      sum += j;
      cout << j;

      if (j < i) 
      {
        cout << "+";    
      }
    }

    cout << " = " << sum << endl;
  }

  cout << "\nThe sum of the above series is: " << total << endl;

  return 0;
}

/*  OUTPUT

    Input the value for nth term : 7
    1 = 1
    1+2 = 3
    1+2+3 = 6
    1+2+3+4 = 10
    1+2+3+4+5 = 15
    1+2+3+4+5+6 = 21
    1+2+3+4+5+6+7 = 28
*/