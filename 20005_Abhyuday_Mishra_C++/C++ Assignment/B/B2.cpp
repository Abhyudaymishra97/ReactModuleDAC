/*
    B2. Write a C++ program to check if a given string is a Palindrome or not.

        A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar.

        Example:
            Sample Input: madam
            Sample Output: True
*/

#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char string1[20]; 
    int i, length;
    int flag = 0;
    
    cout << "Enter a string : "; 
    cin >> string1;
    
    length = strlen(string1);
    
    /*Checking if the string is pallindrome*/
    for(i = 0;i < length ;i++)
    {
        if(string1[i] != string1[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag)
    {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else 
    {
        cout << string1 << " is a palindrome" << endl; 
    }

    return 0;
}

/*  OUTPUT

    Enter a string : mom
    mom is a palindrome
*/