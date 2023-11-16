/*  Order Status
The Middletown Wholesale Copper Wire Company sells spools of copper wiring for 
$100 each. Write a program that displays the status of an order. The program should 
have a function that asks for the following data:

• The number of spools ordered.
• The number of spools in stock.
• Whether there are special shipping and handling charges.

(Shipping and handling is normally $10 per spool.) If there are special charges, the 
program should ask for the special charges per spool.

The gathered data should be passed as arguments to another function that displays
• The number of spools ready to ship from current stock.
• The number of spools on backorder (if the number ordered is greater than what is in stock).
• Subtotal of the portion ready to ship (the number of spools ready to ship times $100).
• Total shipping and handling charges on the portion ready to ship.
• Total of the order ready to ship.

The shipping and handling parameter in the second function should have the default 
argument 10.00.

Inbut Validation: Do not accept numbers less than 1 for spools ordered. Do not 
accept a number less than O for spools in stock or shipping and handling charges.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void getOrderData(int&, int&, bool&, float&);
void displayOrderStatus(int, int, bool, float);

int main()
{
    int numSpoolsOrdered;
    int numSpoolsInStock;
    bool specialCharges;
    float specialChargesPerSpool;

    getOrderData(numSpoolsOrdered, numSpoolsInStock, specialCharges, specialChargesPerSpool);
    displayOrderStatus(numSpoolsOrdered, numSpoolsInStock, specialCharges, specialChargesPerSpool);

    return 0;
}

void getOrderData(int& numSpoolsOrdered, int& numSpoolsInStock, bool& specialCharges, float& specialChargesPerSpool)
{
    cout << "Enter the number of spools ordered: ";
    cin >> numSpoolsOrdered;

    while (numSpoolsOrdered < 1)
    {
        cout << "Number of spools ordered cannot be less than 1. Please enter a positive value: ";
        cin >> numSpoolsOrdered;
    }

    cout << "Enter the number of spools in stock: ";
    cin >> numSpoolsInStock;

    while (numSpoolsInStock < 0)
    {
        cout << "Number of spools in stock cannot be less than 0. Please enter a positive value: ";
        cin >> numSpoolsInStock;
    }

    cout << "Are there special shipping and handling charges? (Enter 1 for yes, 0 for no): ";
    cin >> specialCharges;

    while (specialCharges != 0 && specialCharges != 1)
    {
        cout << "Invalid input. Please enter 1 for yes or 0 for no: ";
        cin >> specialCharges;
    }

    if (specialCharges)
    {
        cout << "Enter the special charges per spool: ";
        cin >> specialChargesPerSpool;

        while (specialChargesPerSpool < 0)
        {
            cout << "Special charges per spool cannot be less than 0. Please enter a positive value: ";
            cin >> specialChargesPerSpool;
        }
    }
}

void displayOrderStatus(int numSpoolsOrdered, int numSpoolsInStock, bool specialCharges, float specialChargesPerSpool)
{
    int numSpoolsReadyToShip;
    int numSpoolsOnBackorder;
    float subtotal;
    float shippingAndHandling;
    float total;

    numSpoolsReadyToShip = numSpoolsInStock;
    numSpoolsOnBackorder = numSpoolsOrdered - numSpoolsInStock;

    if (numSpoolsOnBackorder < 0)
    {
        numSpoolsOnBackorder = 0;
    }

    subtotal = numSpoolsReadyToShip * 100.0;

    if (specialCharges)
    {
        shippingAndHandling = numSpoolsReadyToShip * specialChargesPerSpool;
    }
    else
    {
        shippingAndHandling = numSpoolsReadyToShip * 10.0;
    }

    total = subtotal + shippingAndHandling;

    cout << fixed << showpoint << setprecision(2);
    cout << "Number of spools ready to ship from current stock: " << numSpoolsReadyToShip << endl;
    cout << "Number of spools on backorder: " << numSpoolsOnBackorder << endl;
    cout << "Subtotal of the portion ready to ship: $" << subtotal << endl;
    cout << "Total shipping and handling charges on the portion ready to ship: $" << shippingAndHandling << endl;
    cout << "Total of the order ready to ship: $" << total << endl;
}
