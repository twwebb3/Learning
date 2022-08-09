/* Energy Drink Consumption
A soft drink company recently surveyed 12,467 of its customers
and found that approximately 14 percent of those surveyed
purchase one or more energy drinks per week. Of those customers
who purchase energy drinks, approximately 64 percent of them
prefer citrus flavored energy drinks. Write a program that
displays the following:

* The approximate number of customers in the survey who
  purchase one or more energy drinks per week
* The approximate number of customers in the survey who
  perfer citrus flavored energy drinks.
  */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int surveyedCustomers=12476;
	double multiplePurchaseRate=0.14,
		   citrusEnjoyerRate=0.64,
		   multiplePurchasers,
		   citrusEnjoyers;

	multiplePurchasers=ceil(surveyedCustomers*multiplePurchaseRate);
	citrusEnjoyers=ceil(surveyedCustomers*citrusEnjoyerRate);

	cout << "Number of customers that purchase one or more energy drinks per week: " << multiplePurchasers << endl
		 << "Number of customers that prefere citrus flavored energy drinks: " << citrusEnjoyers << endl;

	return 0;
}