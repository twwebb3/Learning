/*  Angle Calculator
Write a program that asks the user for an angle, entered in radians. The program
should then display the sine, cosine, and tangent of the angle. (Use the sine, cos, and
tan library functions to determine these values.) The output should be displayed in
fixed-point notation, rounded to four decimal places of precision.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declare variables
    double angle, sine, cosine, tangent;

    // Get the angle
    cout << "Enter the angle: ";
    cin >> angle;

    // Calculate the sine
    sine = sin(angle);
    // round sine to 4 decimal places
    sine = round(sine * 10000) / 10000;

    // Calculate the cosine
    cosine = cos(angle);
    // round cosine to 4 decimal places
    cosine = round(cosine * 10000) / 10000;

    // Calculate the tangent
    tangent = tan(angle);
    // round tangent to 4 decimal places
    tangent = round(tangent * 10000) / 10000;

    // Display the sine
    cout << "The sine is " << sine << endl;

    // Display the cosine
    cout << "The cosine is " << cosine << endl;

    // Display the tangent
    cout << "The tangent is " << tangent << endl;

    return 0;
}