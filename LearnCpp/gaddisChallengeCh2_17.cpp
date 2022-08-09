/*  Stock Commission
Kathryn bought 600 shares of stock at a price of $21.77 per share.
She must pay her stock broker a 2 percent commission for the
transaction. Write a program that calculates and displays the
following:

* The amount paid for the stock alone (w/o commission)
* The amount of the commision
* The total amount paid (for the stock plus the commission)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sharesPurchased=600;
	double stockPrice=21.77,
		   commissionRate=0.02,
		   stockPurchaseWoCommission,
		   commissionAmount,
		   totalPaid;

	stockPurchaseWoCommission=sharesPurchased*stockPrice;
	commissionAmount=ceil(100*stockPurchaseWoCommission*commissionRate)/100;
	totalPaid=stockPurchaseWoCommission+commissionAmount;

	cout << "Amount paid (w/o commission): $" << stockPurchaseWoCommission << endl
		 << "Commission Amount: $" << commissionAmount << endl
		 << "Total Paid: $" << totalPaid << endl;

	return 0;
}