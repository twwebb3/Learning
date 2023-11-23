/* create a display screen the allows the user to select from seven reports to view.*/

#include "reports.h"
#include <iostream>
#include <iomanip>

using namespace std;

int reports()
{  
    int choice;
    
    do
    {
        // Display the menu
        cout << " Serendipity Booksellers" << endl;
        cout << "       Report Module" << endl;

        cout << "1. Inventory Listing" << endl;
        cout << "2. Inventory Wholesale Value" << endl;
        cout << "3. Inventory Retail Value" << endl;
        cout << "4. Listing by Quantity" << endl;
        cout << "5. Listing by Cost" << endl;
        cout << "6. Listing by Age" << endl;
        cout << "7. Return to the Main Menu" << endl;

        cout << endl; // Blank line

        cout << "Enter your choice: ";
        cin >> choice;

        // validate the input
        while (choice < 1 || choice > 7)
        {
            cout << "Please enter a number between 1 and 7: ";
            cin >> choice;
        }

        // use a switch statement to display the users choice
        switch (choice)
        {
            case 1:
                cout << "You chose 1. Inventory Listing" << endl;
                break;
            case 2:
                cout << "You chose 2. Inventory Wholesale Value" << endl;
                break;
            case 3:
                cout << "You chose 3. Inventory Retail Value" << endl;
                break;
            case 4:
                cout << "You chose 4. Listing by Quantity" << endl;
                break;
            case 5:
                cout << "You chose 5. Listing by Cost" << endl;
                break;
            case 6:
                cout << "You chose 6. Listing by Age" << endl;
                break;
            case 7:
                cout << "You chose 7. Return to the Main Menu" << endl;
                break;
        }
    } while (choice != 7); // Repeat the loop until the user selects 7

    return 0;
}