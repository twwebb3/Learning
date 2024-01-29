/*  Inventory Screen Report
Write a program that reads the data in the file created by the program in Programming 
Challenge 13. The program should calculate and display the following data:
• The total wholesale value of the inventory
• The total retail value of the inventory
• The total quantity of all items in the inventory
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

    ifstream input("inventory.txt");

    if (input)
    {
        while (input >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded)
        {
            cout << "Item Description: " << item.description << endl;
            cout << "Quantity: " << item.quantity << endl;
            cout << "Wholesale Cost: " << item.wholesaleCost << endl;
            cout << "Retail Cost: " << item.retailCost << endl;
            cout << "Date Added: " << item.dateAdded << endl;
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    input.close();

    return 0;
}
