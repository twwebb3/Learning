/*  NumDays Class
Design a class called NunDays. The class's purpose is to store a value that represents a 
number of work hours and convert it to a number of days. For example, 8 hours would be 
converted to 1 day, 12 hours would be converted to 1.5 days, and 18 hours would be 
converted to 2.25 days. The class should have a constructor that accepts a number of 
hours, as well as member functions for storing and retrieving the hours and days. The 
class should also have the following overloaded operators:
+  Addition operator. When two NumDays objects are added together, the overloaded + 
   operator should return the sum of the two objects' hours members.
-  Subtraction operator. When one NumDays object is subtracted from another, 
   the overloaded - operator should return the difference of the two objects'
   hours members.
++ Prefix and postfix increment operators. These operators should increment the 
   number of hours stored in the object. When incremented, the number of days 
   should be automatically recalculated.
ーー Prefix and postfix decrement operators. These operators should decrement the 
    number of hours stored in the object. When decremented, the number of days should 
    be automatically recalculated.
*/

#include <iostream>
#include <iomanip>

using namespace std;


class NumDays
{
private:
    double hours;
    double days;
public:
    NumDays(double h)
    {
        hours = h;
        days = h / 8;
    }
    void setHours(double h)
    {
        hours = h;
        days = h / 8;
    }
    double getHours()
    {
        return hours;
    }
    double getDays()
    {
        return days;
    }
    NumDays operator+(const NumDays &right)
    {
        NumDays temp(0);
        temp.hours = hours + right.hours;
        temp.days = temp.hours / 8;
        return temp;
    }
    NumDays operator-(const NumDays &right)
    {
        NumDays temp(0);
        temp.hours = hours - right.hours;
        temp.days = temp.hours / 8;
        return temp;
    }
    NumDays operator++()
    {
        ++hours;
        days = hours / 8;
        return *this;
    }
    NumDays operator++(int)
    {
        NumDays temp(hours);
        hours++;
        days = hours / 8;
        return temp;
    }
    NumDays operator--()
    {
        --hours;
        days = hours / 8;
        return *this;
    }
    NumDays operator--(int)
    {
        NumDays temp(hours);
        hours--;
        days = hours / 8;
        return temp;
    }
};

int main()
{
    NumDays day1(8);
    NumDays day2(12);
    NumDays day3(18);

    cout << "day1: " << day1.getDays() << " days" << endl;
    cout << "day2: " << day2.getDays() << " days" << endl;
    cout << "day3: " << day3.getDays() << " days" << endl;

    NumDays day4 = day1 + day2;
    cout << "day4: " << day4.getDays() << " days" << endl;

    NumDays day5 = day4 - day3;
    cout << "day5: " << day5.getDays() << " days" << endl;

    NumDays day6 = ++day5;
    cout << "day6: " << day6.getDays() << " days" << endl;

    NumDays day7 = day6++;
    cout << "day7: " << day7.getDays() << " days" << endl;

    NumDays day8 = --day7;
    cout << "day8: " << day8.getDays() << " days" << endl;

    NumDays day9 = day8--;
    cout << "day9: " << day9.getDays() << " days" << endl;

    return 0;
}