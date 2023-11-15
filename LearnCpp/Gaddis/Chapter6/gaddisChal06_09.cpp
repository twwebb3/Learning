/*  Present Value
Suppose you want to deposit a certain amount of money into a savings account, and 
then leave it alone to draw interest for the next 10 years. At the end of 10 years you 
would like to have $10,000 in the account. How much do you need to deposit today 
to make that happen? You can use the following formula, which is known as the 
present value formula, to find out:

P = F/((1 + r)^n)

The terms in the formula are as follows:
• P is the present value, or the amount that you need to deposit today.
• F is the future value that you want in the account. (In this case, F is $10,000.)
• r is the annual interest rate.
• n is the number of years that you plan to let the money sit in the account.

Write a program that has a function named present Value that performs this calculation. 
The function should accept the future value, annual interest rate, and number of 
years as arguments. It should return the present value, which is the amount that you 
need to deposit today. Demonstrate the function in a program that lets the user 
experiment with different values for the formula's terms.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float presentValue(float, float, float);

int main()
{
    float futureValue;
    float interestRate;
    float years;
    float present;

    cout << "Enter the future value: ";
    cin >> futureValue;

    cout << "Enter the annual interest rate: ";
    cin >> interestRate;

    cout << "Enter the number of years: ";
    cin >> years;

    present = presentValue(futureValue, interestRate, years);

    cout << fixed << setprecision(2);
    cout << "You need to deposit $" << present << " today." << endl;

    return 0;
}

float presentValue(float futureValue, float interestRate, float years)
{
    float present;

    present = futureValue / pow((1 + interestRate), years);

    return present;
}