/*  Payroll Report
Write a program that displays a weekly payroll report. A loop in the program should 
ask the user for the employee number, gross pay, state tax, federal tax, and FICA 
withholdings. The loop will terminate when 0 is entered for the employee number.
After the data is entered, the program should display totals for gross pay, state tax, 
federal tax, FICA withholdings, and net pay.

Input Validation: Do not accept negative numbers for any of the items entered. Do not 
accept values for state, federal, or FICA withholdings that are greater than the gross pay.
If the sum state tax + federal tax + FICA withholdings for any employee is greater than 
gross pay, print an error message and ask the user to re-enter the data for that employee.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings, totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFicaWithholdings = 0, totalNetPay = 0;

    cout << "Enter employee number (0 to quit): ";
    cin >> employeeNumber;

    while (employeeNumber != 0)
    {
        cout << "Enter gross pay: ";
        cin >> grossPay;

        while (grossPay < 0)
        {
            cout << "Please enter a positive number: ";
            cin >> grossPay;
        }

        cout << "Enter state tax: ";
        cin >> stateTax;

        while (stateTax < 0 || stateTax > grossPay)
        {
            cout << "Please enter a positive number less than gross pay: ";
            cin >> stateTax;
        }

        cout << "Enter federal tax: ";
        cin >> federalTax;

        while (federalTax < 0 || federalTax > grossPay)
        {
            cout << "Please enter a positive number less than gross pay: ";
            cin >> federalTax;
        }

        cout << "Enter FICA withholdings: ";
        cin >> ficaWithholdings;

        while (ficaWithholdings < 0 || ficaWithholdings > grossPay)
        {
            cout << "Please enter a positive number less than gross pay: ";
            cin >> ficaWithholdings;
        }

        if (stateTax + federalTax + ficaWithholdings > grossPay)
        {
            cout << "Error: state tax + federal tax + FICA withholdings cannot be greater than gross pay." << endl;
            cout << "Please re-enter data for employee " << employeeNumber << "." << endl;
        }
        else
        {
            cout << "Employee number: " << employeeNumber << endl;
            cout << "Gross pay: " << grossPay << endl;
            cout << "State tax: " << stateTax << endl;
            cout << "Federal tax: " << federalTax << endl;
            cout << "FICA withholdings: " << ficaWithholdings << endl;
            cout << "Net pay: " << grossPay - stateTax - federalTax - ficaWithholdings << endl;

            totalGrossPay += grossPay;
            totalStateTax += stateTax;
            totalFederalTax += federalTax;
            totalFicaWithholdings += ficaWithholdings;
            totalNetPay += grossPay - stateTax - federalTax - ficaWithholdings;

            cout << endl;
            cout << "Enter employee number (0 to quit): ";
            cin >> employeeNumber;

            while (employeeNumber < 0)
            {
                cout << "Please enter a positive integer: ";
                cin >> employeeNumber;
            }

            cout << endl;

            if (employeeNumber == 0)
            {
                cout << "Total gross pay: " << totalGrossPay << endl;
                cout << "Total state tax: " << totalStateTax << endl;
                cout << "Total federal tax: " << totalFederalTax << endl;
                cout << "Total FICA withholdings: " << totalFicaWithholdings << endl;
                cout << "Total net pay: " << totalNetPay << endl;
            }
        }
    }

    return 0;
}
