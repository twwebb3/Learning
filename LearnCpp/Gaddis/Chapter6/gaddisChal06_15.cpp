/*  Population
In a population, the birth rate is the percentage increase of the population due to 
births and the death rate is the percentage decrease of the population due to deaths.
Write a program that displays the size of a population for any number of years. The 
program should ask for the following data:

• The starting size of a population
• The annual birth rate
• The annual death rate
• The number of years to display

Write a function that calculates the size of the population for a year. The formula is
N= P + BP - DP
where N is the new population size, P is the previous population size, B is the birth 
rate, and D is the death rate.

Input Validation: Do not accept numbers less than 2 for the starting size. Do not 
accept negative numbers for birth rate or death rate. Do not accept numbers less than 
1 for the number of vears.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int getStartingSize();
double getBirthRate();
double getDeathRate();
int getNumYears();
int getNewPopulationSize(int, double, double);
void displayPopulationSize(int, double, double, int);

int main()
{
    int startingSize;
    double birthRate;
    double deathRate;
    int numYears;

    startingSize = getStartingSize();
    birthRate = getBirthRate();
    deathRate = getDeathRate();
    numYears = getNumYears();

    displayPopulationSize(startingSize, birthRate, deathRate, numYears);

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

int getNewPopulationSize(int startingSize, double birthRate, double deathRate)
{
    int newPopulationSize;

    newPopulationSize = startingSize + (startingSize * birthRate / 100) - (startingSize * deathRate / 100);

    return newPopulationSize;
}

void displayPopulationSize(int startingSize, double birthRate, double deathRate, int numYears)
{
    int newPopulationSize;

    cout << "Year\tPopulation Size" << endl;
    cout << "---------------------" << endl;

    for (int i = 1; i <= numYears; i++)
    {
        newPopulationSize = getNewPopulationSize(startingSize, birthRate, deathRate);
        cout << i << "\t" << newPopulationSize << endl;
        startingSize = newPopulationSize;
    }
}
