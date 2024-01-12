/*  Inventory Bins
Write a program that simulates inventory bins in a warehouse. Each bin holds a 
number of the same type of parts. The program should use a structure that keeps the 
following data:

Description of the part kept in the bin
Number of parts in the bin

The program should have an array of 10 bins, initialized with the following data:

Number of Parts in the Bin


Part Description
Valve
10
5
Bearing
15
Bushing
21
Coupling
7
Flange
5
Gear

Gear Housing
25
Vacuum Gripper
18
Cable
12
Rod

The program should have the following functions:
AddParts:
a function that increases a specific bin's part count by a specified number.
RemoveParts: a function that decreases a specific bin's part count by a specified number.

When the program runs, it should repeat a loop that performs the following steps:
The user should see a list of what each bin holds and how many parts are in each bin.
The user can choose to either quit the program or select a bin. When a bin is selected, 
the user can either add parts to it or remove parts from it. The loop then repeats, 
showing the updated bin data on the screen.

Input Validation: No bin can hold more than 30 parts, so don't let the user add more 
than a bin can bold. Also, don't accept negative values for the number of parts being 
added or removed.
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
    InventoryBin bin1 = {"Valve", 10};
    InventoryBin bin2 = {"Bearing", 5};
    InventoryBin bin3 = {"Bushing", 15};
    InventoryBin bin4 = {"Coupling", 21};
    InventoryBin bin5 = {"Flange", 7};
    InventoryBin bin6 = {"Gear", 5};
    InventoryBin bin7 = {"Gear Housing", 25};
    InventoryBin bin8 = {"Vacuum Gripper", 18};
    InventoryBin bin9 = {"Cable", 12};
    InventoryBin bin10 = {"Rod", 9};

    InventoryBin bins[10] = {bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8, bin9, bin10};

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

