/* Assignment create cashier screen that shows a table with quantity, ISBN, title, price and total with rows for subtal tax and total.
Add an input screen for the cashier to enter the quantity of the book and the ISBN of the book.
*/

#include "cashier.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int cashier()
{
   char repeat;

   do
   {
       // create char variable to hold date
       char date[11];
       int quantity;
       char isbn[14];
       char title[80];
       float price;
       float total;
       float subtotal;
       float tax;
       float taxrate = 0.06;
       float totalTax;

       // Display the menu
       cout << " Serendipity Booksellers" << endl;
       cout << " Cashier Module" << endl;

       cout << endl; // Blank line

       cout << "Date: ";
       cin >> date;

       cout << "Quanty of Book: ";
       cin >> quantity;

       cout << "ISBN: ";
       cin >> isbn;

       cout << "Title: ";
       cin.ignore();
       cin.getline(title, 80);

       cout << "Price: ";
       cin >> price;

       cout << endl; // Blank line

       cout << " Serendipity Booksellers" << endl;

       cout << "Date: " << date << endl;

       cout << endl; // Blank line

       total = quantity * price;
       //round total to 2 decimal places
       total = round(total * 100) / 100;
       subtotal = total;
       tax = subtotal * taxrate;
       //round tax to 2 decimal places
       tax = round(tax * 100) / 100;
       totalTax = subtotal + tax;
       //round totalTax to 2 decimal places
       totalTax = round(totalTax * 100) / 100;

       cout << "Quantity" << setw(10) << "ISBN" << setw(10) << "Title" << setw(10) << "Price" << setw(10) << "Total" << endl;
       cout << "------------------------------------------------------------------------------" << endl;
       cout << quantity << setw(10) << isbn << setw(10) << title << setw(10) << price << setw(10) << total << endl;
       cout << endl;
       cout << setw(32) << "Subtotal" << setw(9) << subtotal << endl;
       cout << setw(32) << "Tax" << setw(9) << tax << endl;
       cout << setw(32) << "Total" << setw(9) << totalTax << endl;

       cout << endl;
       cout << "Thank You for Shopping at Serendipity!" << endl;

       cout << "Do you want to process another transaction? (y/n): ";
       cin >> repeat;
   } while (repeat == 'y' || repeat == 'Y');

   return 0;
}