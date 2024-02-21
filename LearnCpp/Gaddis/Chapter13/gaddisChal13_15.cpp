/*  Cash Register
Design a CashRegister class that can be used with the InventoryItem class discussed 
in this chapter. The Cashregister class should perform the following:

1. Ask the user for the item and quantity being purchased.
2. Get the item's cost from the InventoryItem object.
3. Add a 30% profit to the cost to get the item's unit price.
4. Multiply the unit price times the quantity being purchased to get the purchase 
   subtotal.
5. Compute a 6% sales tax on the subtotal to get the purchase total.
6. Display the purchase subtotal, tax, and total on the screen.
7. Subtract the quantity being purchased from the onHand variable of the InventoryItem 
   class object.

Implement both classes in a complete program. Feel free to modify the InventoryItem 
class in any way necessary.

Imput Validation: Do not accept a negative value for the quantity of items being
purchase.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class InventoryItem
{
private:
    string description;
    double cost;
    int units;
public:
    InventoryItem()
    {
        description = "";
        cost = 0;
        units = 0;
    }
    void setDescription(string d)
    {
        description = d;
    }
    void setCost(double c)
    {
        cost = c;
    }
    void setUnits(int u)
    {
        units = u;
    }
    string getDescription()
    {
        return description;
    }
    double getCost()
    {
        return cost;
    }
    int getUnits()
    {
        return units;
    }
};

class CashRegister
{
private:
    double purchaseSubtotal;
    double purchaseTotal;
    double tax;
    double unitPrice;
    int quantity;
public:
    CashRegister()
    {
        purchaseSubtotal = 0;
        purchaseTotal = 0;
        tax = 0;
        unitPrice = 0;
        quantity = 0;
    }
    void setQuantity(int q)
    {
        quantity = q;
    }
    void setUnitPrice(double p)
    {
        unitPrice = p;
    }
    void setPurchaseSubtotal(double s)
    {
        purchaseSubtotal = s;
    }
    void setTax(double t)
    {
        tax = t;
    }
    void setPurchaseTotal(double t)
    {
        purchaseTotal = t;
    }
    int getQuantity()
    {
        return quantity;
    }
    double getUnitPrice()
    {
        return unitPrice;
    }
    double getPurchaseSubtotal()
    {
        return purchaseSubtotal;
    }
    double getTax()
    {
        return tax;
    }
    double getPurchaseTotal()
    {
        return purchaseTotal;
    }
};

int main()
{
    InventoryItem item;
    CashRegister registerInstance;
    string description;
    double cost;
    int units;
    int quantity;

    cout << "Enter the item description: ";
    getline(cin, description);
    item.setDescription(description);

    cout << "Enter the item cost: ";
    cin >> cost;
    item.setCost(cost);

    cout << "Enter the number of units: ";
    cin >> units;
    item.setUnits(units);

    cout << "Enter the quantity being purchased: ";
    cin >> quantity;
    while (quantity < 0)
    {
        cout << "The quantity cannot be less than 0. Please enter a quantity greater than 0: ";
        cin >> quantity;
    }
    registerInstance.setQuantity(quantity);

    registerInstance.setUnitPrice(item.getCost() * 1.3);
    registerInstance.setPurchaseSubtotal(registerInstance.getUnitPrice() * registerInstance.getQuantity());
    registerInstance.setTax(registerInstance.getPurchaseSubtotal() * 0.06);
    registerInstance.setPurchaseTotal(registerInstance.getPurchaseSubtotal() + registerInstance.getTax());

    cout << fixed << showpoint << setprecision(2);
    cout << "Purchase subtotal: $" << registerInstance.getPurchaseSubtotal() << endl;
    cout << "Tax: $" << registerInstance.getTax() << endl;
    cout << "Purchase total: $" << registerInstance.getPurchaseTotal() << endl;

    item.setUnits(item.getUnits() - registerInstance.getQuantity());

    return 0;
}