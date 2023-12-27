/*  Sum of Digits in a String
Write a program that asks the user to enter a series of single digit numbers with 
nothing separating them. Read the input as a C-string or a string object. The program 
should display the sum of all the single-digit numbers in the string. For example, if the 
user enters 2514, the program should display 12, which is the sum of 2, 5, 1, and 4.
The program should also display the highest and lowest digits in the string.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int sum = 0;
    int highest = 0;
    int lowest = 9;

    cout << "Enter a series of single digit numbers with nothing separating them: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        sum += str[i] - '0';

        if (str[i] - '0' > highest)
        {
            highest = str[i] - '0';
        }

        if (str[i] - '0' < lowest)
        {
            lowest = str[i] - '0';
        }
    }

    cout << "The sum of all the single-digit numbers in the string is " << sum << endl;
    cout << "The highest digit in the string is " << highest << endl;
    cout << "The lowest digit in the string is " << lowest << endl;

    return 0;
}