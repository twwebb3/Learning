/*  Transient Population
Modify Programming Challenge 13 to also consider the effect on population caused 
by people moving into or out of a geographic area. Given as input a starting 
population size, the annual birth rate, the annual death rate, the number of individuals who 
typically move into the area each year, and the number of individuals who typically 
leave the area each year, the program should project what the population will be 
num-Years from now. You can either prompt the user to input a value for numYears, or 
you can set it within the program

Input Validation: Do not accept numbers less than 2 for the starting size. Do not 
accept negative numbers for birth rate, death rate, arrivals, or departures.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int getStartingSize();
double getBirthRate();
double getDeathRate();
int getArrivals();
int getDepartures();
int getNumYears();
int getNewPopulationSize(int, double, double, int, int);
void displayPopulationSize(int, double, double, int, int, int);

int main()
{
    int startingSize;
    double birthRate;
    double deathRate;
    int arrivals;
    int departures;
    int numYears;

    startingSize = getStartingSize();
    birthRate = getBirthRate();
    deathRate = getDeathRate();
    arrivals = getArrivals();
    departures = getDepartures();
    numYears = getNumYears();

    displayPopulationSize(startingSize, birthRate, deathRate, arrivals, departures, numYears);

    return 0;
}

int getStartingSize()
{
    int startingSize;

    cout << "Enter the starting size of the population: ";
    cin >> startingSize;

    while (startingSize < 2)
    {
        cout << "Starting size cannot be less than 2. Please enter a positive value: ";
        cin >> startingSize;
    }

    return startingSize;
}

double getBirthRate()
{
    double birthRate;

    cout << "Enter the annual birth rate: ";
    cin >> birthRate;

    while (birthRate < 0)
    {
        cout << "Birth rate cannot be negative. Please enter a positive value: ";
        cin >> birthRate;
    }

    return birthRate;
}

double getDeathRate()
{
    double deathRate;

    cout << "Enter the annual death rate: ";
    cin >> deathRate;

    while (deathRate < 0)
    {
        cout << "Death rate cannot be negative. Please enter a positive value: ";
        cin >> deathRate;
    }

    return deathRate;
}

int getArrivals()
{
    double arrivals;

    cout << "Enter the number of arrivals: ";
    cin >> arrivals;

    while (arrivals < 0)
    {
        cout << "Number of arrivals cannot be negative. Please enter a positive value: ";
        cin >> arrivals;
    }

    return arrivals;
}

int getDepartures()
{
    double departures;

    cout << "Enter the number of departures: ";
    cin >> departures;

    while (departures < 0)
    {
        cout << "Number of departures cannot be negative. Please enter a positive value: ";
        cin >> departures;
    }

    return departures;
}

int getNumYears()
{
    int numYears;

    cout << "Enter the number of years to display: ";
    cin >> numYears;

    while (numYears < 1)
    {
        cout << "Number of years cannot be less than 1. Please enter a positive value: ";
        cin >> numYears;
    }

    return numYears;
}

int getNewPopulationSize(int startingSize, double birthRate, double deathRate, int arrivals, int departures)
{
    int newPopulationSize;

    newPopulationSize = startingSize + (startingSize * birthRate / 100) - (startingSize * deathRate / 100) + arrivals - departures;

    return newPopulationSize;
}

void displayPopulationSize(int startingSize, double birthRate, double deathRate, int arrivals, int departures, int numYears)
{
    int newPopulationSize;

    cout << "Year\tPopulation Size" << endl;
    cout << "---------------------" << endl;

    for (int i = 1; i <= numYears; i++)
    {
        newPopulationSize = getNewPopulationSize(startingSize, birthRate, deathRate, arrivals, departures);
        cout << i << "\t" << newPopulationSize << endl;
        startingSize = newPopulationSize;
    }
}
