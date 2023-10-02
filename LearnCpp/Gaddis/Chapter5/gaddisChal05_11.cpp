/*  Population
Write a program that will predict the size of a population of organisms. The program 
should ask the user for the starting number of organisms, their average daily population 
increase (as a percentage), and the number of days they will multiply. A loop should 
display the size of the population for each day.

Input Validation: Do not accept a number less than 2 for the starting size of the 
population. Do not accept a negative number for average daily population increase. Do 
not accept a number less than 1 for the number of days they will multiply.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int organisms, days;
    double increase;

    cout << "Starting number of organisms: ";
    cin >> organisms;

    while (organisms < 2)
    {
        cout << "Please enter a positive integer greater than 2: ";
        cin >> organisms;
    }

    cout << "Average daily population increase (as a percentage): ";
    cin >> increase;

    while (increase < 0)
    {
        cout << "Please enter a positive number: ";
        cin >> increase;
    }

    cout << "Number of days they will multiply: ";
    cin >> days;

    while (days < 1)
    {
        cout << "Please enter a number of days greater than 2: ";
        cin >> days;
    }

    cout << "Day\tPopulation" << endl;
    cout << "----------------" << endl;

    for (int i = 1; i <= days; i++)
    {
        cout << i << "\t" << organisms << endl;
        organisms += organisms * (increase / 100);
    }

    return 0;
}
