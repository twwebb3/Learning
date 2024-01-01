/*  Corporate Sales Data
Write a program that uses a structure to store the following data on a company division:
Division Name (such as East, West, North, or South)
First-Quarter Sales 
Second-Quarter Sales 
Third-Quarter Sales 
Fourth-Quarter Sales
Total Annual Sales
Average Quarterly Sales
The program should use four variables of this structure. Each variable should represent
one of the following corporate divisions: East, West, North, and South. The user should
be asked for the four quarters' sales figures for each division. Each division's total and
average sales should be calculated and stored in the appropriate member of each structure
variable. These figures should then be displayed on the screen.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct DivisionData
{
    string name;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

void displayDivision(DivisionData);

int main()
{
    DivisionData east = {"East"};
    DivisionData west = {"West"};
    DivisionData north = {"North"};
    DivisionData south = {"South"};

    cout << "Enter the first quarter sales for the East division: ";
    cin >> east.firstQuarterSales;
    cout << "Enter the second quarter sales for the East division: ";
    cin >> east.secondQuarterSales;
    cout << "Enter the third quarter sales for the East division: ";
    cin >> east.thirdQuarterSales;
    cout << "Enter the fourth quarter sales for the East division: ";
    cin >> east.fourthQuarterSales;

    cout << "Enter the first quarter sales for the West division: ";
    cin >> west.firstQuarterSales;
    cout << "Enter the second quarter sales for the West division: ";
    cin >> west.secondQuarterSales;
    cout << "Enter the third quarter sales for the West division: ";
    cin >> west.thirdQuarterSales;
    cout << "Enter the fourth quarter sales for the West division: ";
    cin >> west.fourthQuarterSales;

    cout << "Enter the first quarter sales for the North division: ";
    cin >> north.firstQuarterSales;
    cout << "Enter the second quarter sales for the North division: ";
    cin >> north.secondQuarterSales;
    cout << "Enter the third quarter sales for the North division: ";
    cin >> north.thirdQuarterSales;
    cout << "Enter the fourth quarter sales for the North division: ";
    cin >> north.fourthQuarterSales;

    cout << "Enter the first quarter sales for the South division: ";
    cin >> south.firstQuarterSales;
    cout << "Enter the second quarter sales for the South division: ";
    cin >> south.secondQuarterSales;
    cout << "Enter the third quarter sales for the South division: ";
    cin >> south.thirdQuarterSales;
    cout << "Enter the fourth quarter sales for the South division: ";
    cin >> south.fourthQuarterSales;

    east.totalAnnualSales = east.firstQuarterSales + east.secondQuarterSales + east.thirdQuarterSales + east.fourthQuarterSales;
    east.averageQuarterlySales = east.totalAnnualSales / 4;

    west.totalAnnualSales = west.firstQuarterSales + west.secondQuarterSales + west.thirdQuarterSales + west.fourthQuarterSales;
    west.averageQuarterlySales = west.totalAnnualSales / 4;

    north.totalAnnualSales = north.firstQuarterSales + north.secondQuarterSales + north.thirdQuarterSales + north.fourthQuarterSales;
    north.averageQuarterlySales = north.totalAnnualSales / 4;

    south.totalAnnualSales = south.firstQuarterSales + south.secondQuarterSales + south.thirdQuarterSales + south.fourthQuarterSales;
    south.averageQuarterlySales = south.totalAnnualSales / 4;

    displayDivision(east);
    displayDivision(west);
    displayDivision(north);
    displayDivision(south);

    return 0;
}

void displayDivision(DivisionData division)
{
    cout << "Division: " << division.name << endl;
    cout << "First Quarter Sales: " << division.firstQuarterSales << endl;
    cout << "Second Quarter Sales: " << division.secondQuarterSales << endl;
    cout << "Third Quarter Sales: " << division.thirdQuarterSales << endl;
    cout << "Fourth Quarter Sales: " << division.fourthQuarterSales << endl;
    cout << "Total Annual Sales: " << division.totalAnnualSales << endl;
    cout << "Average Quarterly Sales: " << division.averageQuarterlySales << endl;
    cout << endl;
}
