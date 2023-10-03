/*  Savings Account Balance
Write a program that calculates the balance of a savings account at the end of a period 
of time. It should ask the user for the annual interest rate, the starting balance, and 
the number of months that have passed since the account was established. A loop 
should then iterate once for every month, performing the following:
A) Ask the user for the amount deposited into the account during the month. (Do not 
   accept negative numbers.) This amount should be added to the balance.
B) Ask the user for the amount withdrawn from the account during the month. (Do 
   not accept negative numbers.) This amount should be subtracted from the balance.
C) Calculate the monthly interest. The monthly interest rate is the annual interest rate 
   divided by twelve. Multiply the monthly interest rate by the balance, and add the 
   result to the balance.
After the last iteration, the program should display the ending balance, the total 
amount of deposits, the total amount of withdrawals, and the total interest earned.

NOTE: If a negative balance is calculated at any point, a message should be displayed 
indicating the account has been closed and the loop should terminate.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double annualInterestRate, startingBalance, monthlyInterestRate, balance, deposit, withdrawal, totalDeposits = 0, totalWithdrawals = 0, totalInterest = 0;
    int months;

    cout << "What is the annual interest rate? ";
    cin >> annualInterestRate;

    while (annualInterestRate < 0)
    {
        cout << "Please enter a positive integer: ";
        cin >> annualInterestRate;
    }

    cout << "What is the starting balance? ";
    cin >> startingBalance;

    while (startingBalance < 0)
    {
        cout << "Please enter a positive integer: ";
        cin >> startingBalance;
    }

    cout << "How many months have passed since the account was established? ";
    cin >> months;

    while (months < 0)
    {
        cout << "Please enter a positive integer: ";
        cin >> months;
    }

    balance = startingBalance;
    monthlyInterestRate = annualInterestRate / 12;

    for (int i = 1; i <= months; i++)
    {
        cout << "How much was deposited in month " << i << "? ";
        cin >> deposit;

        while (deposit < 0)
        {
            cout << "Please enter a positive integer: ";
            cin >> deposit;
        }

        cout << "How much was withdrawn in month " << i << "? ";
        cin >> withdrawal;

        while (withdrawal < 0)
        {
            cout << "Please enter a positive integer: ";
            cin >> withdrawal;
        }

        balance += deposit - withdrawal + (balance * monthlyInterestRate);
        totalDeposits += deposit;
        totalWithdrawals += withdrawal;
        totalInterest += balance * monthlyInterestRate;
    }

    cout << fixed << setprecision(2);
    cout << "Ending balance: $" << balance << endl;
    cout << "Total deposits: $" << totalDeposits << endl;
    cout << "Total withdrawals: $" << totalWithdrawals << endl;
    cout << "Total interest earned: $" << totalInterest << endl;

    return 0;
}
