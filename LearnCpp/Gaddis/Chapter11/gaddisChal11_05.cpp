/*  Weather Statistics Modification
Motify the program you wrote for Programming Challenge 4 (Weather Statistics) so it defines an enumerated
data type with enumerators for the months (JANUARY, FEBRUARY, etc.). The
program should use the enumerated type to step through the elements of the array.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

enum Month {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER,
            OCTOBER, NOVEMBER, DECEMBER};

struct WeatherData
{
    double totalRainfall;
    double highTemp;
    double lowTemp;
    double averageTemp;
};

void displayWeather(WeatherData);

int main()
{
    WeatherData january = {0, 0, 0, 0};
    WeatherData february = {0, 0, 0, 0};
    WeatherData march = {0, 0, 0, 0};
    WeatherData april = {0, 0, 0, 0};
    WeatherData may = {0, 0, 0, 0};
    WeatherData june = {0, 0, 0, 0};
    WeatherData july = {0, 0, 0, 0};
    WeatherData august = {0, 0, 0, 0};
    WeatherData september = {0, 0, 0, 0};
    WeatherData october = {0, 0, 0, 0};
    WeatherData november = {0, 0, 0, 0};
    WeatherData december = {0, 0, 0, 0};

    WeatherData year[12] = {january, february, march, april, may, june, july, august, september, october, november, december};

    for (int i = 0; i < 12; i++)
    {
        cout << "Enter the total rainfall for month " << i + 1 << ": ";
        cin >> year[i].totalRainfall;
        cout << "Enter the high temperature for month " << i + 1 << ": ";
        cin >> year[i].highTemp;
        cout << "Enter the low temperature for month " << i + 1 << ": ";
        cin >> year[i].lowTemp;
        year[i].averageTemp = (year[i].highTemp + year[i].lowTemp) / 2;
    }

    double totalRainfall = 0;
    double averageMonthlyRainfall = 0;
    double highestTemp = year[0].highTemp;
    double lowestTemp = year[0].lowTemp;
    double averageTemp = 0;
    int highestTempMonth = 0;
    int lowestTempMonth = 0;

    for (int i = 0; i < 12; i++)
    {
        totalRainfall += year[i].totalRainfall;
        averageMonthlyRainfall = totalRainfall / 12;
        averageTemp += year[i].averageTemp;

        if (year[i].highTemp > highestTemp)
        {
            highestTemp = year[i].highTemp;
            highestTempMonth = i;
        }
        if (year[i].lowTemp < lowestTemp)
        {
            lowestTemp = year[i].lowTemp;
            lowestTempMonth = i;
        }
    }

    cout << endl;
    cout << "Total Rainfall: " << totalRainfall << endl;
    cout << "Average Monthly Rainfall: " << averageMonthlyRainfall << endl;
    cout << "Highest Temperature: " << highestTemp << endl;
    cout << "Lowest Temperature: " << lowestTemp << endl;
    cout << endl;

    cout << "Month\t\tTotal Rainfall\t\tHigh Temp\t\tLow Temp\t\tAverage Temp" << endl;
    cout << "-----\t\t--------------\t\t---------\t\t--------\t\t------------" << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << setw(10) << left << i + 1;
        cout << setw(20) << left << year[i].totalRainfall;
        cout << setw(20) << left << year[i].highTemp;
        cout << setw(20) << left << year[i].lowTemp;
        cout << setw(20) << left << year[i].averageTemp;
        cout << endl;
    }

    return 0;
}

void displayWeather(WeatherData month)
{
    cout << "Total Rainfall: " << month.totalRainfall << endl;
    cout << "High Temperature: " << month.highTemp << endl;
    cout << "Low Temperature: " << month.lowTemp << endl;
    cout << "Average Temperature: " << month.averageTemp << endl;
    cout << endl;
}
