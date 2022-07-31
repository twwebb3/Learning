/*  Total Purchase
A customer in a store is purchasing five items. The prices
of the five items are:

item 1 = $12.95
item 2 = $24.95
item 3 = $6.95
item 4 = $14.95
item 5 = $3.95

Write a program that holds the prices of the five items in 
five variables. Display each item's price, the subtotal of
the sale, the amount of sales tax, and the total. Assume the
sales tax is 6%.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double item1=12.95,
		   item2=24.95,
		   item3=6.95,
		   item4=14.95,
		   item5=3.95,
		   salesTaxRate=0.06,
		   saleSubtotal,
		   salesTaxAmount,
		   total;

	saleSubtotal=item1+item2+item3+item4+item5;
	salesTaxAmount=ceil(saleSubtotal*salesTaxRate*100)/100;
	total=saleSubtotal+salesTaxAmount;

	cout << "Sale subtotal: " << saleSubtotal << endl
	     << "Sales tax amount: " << salesTaxAmount << endl
	     << "Total: " << total << endl;

	return 0;
}
