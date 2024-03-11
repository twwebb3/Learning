/*  Personnel Report
NOTE: This assignment assumes you have already completed Programming
Challenges 4 and 5.

Write a program that uses an instance of the Timeoff class you designed in Programming 
Challenge 5. The program should ask the user to enter the number of months an-employee 
has worked for the company. It should then use the Timeoff object to calculate and 
display the employee's maximum number of sick leave and vacation days.
Employees earn 12 hours of vacation leave and & hours of sick leave per month.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class NumDays
{
private:
    double hours;
    double days;
public:
    NumDays() : hours(0), days(0) {}
    
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

class TimeOff
{
private:
    string name;
    int id;
    NumDays maxSickDays;
    NumDays maxVacation;
    NumDays monthsWorked;
public:
    TimeOff(string n, int i, int m)
    {
        name = n;
        id = i;
        monthsWorked = m;
        maxSickDays = m * 8;
        maxVacation = m * 12;
    }
    NumDays getMaxSickDays()
    {
        return maxSickDays;
    }
    NumDays getMaxVacation()
    {
        return maxVacation;
    }
};


int main()
{
    string name;
    int id;
    int months;

    cout << "Enter the employee's name: ";
    getline(cin, name);
    cout << "Enter the employee's ID number: ";
    cin >> id;
    cout << "Enter the number of months the employee has worked for the company: ";
    cin >> months;

    TimeOff employee(name, id, months);

    cout << "The employee has earned " << employee.getMaxSickDays().getDays() << " days of sick leave and " << employee.getMaxVacation().getDays() << " days of vacation." << endl;

    return 0;
}