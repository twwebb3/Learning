/* Long-Distance Calls
A long-distance carrier charges the following rates for telephone calls:
Starting Time of Call   Rate per Minute
00:00-06:59             $0.12
07:00-19:00             $0.55
19:01-23:59             $0.35

Write a program that asks for the starting time and the number of minutes of the call,
and displays the charges. The program should ask for the time to be entered as a floating-
point number in the form HI.MM. For example, 07:00 hours will be entered as
07.00, and 16:28 hours will be entered as 16.28.

Input Validation: The program should not accept times that are greater than 23:59.
Also, no number whose last two digits are greater than 59 should be accepted. Hint:
Assuming num is a floating-point variable, the following expression will give you its
fractional part:
num - static cast<int>(num)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double time, minutes, charges;

    cout << "Enter the starting time of the call: ";
    cin >> time;
    cout << "Enter the number of minutes of the call: ";
    cin >> minutes;

    if (time > 23.59)
    {
        cout << "Invalid time" << endl;
    }
    else if (time - static_cast<int>(time) > .59)
    {
        cout << "Invalid time" << endl;
    }
    else if (time >= 0 && time <= 6.59)
    {
        charges = minutes * .12;
        cout << "The charges for the call are $" << charges << endl;
    }
    else if (time >= 7 && time <= 19)
    {
        charges = minutes * .55;
        cout << "The charges for the call are $" << charges << endl;
    }
    else if (time >= 19.01 && time <= 23.59)
    {
        charges = minutes * .35;
        cout << "The charges for the call are $" << charges << endl;
    }

    return 0;
}
