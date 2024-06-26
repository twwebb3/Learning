/*  Pizza Pi
Joe's Pizza Place needs a program to calculate the number of slices a pizza of any size
can be divided into. The program should perform the following steps:

A) Ask the user for the diameter of the pizza in inches.
B) Calculate the number of slices that may be taken from a pizza of that size.
C) Display a message telling the number of slices

To calculate the number of slices that may be taken from the pizza, you must know
the following facts:

* Each slice should have an area of 14.125 inches.
* To calculate the number of slices, simply divide the area of the pizza by 14.125.
* The area of the pizza is calculated with this formula:
Area = pi * r^2 
pi = 3.14159

Make sure the output of the program displays the number of slices in fixed point
notation, rounded to one decimal place of precision. Use a named constant for pi.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declare variables
    const double PI = 3.14159;
    double diameter, radius, area, slices;

    // Get the diameter of the pizza
    cout << "Enter the diameter of the pizza: ";
    cin >> diameter;

    // Calculate the radius of the pizza
    radius = diameter / 2;

    // Calculate the area of the pizza
    area = PI * pow(radius, 2);

    // Calculate the number of slices
    slices = area / 14.125;

    // Display the number of slices
    cout << "The number of slices is " << slices << endl;

    return 0;
}
