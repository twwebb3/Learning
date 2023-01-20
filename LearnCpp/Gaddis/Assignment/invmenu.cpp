/* create inventory database menu screen with five options and a prompt to enter your choice. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Display the menu
    cout << "    Serendipity Booksellers" << endl;
    cout << "      Inventory Database" << endl;

    cout << "1. Look Up a Book" << endl;
    cout << "2. Add a Book" << endl;
    cout << "3. Edit a Book's Record" << endl;
    cout << "4. Delete a Book" << endl;
    cout << "5. Return to the Main Menu" << endl;

    cout << endl; // Blank line

    cout << "Enter your choice: " << endl;

    return 0;
}