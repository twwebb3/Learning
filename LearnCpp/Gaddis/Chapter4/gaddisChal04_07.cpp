/* Time Calculator
Write a program that asks the user to enter a number of seconds.
* There are 60 seconds in a minute. If the number of seconds entered by the user is 
  greater than or equal to 60, the program should display the number of minutes in 
  that many seconds.
* There are 3,600 seconds in an hour. If the number of seconds entered by the user is
  greater than or equal to 3,600, the program should display the number of hours in
  that many seconds.
* There are 86,400 seconds in a day. If the number of seconds entered by the user is
  greater than or equal to 86,400, the program should display the number of days in
  that many seconds. 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int seconds, minutes, hours, days;

    cout << "Enter a number of seconds: ";
    cin >> seconds;

    if (seconds >= 60)
    {
        minutes = seconds / 60;
        cout << "There are " << minutes << " minutes in " << seconds << " seconds" << endl;
    }
    if (seconds >= 3600)
    {
        hours = seconds / 3600;
        cout << "There are " << hours << " hours in " << seconds << " seconds" << endl;
    }
    if (seconds >= 86400)
    {
        days = seconds / 86400;
        cout << "There are " << days << " days in " << seconds << " seconds" << endl;
    }

    return 0;
}
