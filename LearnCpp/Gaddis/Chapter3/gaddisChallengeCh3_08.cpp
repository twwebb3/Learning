/*  How Much Insurance?
Many financial experts advise that property owners
should insure their homes or buildings for at least
80 percent of the amount it would cost to replace
the structure. Write a program that asks the user
to enter the replacement cost of a building and
then displays the minimum amount of insurance he or
she should buy for the property.
*/

#include <iostream>

using namespace std;

int main()
{
	float insurePercent=0.8,
		  replacementCost,
		  minimumInsuranceAmount;

	cout << "What is the replacement cost of your building? ";
	cin >> replacementCost;

	minimumInsuranceAmount = replacementCost*insurePercent;

	cout << "Minimum insurance you should purchase: " << minimumInsuranceAmount << endl;

	return 0;
	
}