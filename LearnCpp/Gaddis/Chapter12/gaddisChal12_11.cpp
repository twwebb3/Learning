/*  Cororate Sales Data Output
Write a program that uses a structure to store the following data on a company 
division:
Division Name (such as East, West, North, or South)
Quarter (1, 2, 3, or 4)
Quarterly Sales
The user should be asked for the four quarters' sales figures for the East, West, North, and 
South divisions. The data for each quarter for each division should be written to a file.

Input Validation: Do not accept negative numbers for any sales figures.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Division
{
    string name;
    int quarter;
    double sales;
};

int main()
{
    Division east;
    Division west;
    Division north;
    Division south;

    ofstream output("corporateSalesData.txt");

    cout << "Enter the name of the East division: ";
    cin >> east.name;
    cout << "Enter the name of the West division: ";
    cin >> west.name;
    cout << "Enter the name of the North division: ";
    cin >> north.name;
    cout << "Enter the name of the South division: ";
    cin >> south.name;

    cout << "Enter the quarter for the East division: ";
    cin >> east.quarter;
    cout << "Enter the quarter for the West division: ";
    cin >> west.quarter;
    cout << "Enter the quarter for the North division: ";
    cin >> north.quarter;
    cout << "Enter the quarter for the South division: ";
    cin >> south.quarter;

    cout << "Enter the sales for the East division: ";
    cin >> east.sales;
    cout << "Enter the sales for the West division: ";
    cin >> west.sales;
    cout << "Enter the sales for the North division: ";
    cin >> north.sales;
    cout << "Enter the sales for the South division: ";
    cin >> south.sales;

    output << "Division Name: " << east.name << endl;
    output << "Quarter: " << east.quarter << endl;
    output << "Quarterly Sales: " << east.sales << endl;
    output << "Division Name: " << west.name << endl;
    output << "Quarter: " << west.quarter << endl;
    output << "Quarterly Sales: " << west.sales << endl;
    output << "Division Name: " << north.name << endl;
    output << "Quarter: " << north.quarter << endl;
    output << "Quarterly Sales: " << north.sales << endl;
    output << "Division Name: " << south.name << endl;
    output << "Quarter: " << south.quarter << endl;
    output << "Quarterly Sales: " << south.sales << endl;

    output.close();

    return 0;
}