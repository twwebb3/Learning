/*  Automobile Costs
Write a program that asks the user to enter the
monthly costs for the following expenses incurred
from operating his or her automobile: loan
payment, insurance, gas, oil, tires, and
maintenance. The program should then display the
total monthly cost of these expenses, and the
total annual cost of these expenses.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    double loanPayment, insurance, gas, oil, tires, maintenance, totalMonthly, totalAnnual;
    
    // Get user input
    cout << "Enter the monthly cost for the following expenses incurred from operating your automobile: " << endl;
    cout << "Loan payment: ";
    cin >> loanPayment;
    cout << "Insurance: ";
    cin >> insurance;
    cout << "Gas: ";
    cin >> gas;
    cout << "Oil: ";
    cin >> oil;
    cout << "Tires: ";
    cin >> tires;
    cout << "Maintenance: ";
    cin >> maintenance;
    
    // Calculate total monthly and annual costs
    totalMonthly = loanPayment + insurance + gas + oil + tires + maintenance;
    totalAnnual = totalMonthly * 12;

    // Display total monthly and annual costs
    cout << "The total monthly cost of these expenses is $" << totalMonthly << endl;
    cout << "The total annual cost of these expenses is $" << totalAnnual << endl;

    return 0;
}

