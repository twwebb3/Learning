/*  Inventory Bins
Write a program that simulates inventory bins in a warehouse. Each bin holds a 
number of the same type of parts. The program should use a structure that keeps the 
following data:

Description of the part kept in the bin
Number of parts in the bin

The course grade should then be stored in the Grade member of each structure. Once 
all this data is calculated, a table should be displayed on the screen listing each 
student's name, ID number, average test score, and course grade.

Input Validation: Be sure all the data for each student is entered. Do not accept 
negative numbers for any test score.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct InventoryBin
{
    string description;
    int numberOfParts;
};

void displayBin(InventoryBin);

int main()
{
    InventoryBin bin1 = {"Part 1", 100};
    InventoryBin bin2 = {"Part 2", 100};
    InventoryBin bin3 = {"Part 3", 100};
    InventoryBin bin4 = {"Part 4", 100};
    InventoryBin bin5 = {"Part 5", 100};

    InventoryBin bins[5] = {bin1, bin2, bin3, bin4, bin5};

    int choice = 0;
    int binNumber = 0;
    int numberOfParts = 0;

    do
    {
        cout << "1. Display the contents of a bin" << endl;
        cout << "2. Change the contents of a bin" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter the bin number: ";
            cin >> binNumber;
            displayBin(bins[binNumber - 1]);
        }
        else if (choice == 2)
        {
            cout << "Enter the bin number: ";
            cin >> binNumber;
            cout << "Enter the number of parts: ";
            cin >> numberOfParts;
            bins[binNumber - 1].numberOfParts = numberOfParts;
        }
    } while (choice != 3);

    return 0;
}

void displayBin(InventoryBin bin)
{
    cout << "Description: " << bin.description << endl;
    cout << "Number of parts: " << bin.numberOfParts << endl;
}

