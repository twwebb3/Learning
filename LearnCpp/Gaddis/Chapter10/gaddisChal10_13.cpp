/*  Date Printer
Write a program that reads a string from the user containing a date in the form 
mm/dd/yyyy. It should print the date in the form March 12, 2009.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string date;
    string month;
    string day;
    string year;

    cout << "Enter a date in the form mm/dd/yyyy: ";
    getline(cin, date);

    month = date.substr(0, 2);
    day = date.substr(3, 2);
    year = date.substr(6, 4);

    if (month == "01")
    {
        month = "January";
    }
    else if (month == "02")
    {
        month = "February";
    }
    else if (month == "03")
    {
        month = "March";
    }
    else if (month == "04")
    {
        month = "April";
    }
    else if (month == "05")
    {
        month = "May";
    }
    else if (month == "06")
    {
        month = "June";
    }
    else if (month == "07")
    {
        month = "July";
    }
    else if (month == "08")
    {
        month = "August";
    }
    else if (month == "09")
    {
        month = "September";
    }
    else if (month == "10")
    {
        month = "October";
    }
    else if (month == "11")
    {
        month = "November";
    }
    else if (month == "12")
    {
        month = "December";
    }

    cout << month << " " << day << ", " << year << endl;

    return 0;
}
