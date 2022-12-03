/*  Monthly Sales Tax
A retail company must file a monthly sales tax
report listing the sales for the month and the
amount of sales tax collected. Write a program
that asks for the month, the year, and the
total amount collected at the cash register
(that is, sales plus sales tax). Assume the
state sales tax is 4 percent and the country
sales tax is 2 percent.

If the total amount collected is known and the
total sales tax is 6 percent, the amount of
product sales may be calculated as:

S = (T/1.06)

S is the product sales and T is the total
income (product sales plus sales tax).

The program should display a report similar to 
Month: October
--------------------
Total Collected:	$ 26572.89
Sales:				$ 25068.76
County Sales Tax:	$   501.38
State Sales Tax:	$  1002.75
Total Sales Tax:	$  1504.13
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    string month;
    int year;
    double totalCollected, sales, countySalesTax, stateSalesTax, totalSalesTax;
    
    // Get user input
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total amount collected at the cash register: ";
    cin >> totalCollected;
    
    // Calculate sales
    sales = totalCollected / 1.06;
    
    // Calculate sales tax
    countySalesTax = sales * 0.02;
    stateSalesTax = sales * 0.04;
    totalSalesTax = countySalesTax + stateSalesTax;
    
    // Display report
    cout << "Total Collected: $" << setw(10) << totalCollected << endl;
    cout << "Sales: $" << setw(20) << sales << endl;
    cout << "County Sales Tax: $" << setw(15) << countySalesTax << endl;
    cout << "State Sales Tax: $" << setw(16) << stateSalesTax << endl;
    cout << "Total Sales Tax: $" << setw(16) << totalSalesTax << endl;

    return 0;
    
}