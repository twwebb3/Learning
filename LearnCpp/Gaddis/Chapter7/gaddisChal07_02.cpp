/*  Rainfall Statistics
Write a program that lets the user enter the total rainfall for each of 12 months into an 
array of doubles. The program should calculate and display the total rainfall for the 
year, the average monthly rainfall, and the months with the highest and lowest amounts.

Input Validation: Do not accept negative numbers for monthly rainfall
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 12;
    double rainfall[SIZE];
    double totalRainfall = 0;
    double averageRainfall;
    double highestRainfall;
    double lowestRainfall;
    string highestMonth;
    string lowestMonth;

    cout << "Enter the total rainfall for each of 12 months: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Month " << (i + 1) << ": ";
        cin >> rainfall[i];

        while (rainfall[i] < 0)
        {
            cout << "Rainfall cannot be negative. Please enter a positive number: ";
            cin >> rainfall[i];
        }
    }

    highestRainfall = rainfall[0];
    lowestRainfall = rainfall[0];

    for (int i = 0; i < SIZE; i++)
    {
        totalRainfall += rainfall[i];

        if (rainfall[i] > highestRainfall)
        {
            highestRainfall = rainfall[i];
            highestMonth = "Month " + to_string(i + 1);
        }
        if (rainfall[i] < lowestRainfall)
        {
            lowestRainfall = rainfall[i];
            lowestMonth = "Month " + to_string(i + 1);
        }
    }

    averageRainfall = totalRainfall / SIZE;

    cout << "The total rainfall for the year is: " << totalRainfall << endl;
    cout << "The average monthly rainfall is: " << averageRainfall << endl;
    cout << "The month with the highest rainfall is: " << highestMonth << " with " << highestRainfall << " inches of rain." << endl;
    cout << "The month with the lowest rainfall is: " << lowestMonth << " with " << lowestRainfall << " inches of rain." << endl;

    return 0;
}

