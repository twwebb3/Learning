/* Assignment create cashier screen that shows a table with quantity, ISBN, title, price and total with rows for subtal tax and total.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Display the menu
    cout << " Serendipity Booksellers" << endl;
    cout << " Cashier Module" << endl;

    cout << "Quantity" << setw(10) << "ISBN" << setw(10) << "Title" << setw(10) << "Price" << setw(10) << "Total" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << setw(32) << "Subtotal" << endl;
    cout << setw(32) << "Tax" << endl;
    cout << setw(32) << "Total" << endl;

    cout << endl;
    cout << "Thank You for Shopping at Serendipity!" << endl;

    return 0;
}