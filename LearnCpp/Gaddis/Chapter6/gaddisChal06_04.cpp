/*  Safest Driving Area
Write a program that determines which of five geographic regions within a major city 
(north, south, east, west, and central) had the fewest reported automobile accidents 
last year. It should have the following two functions, which are called by main.

• int getNumAccidents () is passed the name of a region. It asks the user for the number of automobile accidents reported in that region during the last year, validates the input, then returns it. It should be called once for each city region.
• void findLowest () is passed the five accident totals. It determines which is the smallest and prints the name of the region, along with its accident figure.

Input Validation: Do not accept an accident number that is less than 0.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main()
{
    int northAccidents;
    int southAccidents;
    int eastAccidents;
    int westAccidents;
    int centralAccidents;

    northAccidents = getNumAccidents("North");
    southAccidents = getNumAccidents("South");
    eastAccidents = getNumAccidents("East");
    westAccidents = getNumAccidents("West");
    centralAccidents = getNumAccidents("Central");

    findLowest(northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents);

    return 0;
}


int getNumAccidents(string regionName)
{
    int accidents;

    cout << "Enter the number of automobile accidents reported in the " << regionName << " region last year: ";
    cin >> accidents;

    while (accidents < 0)
    {
        cout << "Number of accidents cannot be negative. Please enter a positive value: ";
        cin >> accidents;
    }

    return accidents;
}


void findLowest(int northAccidents, int southAccidents, int eastAccidents, int westAccidents, int centralAccidents)
{
    int lowestAccidents = northAccidents;
    string lowestAccidentsRegion = "North";

    if (southAccidents < lowestAccidents)
    {
        lowestAccidents = southAccidents;
        lowestAccidentsRegion = "South";
    }

    if (eastAccidents < lowestAccidents)
    {
        lowestAccidents = eastAccidents;
        lowestAccidentsRegion = "East";
    }

    if (westAccidents < lowestAccidents)
    {
        lowestAccidents = westAccidents;
        lowestAccidentsRegion = "West";
    }

    if (centralAccidents < lowestAccidents)
    {
        lowestAccidents = centralAccidents;
        lowestAccidentsRegion = "Central";
    }

    cout << "The " << lowestAccidentsRegion << " region had the fewest reported automobile accidents last year, with " << lowestAccidents << " accidents." << endl;
}