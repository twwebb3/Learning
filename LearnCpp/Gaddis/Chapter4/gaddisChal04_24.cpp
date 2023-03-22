/* Internet Service Provider, Part 2
Modify the Program in Programming Challenge 23 so that it also displays how much
money Package A customers would save if they purchased packages B or C, and how
much money Package B customers would save if they purchased Package C. If there
would be no savings, no message should be printed.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char package;
    int hours;
    double total, savings;

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
        if (total > 14.95)
        {
            savings = total - 14.95;
            cout << "You would save $" << savings << " if you purchased Package B." << endl;
        }
        if (total > 19.95)
        {
            savings = total - 19.95;
            cout << "You would save $" << savings << " if you purchased Package C." << endl;
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
        if (total > 19.95)
        {
            savings = total - 19.95;
            cout << "You would save $" << savings << " if you purchased Package C." << endl;
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