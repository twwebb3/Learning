/*  Sales Tax
Write a program that will compute the total sales tax on a
$52 purchase. Assume the state sales tax is 4 percent and 
the county sales tax is 2 percent.
*/

#include <iostream>
using namespace std;

int main()
{
	int purchaseAmount=52;
	float stateSalesTaxRate=0.04, 
		  countySalesTaxRate=0.02, 
		  stateSalesTax,
		  countySalesTax,
		  totalSalesTax;

	stateSalesTax=purchaseAmount*stateSalesTaxRate;
	countySalesTax=purchaseAmount*countySalesTaxRate;
	totalSalesTax=stateSalesTax+countySalesTax;

	cout << "The total tax is: " << totalSalesTax << endl;

	return 0;
}