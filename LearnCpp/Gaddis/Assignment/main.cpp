/* Assignment: Create code to display a main menu with a title, four options, and a prompt to enter your choice.*/

// update to call the functions from the other modules


#include <iostream>
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"

using namespace std;

int main()
{
   int choice;

   do
   {
       // Display the menu
       cout << " Serendipity Booksellers" << endl;
       cout << "       Main Menu" << endl;

       cout << "1. Cashier Module" << endl;
       cout << "2. Inventory Database Module" << endl;
       cout << "3. Report Module" << endl;
       cout << "4. Exit" << endl;

       cout << "Enter your choice: ";

       // Allow the user to input a number between 1 and 4
       cin >> choice;

       // validate the input
       while (choice < 1 || choice > 4)
       {
           cout << "Please enter a number between 1 and 4: ";
           cin >> choice;
       }

       cout << endl; // Blank line

       // use a switch statement to display the users choice
       switch (choice)
       {
           case 1:
               cout << "You chose 1. Cashier Module" << endl;
                cashier();
           case 2:
               cout << "You chose 2. Inventory Database Module" << endl;
                invMenu();
           case 3:
               cout << "You chose 3. Report Module" << endl;
                reports();
           case 4:
               cout << "You chose 4. Exit" << endl;
               break;
       }
   } while (choice != 4); // Repeat the loop until the user selects 4

   return 0;
}
