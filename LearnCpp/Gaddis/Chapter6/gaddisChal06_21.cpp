/*  isPrime Function
A prime number is a number that is only evenly divisible by itself and 1. For example, 
the number 5 is prime because it can only be evenly divided by 1 and 5. The number 
6, however, is not prime because it can be divided evenly by 1, 2, 3, and 6.

Write a function name isPrime, which takes an integer as an argument and returns 
true if the argument is a prime number, or false otherwise. Demonstrate the function 
in a complete program.
*/

#include <iostream>

using namespace std;

bool isPrime(int);

int main()
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}

bool isPrime(int number)
{
    bool status = true;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            status = false;
    }

    return status;
}
