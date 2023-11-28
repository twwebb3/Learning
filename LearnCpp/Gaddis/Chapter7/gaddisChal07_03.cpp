/*  Chips and Salsa
Write a program that lets a maker of chips and salsa keep track of sales for five different 
types of salsa: mild, medium, sweet, hot, and zesty. The program should use two 
parallel 5-element arrays: an array of strings that holds the five salsa names and an 
array of integers that holds the number of jars sold during the past month for each 
salsa type. The salsa names should be stored using an initialization list at the time the 
name array is created. The program should prompt the user to enter the number of 
jars sold for each type. Once this sales data has been entered, the program should 
produce a report that displays sales for each salsa type, total sales, and the names of the 
highest selling and lowest selling products.

Input Validation: Do not accept negative values for number of jars
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 5;
    string salsaNames[SIZE] = { "mild", "medium", "sweet", "hot", "zesty" };
    int salsaSales[SIZE];
    int totalSales = 0;
    int highestSales;
    int lowestSales;
    string highestSelling;
    string lowestSelling;

    cout << "Enter the number of jars sold for each type of salsa: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << salsaNames[i] << ": ";
        cin >> salsaSales[i];

        while (salsaSales[i] < 0)
        {
            cout << "Sales cannot be negative. Please enter a positive number: ";
            cin >> salsaSales[i];
        }
    }

    highestSales = salsaSales[0];
    lowestSales = salsaSales[0];

    for (int i = 0; i < SIZE; i++)
    {
        totalSales += salsaSales[i];

        if (salsaSales[i] > highestSales)
        {
            highestSales = salsaSales[i];
            highestSelling = salsaNames[i];
        }
        if (salsaSales[i] < lowestSales)
        {
            lowestSales = salsaSales[i];
            lowestSelling = salsaNames[i];
        }
    }

    cout << "The sales for each type of salsa are: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << salsaNames[i] << ": " << salsaSales[i] << endl;
    }

    cout << "The total sales are: " << totalSales << endl;
    cout << "The highest selling product is: " << highestSelling << endl;
    cout << "The lowest selling product is: " << lowestSelling << endl;

    return 0;
}
