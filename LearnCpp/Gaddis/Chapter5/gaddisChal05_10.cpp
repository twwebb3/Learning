/*  Average Rainfall
Write a program that uses nested loops to collect data and calculate the average 
rainfall over a period of years. The program should first ask for the number of years. The 
outer loop will iterate once for each year. The inner loop will iterate twelve times, 
once for each month. Each iteration of the inner loop will ask the user for the inches 
of rainfall for that month.

After all iterations, the program should display the number of months, the total 
inches of rainfall, and the average rainfall per month for the entire period.

Input Validation: Do not accept a number less than 1 for the number of years. Do not 
accept negative numbers for the monthly rainfall.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int years, months = 0;
    double rainfall, totalRainfall = 0;

    cout << "How many years? ";
    cin >> years;

    while (years < 1)
    {
        cout << "Please enter a positive integer: ";
        cin >> years;
    }

    for (int i = 1; i <= years; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            cout << "How many inches of rainfall in month " << j << " of year " << i << "? ";
            cin >> rainfall;

            while (rainfall < 0)
            {
                cout << "Please enter a positive integer: ";
                cin >> rainfall;
            }

            totalRainfall += rainfall;
            months++;
        }
    }

    cout << "Number of months: " << months << endl;
    cout << "Total rainfall: " << totalRainfall << endl;
    cout << "Average rainfall per month: " << totalRainfall / months << endl;

    return 0;
}
