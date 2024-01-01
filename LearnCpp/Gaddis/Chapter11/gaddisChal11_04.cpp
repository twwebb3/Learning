/*  Weather Statistics
Write a program that uses a structure to store the following weather data for a partic-
ular month:
Total Rainfall
High Temperature 
Low Temperature
Average Temperature
The program should have an array of 12 structures to hold weather data for an 
entire year. When the program runs, it should ask the user to enter data for each 
month. (The average temperature should be calculated.) Once the data are entered 
for all the months, the program should calculate and display the average monthly 
rainfall, the total rainfall for the year, the highest and lowest temperatures for the 
year (and the months they occurred in), and the average of all the monthly average 
temperatures.

Input Validation: Only accept temperatures within the range between -100 and +140 degrees
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

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

    averageTemp /= 12;

    cout << "Total Rainfall: " << totalRainfall << endl;
    cout << "Average Monthly Rainfall: " << averageMonthlyRainfall << endl;
    cout << "Highest Temperature: " << highestTemp << endl;
    cout << "Lowest Temperature: " << lowestTemp << endl;
    cout << "Average Temperature: " << averageTemp << endl;

    return 0;
}

void displayWeather(WeatherData weather)
{
    cout << "Total Rainfall: " << weather.totalRainfall << endl;
    cout << "High Temperature: " << weather.highTemp << endl;
    cout << "Low Temperature: " << weather.lowTemp << endl;
    cout << "Average Temperature: " << weather.averageTemp << endl;
    cout << endl;
}

