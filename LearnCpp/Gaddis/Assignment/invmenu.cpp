/* create inventory database menu screen with five options and a prompt to enter your choice. */

#include "invmenu.h"
#include "globals.h"
#include <iostream>
#include <iomanip>
#include <string>

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
    string title;
    cout << "You chose 1. Look Up a Book" << endl;

    // prompt user to enter book title
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, title);

    // search for title in bookTitle array
    for (int i = 0; i < ROWS; i++)
    {
        if (title == bookTitle[i])
        {
            cout << "Book found!" << endl;
            cout << "Title: " << bookTitle[i] << endl;
            cout << "ISBN: " << isbn[i] << endl;
            cout << "Author: " << author[i] << endl;
            cout << "Publisher: " << publisher[i] << endl;
            cout << "Date Added: " << dateAdded[i] << endl;
            cout << "Quantity-On-Hand: " << qtyOnHand[i] << endl;
            cout << "Wholesale Cost: " << wholesale[i] << endl;
            cout << "Retail Price: " << retail[i] << endl;
        }else
        {
            cout << "Book not found." << endl;
        }
    }

}

void addBook()
{
    bool empty = false;
    
    cout << "You chose 2. Add a Book" << endl;

    // loop through bookTitle array and print contents
    for (int i = 0; i < ROWS; i++)
    {
        if (bookTitle[i].empty())
        {
            empty = true;
            // prompt user to enter book title
            cout << "Enter book title: ";
            cin.ignore();
            getline(cin, bookTitle[i]);

            cout << "Enter ISBN: ";
            cin >> isbn[i];

            cout << "Enter author: ";
            cin.ignore();
            getline(cin, author[i]);

            cout << "Enter publisher: ";
            getline(cin, publisher[i]);

            cout << "Enter date added (MM/DD/YYYY): ";
            getline(cin, dateAdded[i]);

            cout << "Enter quantity on hand: ";
            cin >> qtyOnHand[i];

            cout << "Enter wholesale cost: ";
            cin >> wholesale[i];

            cout << "Enter retail price: ";
            cin >> retail[i];
        }
    }

    if (empty)
    {
        cout << "There is space in the array." << endl;
    }
    else
    {
        cout << "There is no space in the array." << endl;
    }

}

void editBook()
{
   cout << "You chose 3. Edit a Book's Record" << endl;
}

void deleteBook()
{
   cout << "You chose 4. Delete a Book" << endl;
}
