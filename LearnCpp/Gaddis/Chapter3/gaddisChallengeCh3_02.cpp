/*  Stadium Seating
There are three seating categories at a stadium. For a
softball game, Class A seats cost $15, Class B seats
cost $12, and Class C seats cost $9. Write a program that
asks how many tickets for each class of seats were sold,
then display the amount of income generated from ticket
sales. Format your dollar amount in fixed-point notations,
with two decimal places of precision, and be sure the
decimal point is always dipslayed.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int aPrice=15, 
		aSold,
		bPrice=12,
		bSold,
		cPrice=9,
		cSold,
		income;

	cout << "How many Clas A tickets were sold? ";
	cin >> aSold;	
	cout << "How many Clas B tickets were sold? ";
	cin >> bSold;
	cout << "How many Clas C tickets were sold? ";
	cin >> cSold;

	income = aSold*aPrice + bSold*bPrice + cSold*cPrice;

	income = ceil(income*100)/100;   // need to make sure decimals are always showing 2, does not currently

	cout << "Total Income: " << income << endl;

	return 0;
}
