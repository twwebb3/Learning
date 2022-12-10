/*  Monthly Payments
The monthly payment on a loan may be calculated by the following formula:

Payment = L*(Rate * (1+Rate)^N)/((1+Rate)^N - 1)

Rate is the monthly interest rate, which is the annual interest rate divided by 12.
(12% annual interest would be 1 percent monthly interest.) N is the number of pay-
ments and L is the amount of the loan. Write a program that asks for these values and
displays a report similar to

Loan Amount:				$ 10000.00
Monthly Interest Rate:			    1%
Number of Payments:				    36
Monthly Payment:			$   332.14
Amount Paid Back:			$ 11957.15
Interest Paid:				$  1957.15

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declare variables
    double loan, rate, payments, payment, amount, interest;

    // Get the loan amount
    cout << "Enter the loan amount: ";
    cin >> loan;

    // Get the monthly interest rate
    cout << "Enter the monthly interest rate: ";
    cin >> rate;

    // Get the number of payments
    cout << "Enter the number of payments: ";
    cin >> payments;

    // Calculate the monthly payment
    payment = loan * (rate * pow((1 + rate), payments)) / (pow((1 + rate), payments) - 1);

    // Calculate the amount paid back
    amount = payment * payments;

    // Calculate the interest paid
    interest = amount - loan;

    // Display the report
    cout << "Loan Amount: $" << loan << endl;
    cout << "Monthly Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Number of Payments: " << payments << endl;
    cout << "Monthly Payment: $" << payment << endl;
    cout << "Amount Paid Back: $" << amount << endl;
    cout << "Interest Paid: $" << interest << endl;

    return 0;
}
