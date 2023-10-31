/*  Using Files--Numeric Processing
The Student CD contains a file named random.txt. This file contains a long list of 
random numbers. Copy the file to your hard drive and then write a program that 
opens the file, reads all the numbers from the file, and calculates the following:

A) The number of numbers in the file
B) The sum of all the numbers in the file (a running total)
C) The average of all the numbers in the file

The program should display the number of numbers found in the file, the sum of the 
numbers, and the average of the numbers.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    int number, count = 0, sum = 0;

    inputFile.open("random.txt");

    if (inputFile)
    {
        while (inputFile >> number)
        {
            count++;
            sum += number;
        }

        inputFile.close();

        cout << "The number of numbers in the file: " << count << endl;
        cout << "The sum of all the numbers in the file: " << sum << endl;
        cout << "The average of all the numbers in the file: " << (sum / count) << endl;
    }
    else
    {
        cout << "Error opening the file." << endl;
    }

    return 0;
}