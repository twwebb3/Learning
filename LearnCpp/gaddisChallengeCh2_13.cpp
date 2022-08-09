/*  Circuit Board Price
An electronics company sells circuit boards at a 40 percent
profit. Write a program that will calculate the selling
price of a circuit board that coasts $12.67. Display the
result on the screen.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double profitMargin=0.4,
		   cost=12.67,
		   sellingPrice;

	sellingPrice=cost/(1-profitMargin);
	sellingPrice=ceil(sellingPrice*100)/100;

	cout << "The selling price is $" << sellingPrice << endl;

	return 0;
}