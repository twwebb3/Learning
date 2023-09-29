/*  Membership Fees Increase
A country club, which currently charges $2,500 per year for membership, has 
announced it will increase its membership fee by 4% each year for the next six years.
Write a program that uses a loop to display the projected rates for the next six years.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double MEMBERSHIP_FEE = 2500;
    const double INCREASE_RATE = 0.04;
    double totalFee = MEMBERSHIP_FEE;

    cout << "Year\tMembership Fee" << endl;
    cout << "---------------------" << endl;

    for (int i = 1; i <= 6; i++)
    {
        totalFee += totalFee * INCREASE_RATE;
        cout << i << "\t" << totalFee << endl;
    }

    return 0;
}

