/*  Budget Analysis
Write a program that asks the user to enter the amount that he or she has budgeted 
for a month. A loop should then prompt the user to enter each of his or her expenses 
for the month, and keep a running total. When the loop finishes, the program should 
display the amount that the user is over or under budget.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double budget, expense, totalExpenses = 0.0;

    cout << "Enter the amount you have budgeted for the month: ";
    cin >> budget;

    cout << "Enter your expenses for the month. Enter -1 when finished." << endl;

    do
    {
        cout << "Expense: ";
        cin >> expense;

        if (expense != -1)
        {
            totalExpenses += expense;
        }
    } while (expense != -1);

    cout << fixed << showpoint << setprecision(2);

    if (totalExpenses <= budget)
        cout << "You are " << (budget - totalExpenses) << " under budget." << endl;
    else
        cout << "You are " << (totalExpenses - budget) << " over budget." << endl;

    return 0;
}
