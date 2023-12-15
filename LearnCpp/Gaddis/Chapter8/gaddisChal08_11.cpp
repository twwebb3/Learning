/*  Using Files--String Selection Sort Modification
Modify the program you wrote for Programming Challenge 6 so it reads in 20 strings 
from a file. The data can be found in the names.dat file.
*/

#include <iostream> 
#include <cstring>
#include <fstream>

using namespace std;

int main ()
{
    const int NUM_NAMES = 20, SIZE = 17;
    char names[NUM_NAMES][SIZE];

    char startScan, minIndex;
    char minValue[SIZE];

    // Read in names from file
    ifstream inputFile;
    inputFile.open("names.dat");

    for (int i = 0; i < NUM_NAMES; i++)
    {
        inputFile.getline(names[i], SIZE);
    }

    // Selection sort string array
    for (startScan = 0; startScan < (NUM_NAMES - 1); startScan++) {
        minIndex = startScan;
        strcpy(minValue, names[startScan]);

        for (int index = startScan + 1; index < NUM_NAMES; index++) {
            if (strcmp(names[index], minValue) < 0) {
                strcpy(minValue, names[index]);
                minIndex = index;
            }
        }

        // Swap the elements
        char temp[SIZE];
        strcpy(temp, names[startScan]);
        strcpy(names[startScan], names[minIndex]);
        strcpy(names[minIndex], temp);
    }

    // print sorted array
    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}
