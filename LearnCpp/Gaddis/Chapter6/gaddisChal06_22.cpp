/*  Prime Number List
Use the isPrime function that you wrote in Programming Challenge 21 in a program 
that stores a list of all the prime numbers from 1 through 100 in a file.
*/

#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int);

int main()
{
    ofstream outputFile;
    outputFile.open("primeNumbers.txt");

    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
            outputFile << i << endl;
    }

    outputFile.close();

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