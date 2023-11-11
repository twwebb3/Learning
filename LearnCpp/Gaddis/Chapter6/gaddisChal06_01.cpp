/*  Markup
Write a program that asks the user to enter an item's wholesale cost and its markup 
percentage. It should then display the item's retail price. For example:

• If an item's wholesale cost is 5.00 and its markup percentage is 100%, then the 
  item's retail price is 10.00.
• If an item's wholesale cost is 5.00 and its markup percentage is 50%, then the 
  item's retail price is 7.50.

The program should have a function named calculateRetail that receives the 
wholesale cost and the markup percentage as arguments, and returns the retail price 
of the item.

Input Validation: Do not accept negative values for either the wholesale cost of the 
item or the markup percentage.
*/

#include <iostream>
#include <iomanip>

using namespace std;

float calculateRetail(float, float);

int main()
{
    float wholesaleCost;
    float markupPercentage;
    float retailPrice;

    cout << "Enter the item's wholesale cost: ";
    cin >> wholesaleCost;

    while (wholesaleCost < 0)
    {
        cout << "Wholesale cost cannot be negative. Please enter a positive value: ";
        cin >> wholesaleCost;
    }

    cout << "Enter the item's markup percentage: ";
    cin >> markupPercentage;

    while (markupPercentage < 0)
    {
        cout << "Markup percentage cannot be negative. Please enter a positive value: ";
        cin >> markupPercentage;
    }

    retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    cout << fixed << setprecision(2);
    cout << "The item's retail price is $" << retailPrice << endl;

    return 0;
}

float calculateRetail(float wholesaleCost, float markupPercentage)
{
    float retailPrice;

    retailPrice = wholesaleCost + (wholesaleCost * (markupPercentage / 100));

    return retailPrice;
}