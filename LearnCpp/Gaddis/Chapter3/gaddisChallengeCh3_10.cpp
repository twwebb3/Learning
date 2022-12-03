/*  Celsius to Fahrenheit
Write a program that converts Celsius temperatures to Fahrenheit temperatures. The formula is

F = (9/5)C + 32

F is the Fahrenheit temperature and C is the Celsius temperature.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    double celsius, fahrenheit;
    
    // Get user input
    cout << "Enter a Celsius temperature: ";
    cin >> celsius;
    
    // Calculate Fahrenheit temperature
    fahrenheit = (9.0/5.0) * celsius + 32;
    
    // Display Fahrenheit temperature
    cout << "The Fahrenheit equivalent is " << fahrenheit << endl;
    
    return 0;
}
