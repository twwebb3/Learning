/* create inventory database menu screen with five options and a prompt to enter your choice. */

#include "invmenu.h"
#include <iostream>
#include <iomanip>

using namespace std;

int invMenu()
{
   int choice;

   do
   {
       // Display the menu
       cout << "   Serendipity Booksellers" << endl;
       cout << "     Inventory Database" << endl;

       cout << "1. Look Up a Book" << endl;
       cout << "2. Add a Book" << endl;
       cout << "3. Edit a Book's Record" << endl;
       cout << "4. Delete a Book" << endl;
       cout << "5. Return to the Main Menu" << endl;

       cout << endl; // Blank line

       cout << "Enter your choice: ";
       cin >> choice;

       // validate the input
       while (choice < 1 || choice > 5)
       {
           cout << "Please enter a number between 1 and 5: ";
           cin >> choice;
       }

       // use a switch statement to display the users choice
       switch (choice)
       {
           case 1:
               lookUpBook();
               break;
           case 2:
               addBook();
               break;
           case 3:
               editBook();
               break;
           case 4:
               deleteBook();
               break;
           case 5:
               cout << "You chose 5. Return to the Main Menu" << endl;
               break;
       }
   } while (choice != 5); // Repeat the loop until the user selects 5

   return 0;
}

void lookUpBook()
{
   cout << "You chose 1. Look Up a Book" << endl;
}

void addBook()
{
   cout << "You chose 2. Add a Book" << endl;
}

void editBook()
{
   cout << "You chose 3. Edit a Book's Record" << endl;
}

void deleteBook()
{
   cout << "You chose 4. Delete a Book" << endl;
}
