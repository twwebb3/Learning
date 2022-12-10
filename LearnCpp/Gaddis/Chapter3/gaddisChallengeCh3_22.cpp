/*  Monthly Sales Tax Modification
Modify the program you wrote for programming challenge 12 (Monthly Sales Tax)
so it writes its output to a file instead of the screen.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    // Declare variables
    string month;
    int year;
    float totalSales;
    float stateTax;
    float countyTax;
    float totalTax;
    float totalCollected;

    // Get user input
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;

    // Get the total sales
    cout << "Enter the total sales: ";
    cin >> totalSales;

    // Calculate the state tax
    stateTax = totalSales * 0.04;

    // Calculate the county tax
    countyTax = totalSales * 0.02;

    // Calculate the total tax
    totalTax = stateTax + countyTax;

    // Calculate the total collected
    totalCollected = totalSales + totalTax;

    // Open the file
    ofstream outputFile;
    outputFile.open("salesTax.txt");

    // Write the data to the file
    outputFile << "Total Collected: $" << setw(10) << totalCollected << endl;
    outputFile << "Sales: $" << setw(20) << totalSales << endl;
    outputFile << "County Sales Tax: $" << setw(9) << countyTax << endl;
    outputFile << "State Tax: $" << setw(16) << stateTax << endl;
    outputFile << "Total Tax: $" << setw(16) << totalTax << endl;

    // Close the file
    outputFile.close();

    return 0;
}