/*  Interest Earned
Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as

Amount = Principal * (1+(Rate)/T)^T

Principal is the balance in the savings account, Rate is the interest rate, and T is the number of times the interest is compounded during a year (T is 4 if the interest is compounded quarterly).

Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded. It should display a report similar to

Interest Rate:			4.25%
Times Compounded:		  12
Principal:			$1000.00
Interest:			$  43.34
Amount in Savings:  $1043.34
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declare variables
    double principal, rate, times, interest, amount;

    // Get the principal
    cout << "Enter the principal: ";
    cin >> principal;

    // Get the interest rate
    cout << "Enter the interest rate: ";
    cin >> rate;

    // Get the number of times the interest is compounded
    cout << "Enter the number of times the interest is compounded: ";
    cin >> times;

    // Calculate the interest
    interest = principal * pow((1 + (rate / 100) / times), times) - principal;

    // Calculate the amount
    amount = principal + interest;

    // Display the report
    cout << "Interest Rate: " << rate << "%" << endl;
    cout << "Times Compounded: " << times << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}

