/* Ocean Levels
Assuming the ocean's level is currently rising at about 1.5 millimeters per year, 
write a program that displays a table showing the number of millimeters that the 
ocean will have risen each year for the next 25 years.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double RISE_PER_YEAR = 1.5;
    double totalRise = 0;

    cout << "Year\tRise (mm)" << endl;
    cout << "----------------" << endl;

    for (int i = 1; i <= 25; i++)
    {
        totalRise += RISE_PER_YEAR;
        cout << i << "\t" << totalRise << endl;
    }

    return 0;
}
