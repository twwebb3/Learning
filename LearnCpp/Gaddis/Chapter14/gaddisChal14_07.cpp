/*  Month Class
Design a class named Month. The class should have the following private members:
• name A string object that holds the name of a month, such as "January,"
  "February," etc.
• monthNumber An integer variable that holds the number of the month. For 
  example, January would be 1, February would be 2, etc. Valid values for 
  this variable are 1 through 12.
In addition, provide the following member functions:
• A default constructor that sets monthNumber to 1 and name to "January."
• A constructor that accepts the name of the month as an argument. It 
  should set name to the value passed as the argument and set monthNumber 
  to the correct value.
• A constructor that accepts the number of the month as an argument. It 
  should set monthNumber to the value passed as the argument and set name 
  to the correct month name.
• Appropriate set and get functions for the name and monthNumber member variables.
• Prefix and postfix overloaded ++ operator functions that increment 
  monthNumber and set name to the name of next month. If monthNumber is set 
  to 12 when these functions execute, they should set monthNumber to 1 and 
  name to "January."
• Prefix and postfix overloaded -- operator functions that decrement monthNumber 
  and set name to the name of previous month. If monthNumber is set to 1 when these 
  functions execute, they should set monthNumber to 12 and name to "December." 
Also, you should overload cout's << operator and cin's > operator to work with the 
Month class. Demonstrate the class in a program.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Month
{
private:
    string name;
    int monthNumber;
public:
    Month()
    {
        monthNumber = 1;
        name = "January";
    }
    Month(string n)
    {
        name = n;
        if (name == "January")
        {
            monthNumber = 1;
        }
        else if (name == "February")
        {
            monthNumber = 2;
        }
        else if (name == "March")
        {
            monthNumber = 3;
        }
        else if (name == "April")
        {
            monthNumber = 4;
        }
        else if (name == "May")
        {
            monthNumber = 5;
        }
        else if (name == "June")
        {
            monthNumber = 6;
        }
        else if (name == "July")
        {
            monthNumber = 7;
        }
        else if (name == "August")
        {
            monthNumber = 8;
        }
        else if (name == "September")
        {
            monthNumber = 9;
        }
        else if (name == "October")
        {
            monthNumber = 10;
        }
        else if (name == "November")
        {
            monthNumber = 11;
        }
        else if (name == "December")
        {
            monthNumber = 12;
        }
    }
    Month(int m)
    {
        monthNumber = m;
        if (monthNumber == 1)
        {
            name = "January";
        }
        else if (monthNumber == 2)
        {
            name = "February";
        }
        else if (monthNumber == 3)
        {
            name = "March";
        }
        else if (monthNumber == 4)
        {
            name = "April";
        }
        else if (monthNumber == 5)
        {
            name = "May";
        }
        else if (monthNumber == 6)
        {
            name = "June";
        }
        else if (monthNumber == 7)
        {
            name = "July";
        }
        else if (monthNumber == 8)
        {
            name = "August";
        }
        else if (monthNumber == 9)
        {
            name = "September";
        }
        else if (monthNumber == 10)
        {
            name = "October";
        }
        else if (monthNumber == 11)
        {
            name = "November";
        }
        else if (monthNumber == 12)
        {
            name = "December";
        }
    }
    void setName(string n)
    {
        name = n;
    }
    void setMonthNumber(int m)
    {
        monthNumber = m;
    }
    string getName()
    {
        return name;
    }
    int getMonthNumber()
    {
        return monthNumber;
    }
    Month operator++()
    {
        if (monthNumber == 12)
        {
            monthNumber = 1;
            name = "January";
        }
        else
        {
            monthNumber++;
            if (monthNumber == 1)
            {
                name = "January";
            }
            else if (monthNumber == 2)
            {
                name = "February";
            }
            else if (monthNumber == 3)
            {
                name = "March";
            }
            else if (monthNumber == 4)
            {
                name = "April";
            }
            else if (monthNumber == 5)
            {
                name = "May";
            }
            else if (monthNumber == 6)
            {
                name = "June";
            }
            else if (monthNumber == 7)
            {
                name = "July";
            }
            else if (monthNumber == 8)
            {
                name = "August";
            }
            else if (monthNumber == 9)
            {
                name = "September";
            }
            else if (monthNumber == 10)
            {
                name = "October";
            }
            else if (monthNumber == 11)
            {
                name = "November";
            }
            else if (monthNumber == 12)
            {
                name = "December";
            }
        }
        return *this;
    }
    Month operator++(int)
    {
        Month temp = *this;
        if (monthNumber == 12)
        {
            monthNumber = 1;
            name = "January";
        }
        else
        {
            monthNumber++;
            if (monthNumber == 1)
            {
                name = "January";
            }
            else if (monthNumber == 2)
            {
                name = "February";
            }
            else if (monthNumber == 3)
            {
                name = "March";
            }
            else if (monthNumber == 4)
            {
                name = "April";
            }
            else if (monthNumber == 5)
            {
                name = "May";
            }
            else if (monthNumber == 6)
            {
                name = "June";
            }
            else if (monthNumber == 7)
            {
                name = "July";
            }
            else if (monthNumber == 8)
            {
                name = "August";
            }
            else if (monthNumber == 9)
            {
                name = "September";
            }
            else if (monthNumber == 10)
            {
                name = "October";
            }
            else if (monthNumber == 11)
            {
                name = "November";
            }
            else if (monthNumber == 12)
            {
                name = "December";
            }
        }
        return temp;
    }
    Month operator--()
    {
        if (monthNumber == 1)
        {
            monthNumber = 12;
            name = "December";
        }
        else
        {
            monthNumber--;
            if (monthNumber == 1)
            {
                name = "January";
            }
            else if (monthNumber == 2)
            {
                name = "February";
            }
            else if (monthNumber == 3)
            {
                name = "March";
            }
            else if (monthNumber == 4)
            {
                name = "April";
            }
            else if (monthNumber == 5)
            {
                name = "May";
            }
            else if (monthNumber == 6)
            {
                name = "June";
            }
            else if (monthNumber == 7)
            {
                name = "July";
            }
            else if (monthNumber == 8)
            {
                name = "August";
            }
            else if (monthNumber == 9)
            {
                name = "September";
            }
            else if (monthNumber == 10)
            {
                name = "October";
            }
            else if (monthNumber == 11)
            {
                name = "November";
            }
            else if (monthNumber == 12)
            {
                name = "December";
            }
        }
        return *this;
    }
    Month operator--(int)
    {
        Month temp = *this;
        if (monthNumber == 1)
        {
            monthNumber = 12;
            name = "December";
        }
        else
        {
            monthNumber--;
            if (monthNumber == 1)
            {
                name = "January";
            }
            else if (monthNumber == 2)
            {
                name = "February";
            }
            else if (monthNumber == 3)
            {
                name = "March";
            }
            else if (monthNumber == 4)
            {
                name = "April";
            }
            else if (monthNumber == 5)
            {
                name = "May";
            }
            else if (monthNumber == 6)
            {
                name = "June";
            }
            else if (monthNumber == 7)
            {
                name = "July";
            }
            else if (monthNumber == 8)
            {
                name = "August";
            }
            else if (monthNumber == 9)
            {
                name = "September";
            }
            else if (monthNumber == 10)
            {
                name = "October";
            }
            else if (monthNumber == 11)
            {
                name = "November";
            }
            else if (monthNumber == 12)
            {
                name = "December";
            }
        }
        return temp;
    }
    friend ostream &operator<<(ostream &strm, const Month &obj);
    friend istream &operator>>(istream &strm, Month &obj);
};

ostream &operator<<(ostream &strm, const Month &obj)
{
    strm << obj.name << " " << obj.monthNumber;
    return strm;
}

istream &operator>>(istream &strm, Month &obj)
{
    cout << "Enter the name of the month: ";
    strm >> obj.name;
    cout << "Enter the number of the month: ";
    strm >> obj.monthNumber;
    return strm;
}

int main()
{
    Month month1;
    Month month2("February");
    Month month3(3);
    Month month4;
    Month month5;
    Month month6;
    Month month7;
    Month month8;
    Month month9;
    Month month10;
    Month month11;
    Month month12;
    cout << "Month 1: " << month1.getName() << " " << month1.getMonthNumber() << endl;
    cout << "Month 2: " << month2.getName() << " " << month2.getMonthNumber() << endl;
    cout << "Month 3: " << month3.getName() << " " << month3.getMonthNumber() << endl;
    cout << "Month 4: " << month4.getName() << " " << month4.getMonthNumber() << endl;
    cout << "Month 5: " << month5.getName() << " " << month5.getMonthNumber() << endl;
    cout << "Month 6: " << month6.getName() << " " << month6.getMonthNumber() << endl;
    cout << "Month 7: " << month7.getName() << " " << month7.getMonthNumber() << endl;
    cout << "Month 8: " << month8.getName() << " " << month8.getMonthNumber() << endl;
    cout << "Month 9: " << month9.getName() << " " << month9.getMonthNumber() << endl;
    cout << "Month 10: " << month10.getName() << " " << month10.getMonthNumber() << endl;
    cout << "Month 11: " << month11.getName() << " " << month11.getMonthNumber() << endl;
    cout << "Month 12: " << month12.getName() << " " << month12.getMonthNumber() << endl;
    cout << "Incrementing month 1" << endl;
    month1++;
    cout << "Month 1: " << month1.getName() << " " << month1.getMonthNumber() << endl;
    cout << "Decrementing month 1" << endl;
    month1--;
    cout << "Month 1: " << month1.getName() << " " << month1.getMonthNumber() << endl;
    cout << "Incrementing month 12" << endl;
    month12++;
    cout << "Month 12: " << month12.getName() << " " << month12.getMonthNumber() << endl;
    cout << "Decrementing month 12" << endl;
    month12--;
    cout << "Month 12: " << month12.getName() << " " << month12.getMonthNumber() << endl;
    cout << "Enter the name and number of a month: ";
    cin >> month1;
    cout << "Month 1: " << month1 << endl;
    return 0;
}