/* Internet Service Provider
An Internet service provider has three different subscription packages for its customers:
Package A: For 59,95 per month 10 hours of access are provided. Additional hours
           are $2.00 per hour.
Package B: For $14.95 per month 20 hours of access are provided, Additional hours
           are $1.00 per hour.
Package C: For $19.95 per month unlimited access is provided.

Write a program that calculates a customer's monthly bill. It should ask which pack-
age the customer has purchased and how many hours were used. It should then display 
the total amount due.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char package;
    int hours;
    double total;

    cout << "Enter the package purchased (A, B, or C): ";
    cin >> package;
    cout << "Enter the number of hours used: ";
    cin >> hours;

    if (hours>744)
    {
        cout << "Invalid number of hours entered." << endl;
        return 0;
    }

    if (package == 'A' || package == 'a')
    {
        if (hours <= 10)
        {
            total = 59.95;
            cout << "The total amount due is $" << total << endl;
        }
        else if (hours > 10)
        {
            total = 59.95 + ((hours - 10) * 2);
            cout << "The total amount due is $" << total << endl;
        }
    }
    else if (package == 'B' || package == 'b')
    {
        if (hours <= 20)
        {
            total = 14.95;
            cout << "The total amount due is $" << total << endl;
        }
        else if (hours > 20)
        {
            total = 14.95 + ((hours - 20) * 1);
            cout << "The total amount due is $" << total << endl;
        }
    }
    else if (package == 'C' || package == 'c')
    {
        total = 19.95;
        cout << "The total amount due is $" << total << endl;
    }
    else
    {
        cout << "Invalid package entered." << endl;
    }

    return 0;
}
