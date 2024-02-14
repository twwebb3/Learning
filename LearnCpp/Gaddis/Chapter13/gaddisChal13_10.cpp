/*  Population
In a population, the birth rate and death rate are calculated as follows:
Birth Rate = Number of Births ÷ Population 
Death Rate = Number of Deaths ÷ Population
For example, in a population of 100,000 that has 8,000 births and 6,000 deaths per 
year, the birth rate and death rate are:
Birth Rate = 8,000 ÷ 100,000 = 0.08
Death Rate = 6,000 ÷ 100,000 = 0.06
Design a Population class that stores a population, number of births, and number of 
deaths for a period of time. Member functions should return the birth rate and death 
rate. Implement the class in a program.
Input Validation: Do not accept population figures less than 1, or birth or death 
numbers less than 0.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Population
{
private:
    int population;
    int births;
    int deaths;
public:
    Population()
    {
        population = 0;
        births = 0;
        deaths = 0;
    }
    Population(int p, int b, int d)
    {
        population = p;
        births = b;
        deaths = d;
    }
    void setPopulation(int p)
    {
        population = p;
    }
    void setBirths(int b)
    {
        births = b;
    }
    void setDeaths(int d)
    {
        deaths = d;
    }
    double getBirthRate()
    {
        return static_cast<double>(births) / population;
    }
    double getDeathRate()
    {
        return static_cast<double>(deaths) / population;
    }
};

int main()
{
    Population pop;
    int population;
    int births;
    int deaths;

    cout << "Enter the population: ";
    cin >> population;
    while (population < 1)
    {
        cout << "The population cannot be less than 1. Please enter a population greater than 0: ";
        cin >> population;
    }
    pop.setPopulation(population);

    cout << "Enter the number of births: ";
    cin >> births;
    while (births < 0)
    {
        cout << "The number of births cannot be less than 0. Please enter a non-negative number: ";
        cin >> births;
    }
    pop.setBirths(births);

    cout << "Enter the number of deaths: ";
    cin >> deaths;
    while (deaths < 0)
    {
        cout << "The number of deaths cannot be less than 0. Please enter a non-negative number: ";
        cin >> deaths;
    }
    pop.setDeaths(deaths);

    cout << fixed << setprecision(2);
    cout << "The birth rate is " << (pop.getBirthRate() * 100) << "%." << endl;
    cout << "The death rate is " << (pop.getDeathRate() * 100) << "%." << endl;

    return 0;
}
