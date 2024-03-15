/*  Date Class Modification
Modify the Date class in Programming Challenge 1 of Chapter 13. The new version 
should have the following overloaded operators:
++ Prefix and postfix increment operators. These operators should increment the
   object's day member.
-- Prefix and postfix decrement operators. These operators should decrement the
   object's day member.
-  Subtraction operator. If one Date object is subtracted from another, the 
   operator should give the number of days between the two dates. For example, 
   if April 10, 2009 is subtracted from April 18, 2009, the result will be 8. 
<< cout's stream insertion operator. This operator should cause the date to 
   be displayed in the form
   April 18, 2009
>> cin's stream extraction operator. This operator should prompt the user for a
   date to be stored in a Date object.

The class should detect the following conditions and handle them accordingly:
• When a date is set to the last day of the month and incremented, it should become 
  the first day of the following month.
• When a date is set to December 31 and incremented, it should become January 1 of 
  the following year.
• When a day is set to the first day of the month and decremented, it should become 
  the last day of the previous month.
• When a date is set to January 1 and decremented, it should become December 31
  of the previous year.

Demonstrate the class's capabilities in a simple program.

Input Validation: The overloaded » operator should not accept invalid dates. For 
example, the date 13/45/09 should not be
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
    static string monthNames[12];
    static int daysInMonth[12];
public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void print()
    {
        cout << monthNames[month - 1] << " " << day << ", " << year << endl;
    }
    Date operator++()
    {
        if (day == daysInMonth[month - 1])
        {
            day = 1;
            if (month == 12)
            {
                month = 1;
                year++;
            }
            else
            {
                month++;
            }
        }
        else
        {
            day++;
        }
        return *this;
    }
    Date operator++(int)
    {
        Date temp(day, month, year);
        if (day == daysInMonth[month - 1])
        {
            day = 1;
            if (month == 12)
            {
                month = 1;
                year++;
            }
            else
            {
                month++;
            }
        }
        else
        {
            day++;
        }
        return temp;
    }
    Date operator--()
    {
        if (day == 1)
        {
            if (month == 1)
            {
                month = 12;
                year--;
            }
            else
            {
                month--;
            }
            day = daysInMonth[month - 1];
        }
        else
        {
            day--;
        }
        return *this;
    }
    Date operator--(int)
    {
        Date temp(day, month, year);
        if (day == 1)
        {
            if (month == 1)
            {
                month = 12;
                year--;
            }
            else
            {
                month--;
            }
            day = daysInMonth[month - 1];
        }
        else
        {
            day--;
        }
        return temp;
    }
    int operator-(const Date &right)
    {
        int days = 0;
        Date temp(day, month, year);
        while (temp.day != right.day || temp.month != right.month || temp.year != right.year)
        {
            temp--;
            days++;
        }
        return days;
    }
    friend ostream &operator<<(ostream &strm, const Date &obj);
    friend istream &operator>>(istream &strm, Date &obj);
};

string Date::monthNames[12] = {"January", "February", "March", "April", "May", "June", 
                               "July", "August", "September", "October", "November", "December"};
int Date::daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

ostream &operator<<(ostream &strm, const Date &obj)
{
    strm << obj.monthNames[obj.month - 1] << " " << obj.day << ", " << obj.year;
    return strm;
}

istream &operator>>(istream &strm, Date &obj) {
    string month;
    char comma;
    int day, year;

    strm >> month >> day >> comma >> year; // Expecting format like "July 23, 2024"

    // Convert month from string to int
    obj.month = -1; // Initialize with an invalid value to check if month was found
    for (int i = 0; i < 12; i++) {
        if (month == obj.monthNames[i]) {
            obj.month = i + 1;
            break;
        }
    }

    // Check if the month was found
    if (obj.month == -1) {
        cout << "Invalid month entered." << endl;
        strm.setstate(ios::failbit); // Set failbit to indicate failure
    } else {
        obj.day = day;
        obj.year = year;
    }

    return strm;
}


int main()
{
    Date date1(31, 12, 2019);
    Date date2(1, 1, 2020);
    cout << "Date 1: " << date1 << endl;
    cout << "Date 2: " << date2 << endl;
    cout << "Date 2 - Date 1: " << date2 - date1 << " days" << endl;
    cout << "Incrementing Date 1" << endl;
    date1++;
    cout << "Date 1: " << date1 << endl;
    cout << "Decrementing Date 2" << endl;
    date2--;
    cout << "Date 2: " << date2 << endl;
    cout << "Enter a date in the format Month Day, Year: ";
    cin >> date1;
    cout << "You entered: " << date1 << endl;
    return 0;
}
