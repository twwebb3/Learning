/*  Paint Job Estimator
A painting company has determined that for every 115 square feet of wall space, one 
gallon of paint and eight hours of labor will be required. The company charges 
$18.00 per hour for labor. Write a modular program that allows the user to enter the 
number of rooms that are to be painted and the price of the paint per gallon. It should 
also ask for the square feet of wall space in each room. It should then display the 
following data:

• The number of gallons of paint required
• The hours of labor required
• The cost of the paint
• The labor charges
• The total cost of the paint job

Input validation: Do not accept a value less than 1 for the number of rooms. Do not 
accept a value less than $10.00 for the price of paint. Do not accept a negative value 
for square footage of wall space.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int getNumRooms();
double getPricePerGallon();
double getSquareFeet(int);
double getGallonsOfPaint(double);
double getHoursOfLabor(double);
double getCostOfPaint(double, double);
double getLaborCharges(double);
double getTotalCost(double, double);

int main()
{
    int numRooms;
    double pricePerGallon;
    double squareFeet;
    double gallonsOfPaint;
    double hoursOfLabor;
    double costOfPaint;
    double laborCharges;
    double totalCost;

    numRooms = getNumRooms();
    pricePerGallon = getPricePerGallon();
    squareFeet = getSquareFeet(numRooms);
    gallonsOfPaint = getGallonsOfPaint(squareFeet);
    hoursOfLabor = getHoursOfLabor(squareFeet);
    costOfPaint = getCostOfPaint(pricePerGallon, gallonsOfPaint);
    laborCharges = getLaborCharges(hoursOfLabor);
    totalCost = getTotalCost(costOfPaint, laborCharges);

    cout << fixed << showpoint << setprecision(2);
    cout << "The number of gallons of paint required is " << gallonsOfPaint << endl;
    cout << "The hours of labor required is " << hoursOfLabor << endl;
    cout << "The cost of the paint is $" << costOfPaint << endl;
    cout << "The labor charges are $" << laborCharges << endl;
    cout << "The total cost of the paint job is $" << totalCost << endl;

    return 0;
}

int getNumRooms()
{
    int numRooms;

    cout << "Enter the number of rooms to be painted: ";
    cin >> numRooms;

    while (numRooms < 1)
    {
        cout << "Number of rooms cannot be less than 1. Please enter a positive value: ";
        cin >> numRooms;
    }

    return numRooms;
}

double getPricePerGallon()
{
    double pricePerGallon;

    cout << "Enter the price per gallon of paint: ";
    cin >> pricePerGallon;

    while (pricePerGallon < 10.00)
    {
        cout << "Price per gallon cannot be less than $10.00. Please enter a value greater than $10.00: ";
        cin >> pricePerGallon;
    }

    return pricePerGallon;
}

double getSquareFeet(int numRooms)
{
    double squareFeet;
    double totalSquareFeet = 0.0;

    for (int i = 1; i <= numRooms; i++)
    {
        cout << "Enter the square feet of wall space in room " << i << ": ";
        cin >> squareFeet;

        while (squareFeet < 0.0)
        {
            cout << "Square feet cannot be less than 0. Please enter a positive value: ";
            cin >> squareFeet;
        }

        totalSquareFeet += squareFeet;
    }

    return totalSquareFeet;
}

double getGallonsOfPaint(double squareFeet)
{
    const double GALLONS_PER_SQUARE_FEET = 1.0 / 115.0;
    double gallonsOfPaint;

    gallonsOfPaint = squareFeet * GALLONS_PER_SQUARE_FEET;

    return gallonsOfPaint;
}

double getHoursOfLabor(double squareFeet)
{
    const double HOURS_PER_SQUARE_FEET = 8.0;
    double hoursOfLabor;

    hoursOfLabor = squareFeet * HOURS_PER_SQUARE_FEET;

    return hoursOfLabor;
}

double getCostOfPaint(double pricePerGallon, double gallonsOfPaint)
{
    double costOfPaint;

    costOfPaint = pricePerGallon * gallonsOfPaint;

    return costOfPaint;
}

double getLaborCharges(double hoursOfLabor)
{
    const double LABOR_CHARGE_PER_HOUR = 18.0;
    double laborCharges;

    laborCharges = hoursOfLabor * LABOR_CHARGE_PER_HOUR;

    return laborCharges;
}

double getTotalCost(double costOfPaint, double laborCharges)
{
    double totalCost;

    totalCost = costOfPaint + laborCharges;

    return totalCost;
}