/* Freezing and Boiling Points
The following table lists the freezing and boiling points of several substances. Write a
program that asks the user to enter a temperature, and then shows all the substances
that will freeze at that temperature and all that will boil at that temperature. For
oxygen will boil at that temperature.
example, if the user enters -20 the program should report that water will freeze and
Substance      Freezing Point (°F)     Boiling Point (°F)
Ethyl alcohol   -173                   172
Mercury         -38                    676
Oxygen          -362                   -306
Water           32                     212
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int temp;

    cout << "Enter a temperature: ";
    cin >> temp;

    if (temp <= -173)
    {
        cout << "Ethyl alcohol will freeze at this temperature" << endl;
    }
    if (temp <= -38)
    {
        cout << "Mercury will freeze at this temperature" << endl;
    }
    if (temp <= -362)
    {
        cout << "Oxygen will freeze at this temperature" << endl;
    }
    if (temp <= 32)
    {
        cout << "Water will freeze at this temperature" << endl;
    }
    if (temp >= 172)
    {
        cout << "Ethyl alcohol will boil at this temperature" << endl;
    }
    if (temp >= 676)
    {
        cout << "Mercury will boil at this temperature" << endl;
    }
    if (temp >= -306)
    {
        cout << "Oxygen will boil at this temperature" << endl;
    }
    if (temp >= 212)
    {
        cout << "Water will boil at this temperature" << endl;
    }

    return 0;
}