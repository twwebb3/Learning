/* File Input (Freezing and Boiling Points Modification
Modify the program that you wrote for Programming Challenge 20 (Freezing and
Boiling Points) so it reads its input from a file instead of the keyboard. Perform the
necessary test to determine if an error occurs when the file is opened. If an error
occurs, display a message informing the user.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int temp;
    ifstream inputFile;

    inputFile.open("temps.txt");

    if (inputFile)
    {
        while (inputFile >> temp)
        {
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
        }
        inputFile.close();
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    return 0;
}