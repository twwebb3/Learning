/* Personal Best
Write a program that asks for the name of a pole vaulter and the dates and vault
heights (in meters) of the athlete's three best vaults. It should then report, in order of
height (best first), the date on which each vault was made and its height.

Input Validation: Only accept values between 2.0 and 5.0 for the heights.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // create arrays to hold the names and times
    const int NAMELENGTH = 20;
    char name[NAMELENGTH];
    double height1, height2, height3;
    // create three arrays to hold dates
    const int DATELENGTH = 10;
    char date1[DATELENGTH], date2[DATELENGTH], date3[DATELENGTH];

    // get the names and times
    cout << "Enter the name of the pole vaulter: ";
    cin >> name;
    cout << "Enter the date for the first vault: ";
    cin >> date1;
    cout << "Enter the height for the first vault: ";
    cin >> height1;

    cout << "Enter the date for the second vault: ";
    cin >> date2;
    cout << "Enter the height for the second vault: ";
    cin >> height2;

    cout << "Enter the date for the third vault: ";
    cin >> date3;
    cout << "Enter the height for the third vault: ";
    cin >> height3;

    cout << date1 << " " << date2 << " " << date3 << endl;

    // check that the names do not overflow the arrays
    if (strlen(name)>NAMELENGTH)
    {
        cout << "Name overflow" << endl;
    }
    else if (height1 < 2.0 || height1 > 5.0 || height2 < 2.0 || height2 > 5.0 || height3 < 2.0 || height3 > 5.0)
    {
        cout << "Invalid height" << endl;
    }
    else
    {
        // determine the winner
        if (height1 > height2 && height1 > height3)
        {
            cout << "The best vault is " << height1 << " meters on " << date1 << endl;
            if (height2 > height3)
            {
                cout << "The second best vault is " << height2 << " meters on " << date2 << endl;
                cout << "The third best vault is " << height3 << " meters on " << date3 << endl;
            }
            else
            {
                cout << "The second best vault is " << height3 << " meters on " << date3 << endl;
                cout << "The third best vault is " << height2 << " meters on " << date2 << endl;
            }
        }
        else if (height2 > height1 && height2 > height3)
        {
            cout << "The best vault is " << height2 << " meters on " << date2 << endl;
            if (height1 > height3)
            {
                cout << "The second best vault is " << height1 << " meters on " << date1 << endl;
                cout << "The third best vault is " << height3 << " meters on " << date3 << endl;
            }
            else
            {
                cout << "The second best vault is " << height3 << " meters on " << date3 << endl;
                cout << "The third best vault is " << height1 << " meters on " << date1 << endl;
            }
        }
        else
        {
            cout << "The best vault is " << height3 << " meters on " << date3 << endl;
            if (height1 > height2)
            {
                cout << "The second best vault is " << height1 << " meters on " << date1 << endl;
                cout << "The third best vault is " << height2 << " meters on " << date2 << endl;
            }
            else
            {
                cout << "The second best vault is " << height2 << " meters on " << date2 << endl;
                cout << "The third best vault is " << height1 << " meters on " << date1 << endl;
            }
        }
    }

    return 0;

}