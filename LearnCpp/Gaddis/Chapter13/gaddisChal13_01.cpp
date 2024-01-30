/*  Date
Design a class called Date. The class should store a date in three integers: month, day, 
and year. There should be member functions to print the date in the following forms:
12/25/09
December 25, 2009
25 December 2009

Demonstrate the class by writing a complete program implementing it.

Input Validation: Do not accept values for the day greater than 31 or less than 1. Do 
not accept values for the month greater than 12 or less than 1.
*/

#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;
public:
    Date(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }
    void print1()
    {
        cout << month << "/" << day << "/" << year << endl;
    }
    void print2()
    {
        string monthName;
        switch (month)
        {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
        }
        cout << monthName << " " << day << ", " << year << endl;
    }
    void print3()
    {
        string monthName;
        switch (month)
        {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
        }
        cout << day << " " << monthName << " " << year << endl;
    }
};

int main()
{
    int month;
    int day;
    int year;

    cout << "Enter the month: ";
    cin >> month;
    if (month < 1 || month > 12)
    {
        cout << "Invalid month." << endl;
        cout << "Enter the month: ";
        cin >> month;
    }

    cout << "Enter the day: ";
    cin >> day;
    if (day < 1 || day > 31)
    {
        cout << "Invalid day." << endl;
        cout << "Enter the day: ";
        cin >> day;
    }

    cout << "Enter the year: ";
    cin >> year;

    Date date(month, day, year);

    date.print1();
    date.print2();
    date.print3();

    return 0;
}