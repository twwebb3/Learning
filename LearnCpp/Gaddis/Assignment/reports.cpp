/* create a display screen the allows the user to select from seven reports to view.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
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

    cout << "Enter your choice: " << endl;

    return 0;
}
