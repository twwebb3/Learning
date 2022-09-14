/*  Box Office
A movie theater only keeps a percentage of the revenue
earned from ticket sales. The remainder goes to the
movie distributor. Write a program that calculates a
theater's gross and net box office profit for a night.
The program should ask for the name of the movie, and
how many adult and child tickets were sold. (The price
of an adult ticket is $6.00 and a child's ticket is
$3.00.) It should display a report similar to

Movie Name:					"Wheels of Fury"
Adult Tickets Sold:				382
Child Tickets Sold:				127
Gross Box Office Profit:	$ 2673.00
Net Box Office Profit:		$  534.60
Amount Paid to Distributor:	$ 2138.40
*/

#include <iostream>

using namespace std;

int main()
{
	const int SIZE=20;
	char movieName[SIZE];
	int adultSold, childSold;
	float adultPrice=6.00,
		  childPrice=3.00,
		  grossProfit,
		  netProfit,
		  distributorShare=.8,
		  distributorAmount;

	cout << "What is the name of the movie?";
	cin.getline(movieName, SIZE);
	cout << "How many adult tickets were sold?";
	cin >> adultSold;
	cout << "How many child tickets were sold?";
	cin >> childSold;

	grossProfit = adultPrice*adultSold + childPrice*childSold;
	distributorAmount = grossProfit*distributorShare;
	netProfit = grossProfit - distributorAmount;

	cout << "Movie Name: " << movieName << endl
		 << "Adult Tickets Sold: " << adultSold << endl
		 << "Child Tickets Sold: " << childSold << endl
		 << "Gross Box Office Profit: " << grossProfit << endl
		 << "Net Box Office Profit: " << netProfit << endl
		 << "Amount Paid to Distributor: " << distributorAmount << endl;

	return 0;

}