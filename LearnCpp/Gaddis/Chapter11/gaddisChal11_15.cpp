/*  Multipurpose Payroll
Write a program that calculates pay for either an hourly paid worker or a salaried 
worker. Hourly paid workers are paid their hourly pay rate times the number of hours 
worked. Salaried workers are paid their regular salary plus any bonus they may 
have earned. The program should declare two structures for the following data:
Hourly Paid:
Hours Worked
HourlyRate
Salaried:
Salary
Bonus
The program should also declare a union with two members. Each member should be 
a structure variable; one for the hourly paid worker and another for the salaried
worker.
The program should ask the user if he or she wants to calculate the pay for an hourly
paid worker or a salaried worker. The program should then accept the appropriate
appropriate members of the union will be used to store the data that will be used to calculate the pay.

Input Validation: Do not accept negative numbers. Do not accept values greater than 80 for Hours Worked.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct HourlyPaid
{
    double hoursWorked;
    double hourlyRate;
};

struct Salaried
{
    double salary;
    double bonus;
};

union Payroll
{
    HourlyPaid hourlyPaid;
    Salaried salaried;
};

int main()
{
    Payroll payroll;
    char choice = ' ';
    double pay = 0;

    cout << "Enter H for hourly paid or S for salaried: ";
    cin >> choice;

    if (choice == 'H' || choice == 'h')
    {
        cout << "Enter the number of hours worked: ";
        cin >> payroll.hourlyPaid.hoursWorked;
        cout << "Enter the hourly rate: ";
        cin >> payroll.hourlyPaid.hourlyRate;

        pay = payroll.hourlyPaid.hoursWorked * payroll.hourlyPaid.hourlyRate;
    }
    else if (choice == 'S' || choice == 's')
    {
        cout << "Enter the salary: ";
        cin >> payroll.salaried.salary;
        cout << "Enter the bonus: ";
        cin >> payroll.salaried.bonus;

        pay = payroll.salaried.salary + payroll.salaried.bonus;
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    cout << "The pay is $" << pay << endl;

    return 0;
}
