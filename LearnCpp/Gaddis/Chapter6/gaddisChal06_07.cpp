/*  Celsius Temperature Table
The formula for converting a temperature from Fahrenheit to Celsius is
C = (5/9)(F - 32)
where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function 
named celsius that accepts a Fahrenheit temperature as an argument. The function 
should return the temperature, converted to Celsius. Demonstrate the function by 
calling it in a loop that displays a rable of the Fahrenheit temperatures O through 20 
and their Celsius equivalents.
*/

#include <iostream>
#include <iomanip>

using namespace std;

float celsius(float);

int main()
{
    float celsiusTemp;

    cout << "Fahrenheit    Celsius" << endl;
    cout << "---------------------" << endl;

    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++)
    {
        celsiusTemp = celsius(fahrenheit);
        cout << setw(5) << fahrenheit << setw(15) << celsiusTemp << endl;
    }

    return 0;
}

float celsius(float fahrenheit)
{
    float celsiusTemp;

    celsiusTemp = (5.0 / 9.0) * (fahrenheit - 32.0);

    return celsiusTemp;
}
