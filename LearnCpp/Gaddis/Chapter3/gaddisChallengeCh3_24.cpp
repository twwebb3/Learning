/*  Stock Transaction Program
Laast month Joe purchased some stock in Acme Software, Inc. Here are the details of
the purchase:
* The number of shares that Joe purchased was 1,000.
* When Joe purchased the stock, he paid $32.87 per share.
* Joe paid his stock broker a commission that amounted to 2% of the amount he
  paid for the stock.

Two weeks later Joe sold the stock. Here are the details of the sale:
* The number of shares that Joe sold was 1,000.
* He sold the stock for $33.92 per share.
* He paid his stock broker another commission that amounted to 2% of the
  amount he received for the stock.

Write a program that displays the following information:
* The amount of money Joe paid for the stock.
* The amount of commission Joe paid his broker when he bought the stock.
* The amount that Joe sold the stock for.
* The amount of commission Joe paid his broker when he sold the stock.
* Display the amount of profit that Joe made after selling his stock and paying the
  two commissions to his broker. (If the amount of profit that your program dis-
  plays is a negative number, then Joe lost money on the transaction.)

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    int shares = 1000;
    double purchasePrice = 32.87;
    double purchaseCommission = 0.02;
    double salePrice = 33.92;
    double saleCommission = 0.02;
    double purchaseTotal;
    double saleTotal;
    double profit;

    // Calculate the total amount paid for the stock
    purchaseTotal = shares * purchasePrice;

    // Calculate the total amount paid for the stock
    saleTotal = shares * salePrice;

    // Calculate the profit
    profit = (saleTotal - purchaseTotal) - (purchaseTotal * purchaseCommission) - (saleTotal * saleCommission);

    // Display the results
    cout << "Joe paid $" << purchaseTotal << " for the stock." << endl;
    cout << "Joe paid $" << purchaseTotal * purchaseCommission << " in commission when he bought the stock." << endl;
    cout << "Joe sold the stock for $" << saleTotal << endl;
    cout << "Joe paid $" << saleTotal * saleCommission << " in commission when he sold the stock." << endl;
    cout << "Joe made a profit of $" << profit << endl;

    return 0;
}
