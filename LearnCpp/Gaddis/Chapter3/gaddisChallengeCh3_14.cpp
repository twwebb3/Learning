/*  Senior Citizen Property Tax
Madison County provides a $5,000 homeowner exemption
for its senior citizens. For example, if a senior's
house is valued at $158,000 its assessed value would
be $94,800, as explained above. However, he would
only pay tax on $89,800. At last year's tax rate of
$2.64 for each $100 of assessed value, the property
tax would be $2,370.72. In addition to the tax break,
senior citizens are allowed to pay their property tax
in four equal payments. The quarterly payment due on
this property would be $592.68. Write a program that
asks the user to input the actual value of a piece of
property and the current tax rate for each $100 of
assessed value. The program should then calculate and
report how much annual property tax senior homeowner
will be charged for this property and what the
quarterly tax bill will be.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    double actualValue, currentTax, assessmentValue, propertyTax, seniorPropertyTax, seniorQuarterlyTax;
    
    // Get user input
    cout << "Enter the actual value of a piece of property: ";
    cin >> actualValue;

    cout << "Enter the current tax rate for each $100 of assessed value: ";
    cin >> currentTax;
    currentTax = currentTax / 100;
    
    // Calculate assessment value
    assessmentValue = actualValue * 0.6;
    
    // Calculate senior citizen property tax
    seniorPropertyTax = (assessmentValue - 5000) * currentTax;
    
    // Calculate senior citizen quarterly tax
    seniorQuarterlyTax = seniorPropertyTax / 4;
    
    // Display report
    cout << "Assessment Value: $" << setw(10) << assessmentValue << endl;
    cout << "Senior Citizen Property Tax: $" << setw(10) << seniorPropertyTax << endl;
    cout << "Senior Citizen Quarterly Tax: $" << setw(10) << seniorQuarterlyTax << endl;
    
    return 0;
}

