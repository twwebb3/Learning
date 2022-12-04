/*  Property Tax
A county collects property taxes on the assessment value
of property, which is 60 percent of the property's actual
value. If an acre of land is valued at $10,000, its
assessment value is $6,000. The property tax is then
$0.64 for each $100 of the assessment value. The tax for
the acre assessed at ^6,000 will be $38.40. Write a
program that asks for the actual value of a piece of
property and displays the assessment value and property tax.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    double actualValue, assessmentValue, propertyTax;
    
    // Get user input
    cout << "Enter the actual value of a piece of property: ";
    cin >> actualValue;
    
    // Calculate assessment value
    assessmentValue = actualValue * 0.6;
    
    // Calculate property tax
    propertyTax = assessmentValue * 0.0064;
    
    // Display report
    cout << "Assessment Value: $" << setw(10) << assessmentValue << endl;
    cout << "Property Tax: $" << setw(16) << propertyTax << endl;
    
    return 0;
}

