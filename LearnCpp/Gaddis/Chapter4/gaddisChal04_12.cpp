/* Bank Charges
A bank charges $10 per month plus the following check fees for a commercial check-
ing account:
$.10 each for fewer than 20 checks
$.08 each for 20-39 checks
$.06 each for 40-59 checks
$.04 each for 60 or more checks

The bank also charges an extra $15 if the balance of the account falls below $400
(before any check fees are applied). Write a program that asks for the beginning bal-
ance and the number of checks written. Compute and display the bank's service fees
for the month.

Input Validation: Do not accept a negative value for the number of checks written. If
a negative value is given for the beginning balance, display an urgent message indicat-
ing the account is overdrawn.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double balance, checks, fees;

    cout << "Enter the beginning balance: ";
    cin >> balance;
    cout << "Enter the number of checks written: ";
    cin >> checks;

    if (checks < 0)
    {
        cout << "Invalid number of checks written" << endl;
    }
    else if (balance < 0)
    {
        cout << "Account is overdrawn" << endl;
    }
    else if (checks < 20)
    {
        fees = 10 + (checks * .10);
        cout << "The bank's service fees for the month are $" << fees << endl;
    }
    else if (checks >= 20 && checks <= 39)
    {
        fees = 10 + (checks * .08);
        cout << "The bank's service fees for the month are $" << fees << endl;
    }
    else if (checks >= 40 && checks <= 59)
    {
        fees = 10 + (checks * .06);
        cout << "The bank's service fees for the month are $" << fees << endl;
    }
    else if (checks >= 60)
    {
        fees = 10 + (checks * .04);
        cout << "The bank's service fees for the month are $" << fees << endl;
    }

    return 0;
}
