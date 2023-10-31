/*  Using Files--Student Line Up
Modify the Student Line Up program described in Programming Challenge 14 so that 
it gets the names from a data file. Names should be read in until there is no more data 
to read. Data to test your program can be found in the LineUp.dat file.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    string name, first, last;

    inputFile.open("LineUp.dat");

    if (inputFile)
    {
        if (inputFile >> name)  // Ensure that a name is read successfully
        {
            first = name;
            last = name;

            while (inputFile >> name)
            {
                if (name < first)
                {
                    first = name;
                }
                else if (name > last)
                {
                    last = name;
                }
            }
        }

        inputFile.close();

        cout << "First student in line: " << first << endl;
        cout << "Last student in line: " << last << endl;
    }
    else
    {
        cout << "Error opening the file." << endl;
    }

    return 0;
}
