/*  Day of the Year
Assuming that a year has 365 days, write a class named DayofYear that takes an integer 
representing a day of the year and translates it to a string consisting of the month 
followed by day of the month. For example, 
Day 2 would be January 2.
Day 32 would be February 1.
Day 365 would be December 31.

The constructor for the class should take as parameter an integer representing the day 
of the year, and the class should have a member function print () that prints the day 
in the month-day format. The class should have an integer member variable to represent 
the day, and should have static member variables holding strings that can be used to 
assist in the translation from the integer format to the month-day format.

Test your class by inputting various integers representing days and printing out their 
representation in the month-day format.
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
    return 0;
}