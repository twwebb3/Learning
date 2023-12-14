/*  Rainfall Statistics Modification
Modify the Rainfall Statistics program you wrote for Programming Challenge 2 of 
Chapter 7. The program should display a list of months, sorted in order of rainfall, 
from highest to lowest.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 12;
    double rainfall[SIZE][2];
    double totalRainfall = 0;
    int startScan, minIndex;

    cout << "Enter the total rainfall for each of 12 months: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Month " << (i + 1) << ": ";
        cin >> rainfall[i][0];

        while (rainfall[i][0] < 0)
        {
            cout << "Rainfall cannot be negative. Please enter a positive number: ";
            cin >> rainfall[i][0];
        }

        rainfall[i][1] = i + 1;
    }

    // Sort the array using selection sort
    for (startScan = 0; startScan < (SIZE - 1); startScan++)
    {
        minIndex = startScan;

        for (int index = startScan + 1; index < SIZE; index++)
        {
            if (rainfall[index][0] > rainfall[minIndex][0])
            {
                minIndex = index;
            }
        }

        double minValue = rainfall[minIndex][0];
        double minMonth = rainfall[minIndex][1];

        rainfall[minIndex][0] = rainfall[startScan][0];
        rainfall[minIndex][1] = rainfall[startScan][1];
        rainfall[startScan][0] = minValue;
        rainfall[startScan][1] = minMonth;
    }

    cout << "The months, sorted in order of rainfall, from highest to lowest are: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Month " << rainfall[i][1] << ": " << rainfall[i][0] << endl;
    }
    
    return 0;
}