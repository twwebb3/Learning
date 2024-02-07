/*  RetailItem Class
Write a class named RetailItem that holds data about an item in a retail store. The 
class should have the following member variables:
• description. A string that holds a brief description of the item.
• unitsonhand. An int that holds the number of units currently in inventory.
• price. A double that holds the item's retail price.
Write a consuctor that accepts arguments for each member variable, appropriate
mutator functions that store values in these member variables, and accessor functions
that return the values in these member variables. Once you have written the class,
write a separate program that creates three RetailItem objects and stores the 
following data in them.

Description  Units On Hand  Price
Item #1  Jacket  12  59.95
Item #2  Designer Jeans  40  34.95
Item #3  Shirt  20  24.95
*/

#include <iostream>
#include <string>

using namespace std;

class RetailItem
{
private:
    string description;
    int unitsonhand;
    double price;
public:
    RetailItem(string d, int u, double p)
    {
        description = d;
        unitsonhand = u;
        price = p;
    }

    void setDescription(string d)
    {
        description = d;
    }

    void setUnitsonhand(int u)
    {
        unitsonhand = u;
    }

    void setPrice(double p)
    {
        price = p;
    }

    string getDescription()
    {
        return description;
    }

    int getUnitsonhand()
    {
        return unitsonhand;
    }

    double getPrice()
    {
        return price;
    }
};


int main()
{
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    cout << "Item #1" << endl;
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Units On Hand: " << item1.getUnitsonhand() << endl;
    cout << "Price: " << item1.getPrice() << endl;

    cout << "Item #2" << endl;
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Units On Hand: " << item2.getUnitsonhand() << endl;
    cout << "Price: " << item2.getPrice() << endl;

    cout << "Item #3" << endl;
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Units On Hand: " << item3.getUnitsonhand() << endl;
    cout << "Price: " << item3.getPrice() << endl;

    return 0;
}