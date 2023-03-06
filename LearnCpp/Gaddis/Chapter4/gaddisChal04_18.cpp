/* The Speed of Sound
The following table shows the approximate speed of sound in air, water, and steel.
Medium   Speed
Air     1,100 feet per second
Water   4,900 feet per second
Steel   16,400 feet per second

Write a program that displavs a menu allowing the user to select air, water, or steel.
After the user has made a selection, he or she should be asked to enter the distance a
sound wave will travel in the selected medium. The program will then display the
amount of time it will take. (Round the answer to four decimal places.)

Input Validation: Check that the user has selected one of the available choices from
the menu. Do not accept distances less than O.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int medium;
    double distance, time;

    cout << "Select a medium: " << endl;
    cout << "1. Air" << endl;
    cout << "2. Water" << endl;
    cout << "3. Steel" << endl;
    cin >> medium;

    if (medium == 1)
    {
        cout << "Enter the distance a sound wave will travel in air: ";
        cin >> distance;

        if (distance < 0)
        {
            cout << "Invalid distance" << endl;
        }
        else
        {
            time = distance / 1100;
            cout << "The amount of time it will take is " << time << " seconds" << endl;
        }
    }
    else if (medium == 2)
    {
        cout << "Enter the distance a sound wave will travel in water: ";
        cin >> distance;

        if (distance < 0)
        {
            cout << "Invalid distance" << endl;
        }
        else
        {
            time = distance / 4900;
            cout << "The amount of time it will take is " << time << " seconds" << endl;
        }
    }
    else if (medium == 3)
    {
        cout << "Enter the distance a sound wave will travel in steel: ";
        cin >> distance;
        
        if (distance < 0)
        {
            cout << "Invalid distance" << endl;
        }
        else
        {
            time = distance / 16400;
            cout << "The amount of time it will take is " << time << " seconds" << endl;
        }
    }
    else
    {
        cout << "Invalid selection" << endl;
    }

    return 0;
}