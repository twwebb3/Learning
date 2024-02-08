/*  Inventory Class
Design an Inventory class that can hold information and calculate data for items in a 
retail store's inventory. The class should have the following private member variables:

Variable Name  Description
itemNumber  An int that holds the item's item number.
quantity  An int for holding the quantity of the items on hand.
cost  A double for holding the wholesale per-unit cost of the item
totalCost  A double for holding the total inventory cost of the item (calculated as quantity times cost)

The class should have the following public member functions:
Member Function  Description
Default Constructor  Sets all the member variables to 0.
Constructor #2  Accepts an item's item number, quantity, and cost as arguments. These values should be assigned to the object's itemNumber, quantity, and cost member variables. The constructor should also call the setTotalCost function.
setTotalCost  Accepts an int argument and calculates the total cost of the inventory by multiplying the quantity by the cost.
setQuantity  Accepts an int argument and stores it in the quantity member variable.
setCost  Accepts a double argument and stores it in the cost member variable.
setItemNumber  Accepts an int argument and stores it in the itemNumber member variable.
getTotalCost  Returns the totalCost member variable.
getQuantity  Returns the quantity member variable.
getCost  Returns the cost member variable.
getItemNumber  Returns the itemNumber member variable.

Demonstrate the class in a driver program.

Input Validation: Do not accept negative values for item number, quantity, or cost.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory()
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }
    Inventory(int i, int q, double c)
    {
        itemNumber = i;
        quantity = q;
        cost = c;
        setTotalCost();
    }
    void setTotalCost()
    {
        totalCost = quantity * cost;
    }
    void setQuantity(int q)
    {
        quantity = q;
    }
    void setCost(double c)
    {
        cost = c;
    }
    void setItemNumber(int i)
    {
        itemNumber = i;
    }
    double getTotalCost()
    {
        return totalCost;
    }
    int getQuantity()
    {
        return quantity;
    }
    double getCost()
    {
        return cost;
    }
    int getItemNumber()
    {
        return itemNumber;
    }
};

int main()
{
    Inventory item1(1, 10, 5.0);
    Inventory item2(2, 20, 10.0);
    Inventory item3(3, 30, 15.0);

    cout << "Item #1" << endl;
    cout << "Item Number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: " << item1.getCost() << endl;
    cout << "Total Cost: " << item1.getTotalCost() << endl;

    cout << "Item #2" << endl;
    cout << "Item Number: " << item2.getItemNumber() << endl;
    cout << "Quantity: " << item2.getQuantity() << endl;
    cout << "Cost: " << item2.getCost() << endl;
    cout << "Total Cost: " << item2.getTotalCost() << endl;

    cout << "Item #3" << endl;
    cout << "Item Number: " << item3.getItemNumber() << endl;
    cout << "Quantity: " << item3.getQuantity() << endl;
    cout << "Cost: " << item3.getCost() << endl;
    cout << "Total Cost: " << item3.getTotalCost() << endl;

    return 0;
}
