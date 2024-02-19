/*  Mortgage Payment
Design a class that will determine the monthly payment on a home mortgage. The 
monthly payment with interest compounded monthly can be calculated as follows:

Payment = (Loan x (Rate/12) x Term) / (Term - 1)

where

Term = (1 + Rate/12)^(Years x 12)

Payment = the monthly payment
Loan = the dollar amount of the loan
Rate = the annual interest rate
Years = the number of years of the loan

The class should have member functions for setting the loan amount, interest rate, 
and number of years of the loan. It should also have member functions for returning
the monthly payment amount and the total amount paid to the bank at the end of the 
loan period. Implement the class in a complete program.

Imput Validation: Do not accept negative numbers for any of the loan values.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Mortgage
{
private:
    double loan;
    double rate;
    int years;
    double payment;
    double term;
public:
    Mortgage()
    {
        loan = 0;
        rate = 0;
        years = 0;
        payment = 0;
        term = 0;
    }
    void setLoan(double l)
    {
        loan = l;
    }
    void setRate(double r)
    {
        rate = r;
    }
    void setYears(int y)
    {
        years = y;
    }
    double getPayment()
    {
        term = pow((1 + rate / 12), (years * 12));
        payment = (loan * (rate / 12) * term) / (term - 1);
        return payment;
    }
    double getTotalPaid()
    {
        return payment * years * 12;
    }
};

int main()
{
    Mortgage mortgage;
    double loan;
    double rate;
    int years;

    cout << "Enter the loan amount: ";
    cin >> loan;
    while (loan < 0)
    {
        cout << "Loan amount cannot be negative. Please enter a valid loan amount: ";
        cin >> loan;
    }
    mortgage.setLoan(loan);

    cout << "Enter the annual interest rate: ";
    cin >> rate;
    while (rate < 0)
    {
        cout << "Interest rate cannot be negative. Please enter a valid interest rate: ";
        cin >> rate;
    }
    mortgage.setRate(rate);

    cout << "Enter the number of years of the loan: ";
    cin >> years;
    while (years < 0)
    {
        cout << "Years of the loan cannot be negative. Please enter a valid number of years: ";
        cin >> years;
    }
    mortgage.setYears(years);

    cout << fixed << showpoint << setprecision(2);
    cout << "The monthly payment is: $" << mortgage.getPayment() << endl;
    cout << "The total amount paid to the bank at the end of the loan period is: $" << mortgage.getTotalPaid() << endl;

    return 0;
}