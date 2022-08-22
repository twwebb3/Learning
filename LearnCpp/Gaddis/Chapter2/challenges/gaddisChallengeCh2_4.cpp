/*  Restaurant Bill
Write a program that computes the tax and tip on a restaurant
bill for a patron with a $44.50 meal charge. The tax should be
6.75 percent of the meal coast. The tip should be 15 percent
of the total after adding the tax. Display the meal coast, tax
amount, tip amount and total bill on the screen.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float mealCost=44.50,
		  taxRate=0.0675,
		  tipRate=0.15,
		  taxAmount,
		  mealTotal,
		  tipAmount,
		  totalBill;


	taxAmount=ceilf(mealCost*taxRate*100)/100;
	mealTotal=mealCost+taxAmount;
	tipAmount=ceilf(mealTotal*tipRate*100)/100;
	totalBill=mealTotal+tipAmount;

	cout << "Meal Cost: " << mealCost << endl
		 << "Tax Amount: " << taxAmount << endl
		 << "Tip Amount: " << tipAmount << endl
		 << "Total Bill: " << totalBill << endl;


	return 0;
}