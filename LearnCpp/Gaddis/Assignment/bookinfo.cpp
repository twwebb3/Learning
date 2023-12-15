/* create a program to display book information including ISBN, title, author, publisher, date added, quantity on hand, wholesale cost, and retail price*/

#include "bookinfo.h"
#include <iostream>
#include <iomanip>

using namespace std;

int bookInfo()
{
    cout << " Serendipity Booksellers" << endl; // needs to be centered
    cout << "    Book Information" << endl; // needs to be centered

    cout << endl; // Blank line

    cout << "ISBN: " << endl;
    cout << "Title: " << endl;
    cout << "Author: " << endl;
    cout << "Publisher: " << endl;
    cout << "Date Added: " << endl;
    cout << "Quantity-On-Hand: " << endl;
    cout << "Wholesale Cost: " << endl;
    cout << "Retail Price: " << endl;

    return 0;
}