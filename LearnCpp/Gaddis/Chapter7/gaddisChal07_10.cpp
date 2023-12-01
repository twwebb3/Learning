/*  Payroll
Write a program that uses the following arrays:
• empId: an array of seven long integers to hold employee identification numbers.
  The array should be initialized with the following numbers:
  5658845    4520125    7895122    8777541
  8451277    1302850    7580489
• hours: an array of seven integers to hold the number of hours worked by each employee
• payRate: an array of seven doubles to hold each employee's hourly pay rate
• wages: an array of seven doubles to hold each employee's gross wages

The program should relate the data in each array through the subscripts. For example, 
the number in element 0 of the hours array should be the number of hours 
worked by the employee whose identification number is stored in element 0 of the 
empId array. That same employee's pay rate should be stored in element 0 of the 
payRate array.

The program should display each employee number and ask the user to enter that 
employee's hours and pay rate. It should then calculate the gross wages for that 
employee (hours times pay rate) and store them in the wages array. After the data has 
been entered for all the employees, the program should display each employee's 
identification number and gross wages.

Input Validation: Do not accept negative values for hours or numbers less than 6.00 for pay rate
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 7;
    long empId[SIZE] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
    int hours[SIZE];
    double payRate[SIZE];
    double wages[SIZE];

    cout << "Enter the number of hours worked and the hourly pay rate for each employee: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Employee ID: " << empId[i] << endl;
        cout << "Hours worked: ";
        cin >> hours[i];

        while (hours[i] < 0)
        {
            cout << "Hours cannot be negative. Please enter a positive number: ";
            cin >> hours[i];
        }

        cout << "Hourly pay rate: ";
        cin >> payRate[i];

        while (payRate[i] < 6.00)
        {
            cout << "Pay rate cannot be less than 6.00. Please enter a number greater than 6.00: ";
            cin >> payRate[i];
        }

        wages[i] = hours[i] * payRate[i];
    }

    cout << fixed << setprecision(2);
    cout << "Employee ID" << setw(15) << "Gross Wages" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << empId[i] << setw(15) << wages[i] << endl;
    }

    return 0;
}
