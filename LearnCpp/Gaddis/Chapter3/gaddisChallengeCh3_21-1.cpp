/*  Saving Numbers to a File
For this assigment you will write two programs:
1. Write a program that asks the user to enter five numbers. Use a float-
ing-point data type to hold the numbers. The program should create a 
file and save all five numbers to the file.

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

    // Get the numbers
    cout << "Enter five numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Open the file
    ofstream outputFile;
    outputFile.open("numbers.txt");

    // Write the numbers to the file
    outputFile << num1 << endl;
    outputFile << num2 << endl;
    outputFile << num3 << endl;
    outputFile << num4 << endl;
    outputFile << num5 << endl;

    // Close the file
    outputFile.close();

    return 0;
}