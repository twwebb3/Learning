/*  Inventory Program
Write a program that uses a structure to store the following inventory data in a file:
Item Description
Quantity on Hand
Wholesale Cost
Retail Cost
Date Added to Inventory
The program should have a menu that allows the user to perform the following tasks:
• Add new records to the file.
• Display any record in the file.
• Change any record in the file.
Input Validation. The program should not accept quarties be wholesale or detail
costs, less than 0. The program should not accept dates that the programmer determines
are unreasonable.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Inventory
{
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

int main()
{
    Inventory item;

    ofstream output("inventory.txt");

    cout << "Enter the item description: ";
    getline(cin, item.description);
    cout << "Enter the quantity: ";
    cin >> item.quantity;
    cout << "Enter the wholesale cost: ";
    cin >> item.wholesaleCost;
    cout << "Enter the retail cost: ";
    cin >> item.retailCost;
    cout << "Enter the date added: ";
    cin >> item.dateAdded;

    output << item.description << endl;
    output << item.quantity << endl;
    output << item.wholesaleCost << endl;
    output << item.retailCost << endl;
    output << item.dateAdded << endl;

    output.close();

    return 0;
}
