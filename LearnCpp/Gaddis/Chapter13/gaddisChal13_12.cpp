/*  Payroll
Design a PayRoll class that has data members for an employee's hourly pay rate, 
number of hours worked, and total pay for the week. Write a program with an array 
of seven PayRoll objects. The program should ask the user for the number of hours 
each employee has worked and will then display the amount of gross pay each has
earned.

Input Validation: Do not accept values greater than 60 for the number of hours
worked.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class PayRoll
{
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;
public:
    PayRoll()
    {
        hourlyPayRate = 0;
        hoursWorked = 0;
        totalPay = 0;
    }
    void setHourlyPayRate(double h)
    {
        hourlyPayRate = h;
    }
    void setHoursWorked(double h)
    {
        hoursWorked = h;
    }
    double getTotalPay()
    {
        totalPay = hourlyPayRate * hoursWorked;
        return totalPay;
    }
};

int main()
{
    const int SIZE = 5;
    PayRoll employees[SIZE];
    double hours;
    double payRate;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the number of hours worked by employee " << (i + 1) << ": ";
        cin >> hours;
        while (hours > 60)
        {
            cout << "Hours worked cannot exceed 60. Please enter a valid number of hours: ";
            cin >> hours;
        }
        employees[i].setHoursWorked(hours);

        cout << "Enter the hourly pay rate for employee " << (i + 1) << ": ";
        cin >> payRate;
        employees[i].setHourlyPayRate(payRate);
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Employee " << (i + 1) << " earned $" << employees[i].getTotalPay() << endl;
    }

    return 0;
}
