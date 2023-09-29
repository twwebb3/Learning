/*  Distance Traveled
The distance a vehicle travels can be calculated as follows:

distance = speed * time

For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.
Write a program that asks the user for the speed of a vehicle (in miles per hour and 
how many hours it has traveled. The program should then use a loop to display the 
distance the vehicle has traveled for each hour of that time period. Here is an example of the output:

What is the speed of the vehicle in mph? 40
How many hours has it traveled? 3

Hour   Distance Traveled
40             1
80             2
120            3
Input Validation: Do not accept a negative number for speed and do not accept any value 
less than 1 for time traveled.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int speed, time;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    while (speed < 0)
    {
        cout << "Please enter a positive integer: ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> time;

    while (time < 1)
    {
        cout << "Please enter a positive integer: ";
        cin >> time;
    }

    cout << "Hour\tDistance Traveled" << endl;
    cout << "------------------------" << endl;

    for (int i = 1; i <= time; i++)
    {
        cout << setw(3) << i << "\t" << setw(10) << speed * i << endl;
    }

    return 0;
}