/*  Pennies for Pay
Write a program that calculates how much a person would earn over a period of time 
if his or her salary is one penny the first day and two pennies the second day, and continues 
to double each day. The program should ask the user for the number of days.
Display a table showing how much the salary was for each day, and then show the 
total pay at the end of the period. The output should be displayed in a dollar amount,
not the number of pennies.

Input Validation: Do not accept a number less than 1 for the number of days worked.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int days;
    double total = 0.0;

    cout << "How many days did you work? ";
    cin >> days;

    while (days < 1)
    {
        cout << "Please enter a positive integer: ";
        cin >> days;
    }

    cout << "Day\tSalary" << endl;
    cout << "----------------" << endl;

    for (int i = 1; i <= days; i++)
    {
        cout << setw(3) << i << "\t" << setw(10) << fixed << setprecision(2) << pow(2, i - 1) / 100 << endl;
        total += pow(2, i - 1) / 100;
    }

    cout << "Total: $" << total << endl;

    return 0;
}
