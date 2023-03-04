/* Running the Race
Write a program that asks for the names of three runners and the time it took each of
them to finish a race. The program should display who came in first, second, and third
place.

Input Validation: Be sure the names do not overflow the arrays. Only accept positive
numbers for the times.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // create three arrays to hold the names and times
    const int NAMELENGTH = 20;
    char name1[NAMELENGTH], name2[NAMELENGTH], name3[NAMELENGTH];
    double time1, time2, time3;

    // get the names and times
    cout << "Enter the name of the first runner: ";
    cin >> name1;
    cout << "Enter the time for the first runner: ";
    cin >> time1;

    cout << "Enter the name of the second runner: ";
    cin >> name2;
    cout << "Enter the time for the second runner: ";
    cin >> time2;

    cout << "Enter the name of the third runner: ";
    cin >> name3;
    cout << "Enter the time for the third runner: ";
    cin >> time3;

    // print length of char array name1
    cout << "Length of name1: " << strlen(name1) << endl;

    // check that the names do not overflow the arrays
    if (strlen(name1)>NAMELENGTH || strlen(name2)>NAMELENGTH || strlen(name3)>NAMELENGTH)
    {
        cout << "Name overflow" << endl;
    }
    else if (time1 < 0 || time2 < 0 || time3 < 0)
    {
        cout << "Invalid time" << endl;
    }
    else
    {
        // determine the winner
        if (time1 < time2 && time1 < time3)
        {
            cout << "The winner is " << name1 << endl;
            if (time2 < time3)
            {
                cout << "The second place is " << name2 << endl;
                cout << "The third place is " << name3 << endl;
            }
            else
            {
                cout << "The second place is " << name3 << endl;
                cout << "The third place is " << name2 << endl;
            }
        }
        else if (time2 < time1 && time2 < time3)
        {
            cout << "The winner is " << name2 << endl;
            if (time1 < time3)
            {
                cout << "The second place is " << name1 << endl;
                cout << "The third place is " << name3 << endl;
            }
            else
            {
                cout << "The second place is " << name3 << endl;
                cout << "The third place is " << name1 << endl;
            }
        }
        else if (time3 < time1 && time3 < time2)
        {
            cout << "The winner is " << name3 << endl;
            if (time1 < time2)
            {
                cout << "The second place is " << name1 << endl;
                cout << "The third place is " << name2 << endl;
            }
            else
            {
                cout << "The second place is " << name2 << endl;
                cout << "The third place is " << name1 << endl;
            }
        }
    }

    
}