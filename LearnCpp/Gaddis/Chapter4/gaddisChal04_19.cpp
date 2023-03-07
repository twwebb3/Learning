/* The Speed of Sound in Gases
When sound travels through a gas, its speed depends primarily on the density of the
medium. The less dense the medium, the faster the speed will be. The following table
shows the approximate speed of sound at 0 degrees centigrade, measured in meters
per second, when traveling through carbon dioxide, air, helium, and hydrogen.
Medium           Speed (Meters per Second)
Carbon Dioxide   258.0
Air              331.5
Helium           972.0
Hydrogen         1,270.0

Write a program that displays a menu allowing the user to select one of these four
gases. After a selection has been made, the user should enter the number of seconds it
took for the sound to travel in this medium from its source to the location at which it
was detected. The program should then report how far away (in meters) the source of
the sound was from the detection location.

Input Validation: Check that the user has selected one of the available menu choices.
Do not accept times less than O seconds or more than 30 seconds.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int medium;
    double time, distance;

    cout << "Select a medium: " << endl;
    cout << "1. Carbon Dioxide" << endl;
    cout << "2. Air" << endl;
    cout << "3. Helium" << endl;
    cout << "4. Hydrogen" << endl;
    cin >> medium;

    if (medium == 1)
    {
        cout << "Enter the number of seconds it took for the sound to travel in carbon dioxide: ";
        cin >> time;

        if (time < 0 || time > 30)
        {
            cout << "Invalid time" << endl;
        }
        else
        {
            distance = time * 258.0;
            cout << "The distance the source of the sound was from the detection location is " << distance << " meters" << endl;
        }
    }
    else if (medium == 2)
    {
        cout << "Enter the number of seconds it took for the sound to travel in air: ";
        cin >> time;

        if (time < 0 || time > 30)
        {
            cout << "Invalid time" << endl;
        }
        else
        {
            distance = time * 331.5;
            cout << "The distance the source of the sound was from the detection location is " << distance << " meters" << endl;
        }
    }
    else if (medium == 3)
    {
        cout << "Enter the number of seconds it took for the sound to travel in helium: ";
        cin >> time;

        if (time < 0 || time > 30)
        {
            cout << "Invalid time" << endl;
        }
        else
        {
            distance = time * 972.0;
            cout << "The distance the source of the sound was from the detection location is " << distance << " meters" << endl;
        }
    }
    else if (medium == 4)
    {
        cout << "Enter the number of seconds it took for the sound to travel in hydrogen: ";
        cin >> time;

        if (time < 0 || time > 30)
        {
            cout << "Invalid time" << endl;
        }
        else
        {
            distance = time * 1270.0;
            cout << "The distance the source of the sound was from the detection location is " << distance << " meters" << endl;
        }
    }
    else
    {
        cout << "Invalid medium" << endl;
    }

    return 0;
}
