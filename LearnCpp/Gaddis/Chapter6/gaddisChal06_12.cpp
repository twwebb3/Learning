/*  Days Out
Write a program that calculates the average number of days a company's employees 
are absent. The program should have the following functions:

• A function called by main that asks the user for the number of employees in the 
  company. This value should be returned as an int. (The function accepts no arguments.)
• A function called by main that accepts one argument: the number of employees in 
  the company. The function should ask the user to enter the number of days each 
  employee missed during the past year. The total of these days should be returned 
  as an int.
• A function called by main that takes two arguments: the number of employees in 
  the company and the total number of days absent for all employees during the 
  year. The function should return, as a double, the average number of days 
  absent. (This function does not perform screen output and does not ask the user 
  for input.)

Input Validation: Do not accept a number less than 1 for the number of employees.
Do not accept a negative number for the days any employee missed.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int getNumEmployees();
int getTotalDaysAbsent(int);
double getAverageDaysAbsent(int, int);

int main()
{
    int numEmployees;
    int totalDaysAbsent;
    double averageDaysAbsent;

    numEmployees = getNumEmployees();
    totalDaysAbsent = getTotalDaysAbsent(numEmployees);
    averageDaysAbsent = getAverageDaysAbsent(numEmployees, totalDaysAbsent);

    cout << fixed << showpoint << setprecision(2);
    cout << "The average number of days absent is " << averageDaysAbsent << endl;

    return 0;
}

int getNumEmployees()
{
    int numEmployees;

    cout << "Enter the number of employees in the company: ";
    cin >> numEmployees;

    while (numEmployees < 1)
    {
        cout << "Number of employees cannot be less than 1. Please enter a positive value: ";
        cin >> numEmployees;
    }

    return numEmployees;
}

int getTotalDaysAbsent(int numEmployees)
{
    int totalDaysAbsent = 0;
    int daysAbsent;

    for (int i = 1; i <= numEmployees; i++)
    {
        cout << "Enter the number of days employee " << i << " missed: ";
        cin >> daysAbsent;

        while (daysAbsent < 0)
        {
            cout << "Number of days absent cannot be negative. Please enter a positive value: ";
            cin >> daysAbsent;
        }

        totalDaysAbsent += daysAbsent;
    }

    return totalDaysAbsent;
}

double getAverageDaysAbsent(int numEmployees, int totalDaysAbsent)
{
    return static_cast<double>(totalDaysAbsent) / numEmployees;
}
