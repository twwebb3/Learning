/*  Winning Division
Write a program that determines which of a company's four divisions (Northeast, 
Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should 
include the following two functions, which are called by main.

• double getSales () is passed the name of a division. It asks the user for a division's 
  quarterly sales figure, validates the input, then returns it. It should be calied 
  once for each division.
• void findhighest () is passed the four sales totals. It determines which is the 
largest and prints the name of the high grossing division, along with its sales figure.

Input Validation: Do not accept dollar amounts less than $0.00.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main()
{
    double northeastSales;
    double southeastSales;
    double northwestSales;
    double southwestSales;

    northeastSales = getSales("Northeast");
    southeastSales = getSales("Southeast");
    northwestSales = getSales("Northwest");
    southwestSales = getSales("Southwest");

    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}

double getSales(string divisionName)
{
    double sales;

    cout << "Enter the quarterly sales for the " << divisionName << " division: $";
    cin >> sales;

    while (sales < 0)
    {
        cout << "Sales cannot be negative. Please enter a positive value: $";
        cin >> sales;
    }

    return sales;
}

void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales)
{
    double highestSales = northeastSales;
    string highestSalesDivision = "Northeast";

    if (southeastSales > highestSales)
    {
        highestSales = southeastSales;
        highestSalesDivision = "Southeast";
    }

    if (northwestSales > highestSales)
    {
        highestSales = northwestSales;
        highestSalesDivision = "Northwest";
    }

    if (southwestSales > highestSales)
    {
        highestSales = southwestSales;
        highestSalesDivision = "Southwest";
    }

    cout << fixed << setprecision(2);
    cout << "The " << highestSalesDivision << " division had the highest sales of $" << highestSales << endl;
}