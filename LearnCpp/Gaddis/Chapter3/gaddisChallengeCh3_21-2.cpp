/*
2. Write a program that opens the file created by Program 1, reads the five
numbers, and displays them. The program should also calculate and
display the sum of the five numbers.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Declare variables
    float num1, num2, num3, num4, num5;
    float sum;

    // Open the file
    ifstream inputFile;
    inputFile.open("numbers.txt");

    // Read the numbers from the file
    inputFile >> num1;
    inputFile >> num2;
    inputFile >> num3;
    inputFile >> num4;
    inputFile >> num5;

    // Close the file
    inputFile.close();

    // Calculate the sum
    sum = num1 + num2 + num3 + num4 + num5;

    // Display the numbers
    cout << "The numbers are: " << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << endl;

    // Display the sum
    cout << "The sum is: " << sum << endl;

    return 0;
}