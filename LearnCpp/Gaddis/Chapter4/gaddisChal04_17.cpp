/* Spectral Analysis
If a scientist knows the wavelength of an electromagnetic wave, he or she can determine
what type of radiation it is. Write a program that asks for the wavelength of an electro-
magnetic wave in meters and then displays what that wave is according to the chart
below.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double wavelength;

    cout << "Enter the wavelength of the electromagnetic wave in meters: ";
    cin >> wavelength;

    if (wavelength >= 1e-2)
    {
        cout << "Radio waves" << endl;
    }
    else if (wavelength >= 1e-3)
    {
        cout << "Microwaves" << endl;
    }
    else if (wavelength >= 7e-7)
    {
        cout << "Infrared" << endl;
    }
    else if (wavelength >= 4e-7)
    {
        cout << "Visible light" << endl;
    }
    else if (wavelength >= 1e-8)
    {
        cout << "Ultraviolet" << endl;
    }
    else if (wavelength >= 1e-11)
    {
        cout << "X-rays" << endl;
    }
    else if (wavelength < 1e-11)
    {
        cout << "Gamma rays" << endl;
    }

    return 0;
}