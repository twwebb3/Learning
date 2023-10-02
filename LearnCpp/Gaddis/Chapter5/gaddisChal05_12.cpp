/*  Celsius to Fahrenheit Table
In Programming Challenge 10 of Chapter 3 you were asked to write a program that 
converts a Celsius temperature to Fahrenheit. Modify that program so it uses a loop 
to display a table of the Celsius temperatures 0-20, and their Fahrenheit equivalents.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "Celsius\t\tFahrenheit" << endl;
    cout << "-----------------------" << endl;

    for (celsius = 0; celsius <= 20; celsius++)
    {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        cout << celsius << "\t\t" << fahrenheit << endl;
    }

    return 0;
}

