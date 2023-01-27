/* Assignment: Create code to display a main menu with a title, four options, and a prompt to enter your choice.*/

#include <iostream>

using namespace std;

int main()
{

    int choice;

    // Display the menu
    cout << "  Serendipity Booksellers" << endl;
    cout << "        Main Menu" << endl;

    cout << "1. Cashier Module" << endl;
    cout << "2. Inventory Database Module" << endl;
    cout << "3. Report Module" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";

    // Allow the user to input a number between 1 and 4
    cin >> choice;

    cout << endl; // Blank line


    return 0;
}
