/*  Average Rainfall Modification
Modify the program you wrote for Programming Challenge 4 (Average Rainfall) so it
reads its input from a file instead of the keyboard.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int SIZE=15;
    // Declare variables
    float totalRainfall;
    float averageRainfall;
    float rainfall;
    int numMonths;
    char month[SIZE];

    // Open the file
    ifstream inputFile;
    inputFile.open("rainfall.txt");

    // Read the number of months
    inputFile >> numMonths;

    // Read the rainfall for each month
    for (int i = 0; i < numMonths; i++)
    {
        // Read the month
        inputFile >> month;

        // Read the rainfall
        inputFile >> rainfall;

        // Add the rainfall to the total
        totalRainfall += rainfall;
    }
    //totalRainfall=12;

    // Close the file
    inputFile.close();

    // Calculate the average rainfall
    averageRainfall = totalRainfall / numMonths;

    // Display the average rainfall
    cout << "The average rainfall for " << numMonths << " months is " << averageRainfall << endl;

    return 0;
}
