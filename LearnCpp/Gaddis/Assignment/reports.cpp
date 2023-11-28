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
                repListing();
                break;
            case 2:
                repWholesale();
                break;
            case 3:
                repRetail();
                break;
            case 4:
                repQty();
                break;
            case 5:
                repCost();
                break;
            case 6:
                repAge();
                break;
            case 7:
                cout << "You chose 7. Return to the Main Menu" << endl;
                break;
        }
    } while (choice != 7); // Repeat the loop until the user selects 7

    return 0;
}

void repListing()
{
    cout << "You selected Inventory Listing." << endl;
}

void repWholesale()
{
    cout << "You selected Inventory Wholesale Value" << endl;
}

void repRetail()
{
    cout << "You selected Inventory Retail Value" << endl;
}

void repQty()
{
    cout << "You selected Listing by Quantity" << endl;
}

void repCost()
{
    cout << "You selected Listing by Cost" << endl;
}

void repAge()
{
    cout << "You selected Listing by Age" << endl;
}