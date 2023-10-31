/*  Using Files--Savings Account Balance Modification
Modify the Savings Account Balance program described in Programming Challenge 
16 so that it writes the final report to a file. After the program runs, print the file to 
hand in to your instructor.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream outputFile;
    double balance, interestRate, interest, totalInterest = 0;

    cout << "Enter the starting balance: ";
    cin >> balance;

    cout << "Enter the annual interest rate: ";
    cin >> interestRate;

    cout << "Enter the number of months that have passed since the account was established: ";
    int months;
    cin >> months;

    outputFile.open("SavingsAccountBalance.txt");

    if (outputFile)
    {
        outputFile << "Starting balance: $" << balance << endl;
        outputFile << "Annual interest rate: " << interestRate << "%" << endl;
        outputFile << "Number of months passed: " << months << endl;
        outputFile << endl;
        outputFile << "Month\tInterest\tBalance" << endl;
        outputFile << "--------------------------------" << endl;

        for (int i = 1; i <= months; i++)
        {
            interest = (balance * (interestRate / 100)) / 12;
            totalInterest += interest;
            balance += interest;

            outputFile << i << "\t$" << setw(9) << interest << "\t$" << setw(9) << balance << endl;
        }

        outputFile << endl;
        outputFile << "Total interest earned: $" << totalInterest << endl;
        outputFile << "Final balance: $" << balance << endl;

        outputFile.close();
    }
    else
    {
        cout << "Error opening the file." << endl;
    }

    return 0;
}