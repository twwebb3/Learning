/* Software Sales
A software company sells a package that retails for $99. Quantity discounts are given
according to the following table:
Quantity Discount
10-19 20%
20-49 30%
50-99 40%
100 or more 50%
Write a program that asks for the number of units sold and computes the total cost of
the purchase.

Input Validation: Make sure the number of units is greater than 0.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int units;
    double total;

    cout << "Enter the number of units sold: ";
    cin >> units;

    if (units < 0)
    {
        cout << "You did not enter a number greater than 0" << endl;
    }
    else if (units >= 10 && units <= 19)
    {
        total = units * 99 * .8;
        cout << "The total cost of the purchase is $" << total << endl;
    }
    else if (units >= 20 && units <= 49)
    {
        total = units * 99 * .7;
        cout << "The total cost of the purchase is $" << total << endl;
    }
    else if (units >= 50 && units <= 99)
    {
        total = units * 99 * .6;
        cout << "The total cost of the purchase is $" << total << endl;
    }
    else if (units >= 100)
    {
        total = units * 99 * .5;
        cout << "The total cost of the purchase is $" << total << endl;
    }
    else
    {
        total = units * 99;
        cout << "The total cost of the purchase is $" << total << endl;
    }

    return 0;
}
