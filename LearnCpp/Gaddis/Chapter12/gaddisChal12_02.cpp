/*  File Display Program
Write a program that asks the user for the name of a file. The program should display 
the contents of the file on the screen. If the file's contents won't fit on a single 
screen, the program should display 24 lines of output at a time, and then pause. Each 
time the program pauses, it should wait for the user to strike a key before the next 24 lines are
displayed.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName;
    string line;
    int lineCount = 0;

    cout << "Enter the name of a file: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (inputFile)
    {
        while (getline(inputFile, line))
        {
            cout << line << endl;
            lineCount++;
            if (lineCount % 24 == 0)
            {
                cin.ignore();
                cout << "Press enter to continue...";
                cin.get();
            }
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    inputFile.close();

    return 0;
}
