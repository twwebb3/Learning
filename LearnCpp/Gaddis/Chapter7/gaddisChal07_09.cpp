/*  Quarterly Sales Statistics
Write a program that lets the user enter four quarterly sales figures for six divisions of 
a compary. The figures should be stored in a two-dimensional array. Once the figures 
are entered, the program should display the following data for each quarter:
• A list of the sales figures by division
• Each division's increase or decrease from the previous quarter (This will not be
  displayed for the first quarter.)
• The total sales for the quarter
• The company's increase or decrease from the previous quarter (This will not be 
  displayed for the first quarter.)
• The average sales for all divisions that quarter
• The division with the l desos that qua quater
The program should be modular, with functions that calculate the statistics above.

Input Validation: Do not accept negative numbers for sales figures
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int DIVISIONS = 6;
const int QUARTERS = 4;

void getSales(double[][QUARTERS]);
void showSales(double[][QUARTERS]);
void showIncrease(double[][QUARTERS]);
void showTotalSales(double[][QUARTERS]);
void showAverageSales(double[][QUARTERS]);
void showLowestSales(double[][QUARTERS]);

int main()
{
    double sales[DIVISIONS][QUARTERS];

    getSales(sales);
    showSales(sales);
    showIncrease(sales);
    showTotalSales(sales);
    showAverageSales(sales);
    showLowestSales(sales);

    return 0;
}

void getSales(double sales[][QUARTERS])
{
    cout << "Enter the sales for each division for each quarter: " << endl;
    for (int i = 0; i < DIVISIONS; i++)
    {
        for (int j = 0; j < QUARTERS; j++)
        {
            cout << "Division " << (i + 1) << ", Quarter " << (j + 1) << ": ";
            cin >> sales[i][j];

            while (sales[i][j] < 0)
            {
                cout << "Sales cannot be negative. Please enter a positive number: ";
                cin >> sales[i][j];
            }
        }
    }
}

void showSales(double sales[][QUARTERS])
{
    cout << "The sales for each division for each quarter are: " << endl;
    for (int i = 0; i < DIVISIONS; i++)
    {
        cout << "Division " << (i + 1) << ": ";
        for (int j = 0; j < QUARTERS; j++)
        {
            cout << sales[i][j] << " ";
        }
        cout << endl;
    }
}

void showIncrease(double sales[][QUARTERS])
{
    cout << "The increase or decrease from the previous quarter for each division is: " << endl;
    for (int i = 0; i < DIVISIONS; i++)
    {
        cout << "Division " << (i + 1) << ": ";
        for (int j = 1; j < QUARTERS; j++)
        {
            cout << (sales[i][j] - sales[i][j - 1]) << " ";
        }
        cout << endl;
    }
}

void showTotalSales(double sales[][QUARTERS])
{
    double totalSales = 0;

    cout << "The total sales for each quarter are: " << endl;
    for (int i = 0; i < QUARTERS; i++)
    {
        cout << "Quarter " << (i + 1) << ": ";
        for (int j = 0; j < DIVISIONS; j++)
        {
            totalSales += sales[j][i];
        }
        cout << totalSales << endl;
        totalSales = 0;
    }
}

void showAverageSales(double sales[][QUARTERS])
{
    double totalSales = 0;
    double averageSales;

    cout << "The average sales for each quarter are: " << endl;
    for (int i = 0; i < QUARTERS; i++)
    {
        cout << "Quarter " << (i + 1) << ": ";
        for (int j = 0; j < DIVISIONS; j++)
        {
            totalSales += sales[j][i];
        }
        averageSales = totalSales / DIVISIONS;
        cout << averageSales << endl;
        totalSales = 0;
    }
}

void showLowestSales(double sales[][QUARTERS])
{
    double lowestSales = sales[0][0];
    string lowestDivision;

    for (int i = 0; i < DIVISIONS; i++)
    {
        for (int j = 0; j < QUARTERS; j++)
        {
            if (sales[i][j] < lowestSales)
            {
                lowestSales = sales[i][j];
                lowestDivision = "Division " + to_string(i + 1);
            }
        }
    }

    cout << "The division with the lowest sales is: " << lowestDivision << " with " << lowestSales << " sales." << endl;
}
