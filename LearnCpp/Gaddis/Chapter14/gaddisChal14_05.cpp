/*  Time Off
Note: This assignment assumes you have already completed Programming Challenge 4.

Design a class named Timeoff. The purpose of the class is to track an employee's sick 
leave, vacation, and unpaid time off. It should have, as members, the following instances 
of the NumDays class described in Programming Challenge 4: 

maxSickDays A NumDays object that records the maximum number of days of
            sick leave the employee may take.
sickTaken   A NumDays object that records the number of days of sick leave 
            the employee has already taken.
maxVacation A NumDays object that records the maximum number of days of paid 
            vacation the employee may take.
vacTaken    A NumDays object that records the number of days of paid vacation 
            the employee has already taken.
maxUnpaid   A NumDays object that records the maximum number of days of unpaid 
            vacation the employee may take.
unpaidTaken A NumDays object that records the number of days of unpaid leave 
            the employee has taken.

Additionally, the class should have members for holding the employee's name and 
identification number. It should have an appropriate constructor and member functions 
for storing and retrieving data in any of the member objects.

Input Validation: Company policy states that an employee may not accumulate more than 
240 hours of paid vacation. The class should not allow the maxvacation object to 
store a value greater than this amount.
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
    NumDays sickTaken;
    NumDays maxVacation;
    NumDays vacTaken;
    NumDays maxUnpaid;
    NumDays unpaidTaken;
public:
    TimeOff(string n, int i, double msd, double st, double mv, double vt, double mu, double ut)
    {
        name = n;
        id = i;
        maxSickDays = NumDays(msd);
        sickTaken = NumDays(st);
        maxVacation = NumDays(mv);
        vacTaken = NumDays(vt);
        maxUnpaid = NumDays(mu);
        unpaidTaken = NumDays(ut);
    }
    void setName(string n)
    {
        name = n;
    }
    void setId(int i)
    {
        id = i;
    }
    void setMaxSickDays(double msd)
    {
        maxSickDays.setHours(msd);
    }
    void setSickTaken(double st)
    {
        sickTaken.setHours(st);
    }
    void setMaxVacation(double mv)
    {
        if (mv > 240) {
            cout << "Maximum vacation cannot exceed 240 hours. Setting to 240 hours." << endl;
            mv = 240;
        }
        maxVacation.setHours(mv);
    }
    void setVacTaken(double vt)
    {
        vacTaken.setHours(vt);
    }
    void setMaxUnpaid(double mu)
    {
        maxUnpaid.setHours(mu);
    }
    void setUnpaidTaken(double ut)
    {
        unpaidTaken.setHours(ut);
    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    double getMaxSickDays()
    {
        return maxSickDays.getDays();
    }
    double getSickTaken()
    {
        return sickTaken.getDays();
    }
    double getMaxVacation()
    {
        return maxVacation.getDays();
    }
    double getVacTaken()
    {
        return vacTaken.getDays();
    }
    double getMaxUnpaid()
    {
        return maxUnpaid.getDays();
    }
    double getUnpaidTaken()
    {
        return unpaidTaken.getDays();
    }
};

int main()
{
    TimeOff employee("John Doe", 12345, 80, 40, 160, 80, 40, 40);
    cout << "Employee: " << employee.getName() << endl;
    cout << "ID: " << employee.getId() << endl;
    cout << "Max sick days: " << employee.getMaxSickDays() << endl;
    cout << "Sick days taken: " << employee.getSickTaken() << endl;
    cout << "Max vacation days: " << employee.getMaxVacation() << endl;
    cout << "Vacation days taken: " << employee.getVacTaken() << endl;
    cout << "Max unpaid days: " << employee.getMaxUnpaid() << endl;
    cout << "Unpaid days taken: " << employee.getUnpaidTaken() << endl;
    return 0;
}