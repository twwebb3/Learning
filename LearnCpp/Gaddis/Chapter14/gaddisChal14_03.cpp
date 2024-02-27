/*  Day of the Year Modification
Modify the DayOfYear class, written in Programming Challenge 2, to add a constructor 
that takes two parameters: a string representing a month and an integer in the range 
O through 31 representing the day of the month. The constructor should then 
initialize the integer member of the class to represent the day specified by the month 
and day of month parameters. The constructor should terminate the program with an 
appropriate error message if the number entered for a day is outside the range of 
days for the month given.

Add the following overloaded operators:
++ prefix and postfix increment operators. These operators should modify the
   Dayof Year object so that it represents the next day. If the day is already the end 
   of the year, the new value of the object will represent the first day of the year. 
   
-- prefix and postfix decrement operators. These operators should modify the Dayofyear 
   object so that it represents the previous day. If the day is already the first day 
   of the year, the new value of the object will represent the last day of the
   year.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class DayOfYear
{
private:
    int day;
    static string month[12];
    static int daysInMonth[12];
public:
    DayOfYear(int d)
    {
        day = d;
    }
    DayOfYear(string m, int d)
    {
        int month = 0;
        while (m != DayOfYear::month[month])
        {
            month++;
        }
        if (d < 1 || d > daysInMonth[month])
        {
            cout << "The day must be between 1 and " << daysInMonth[month] << " for " << m << ". Terminating program." << endl;
            exit(0);
        }
        day = d;
    }
    void print()
    {
        int month = 0;
        while (day > daysInMonth[month])
        {
            day -= daysInMonth[month];
            month++;
        }
        cout << DayOfYear::month[month] << " " << day << endl;
    }
    DayOfYear operator++()
    {
        if (day == 365)
        {
            day = 1;
        }
        else
        {
            day++;
        }
        return *this;
    }
    DayOfYear operator++(int)
    {
        DayOfYear temp = *this;
        if (day == 365)
        {
            day = 1;
        }
        else
        {
            day++;
        }
        return temp;
    }
    DayOfYear operator--()
    {
        if (day == 1)
        {
            day = 365;
        }
        else
        {
            day--;
        }
        return *this;
    }
    DayOfYear operator--(int)
    {
        DayOfYear temp = *this;
        if (day == 1)
        {
            day = 365;
        }
        else
        {
            day--;
        }
        return temp;
    }
};

string DayOfYear::month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
int DayOfYear::daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
    int day;
    cout << "Enter a day of the year: ";
    cin >> day;
    while (day < 1 || day > 365)
    {
        cout << "The day must be between 1 and 365. Please enter a day between 1 and 365: ";
        cin >> day;
    }
    DayOfYear dayOfYear(day);
    dayOfYear.print();
    ++dayOfYear;
    dayOfYear.print();
    --dayOfYear;
    dayOfYear.print();
    return 0;
}