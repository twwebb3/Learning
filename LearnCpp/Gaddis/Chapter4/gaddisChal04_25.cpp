/* Internet Service Provider, Part 3
Months with 30 days have 720 hours, and months with 31 days have 744 hours. February, 
with 28 days, has 672 hours. Enhance the input validation of the Internet Service 
Provider program by asking the user for the month (by name), and validating that
the number of hours entered is not more than the maximum for the entire month.
Here is a table of the months, their days, and number of hours in each.

Month      Days    Hours
January    31      744
February   28      672
March      31      744
April      30      720
May        31      744
June       30      720
July       31      744
August     31      744
September  30      720
October    31      744
November   30      720
December   31      744
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    char package;
    int hours;
    double total, savings;
    string month;

    cout << "Enter the package purchased (A, B, or C): ";
    cin >> package;
    cout << "Enter the number of hours used: ";
    cin >> hours;
    cout << "Enter the month: ";
    cin >> month;

    // validate hours are not too much given the month
    if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December")
    {
        if (hours > 744)
        {
            cout << "Invalid number of hours entered." << endl;
            return 0;
        }
    }
    else if (month == "February")
    {
        if (hours > 672)
        {
            cout << "Invalid number of hours entered." << endl;
            return 0;
        }
    }
    else if (month == "April" || month == "June" || month == "September" || month == "November")
    {
        if (hours > 720)
        {
            cout << "Invalid number of hours entered." << endl;
            return 0;
        }
    }
    else
    {
        cout << "Invalid month entered." << endl;
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
