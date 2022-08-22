/*  Miles per Gallon
A car holds 12 gallons of gasoline and can travel 350
miles before refueling. Write a program that calculates
the number of miles per gallon the car gets. Display
the result on the screen.

Hint: Use the following formula to calculate MPG:
MPG = Miles Driven / Gallons of Gas Used
*/

#include <iostream>
using namespace std;

int main()
{
	int tankCapacity=12,
		mileRange=350;
	double mpg;

	mpg=mileRange/tankCapacity;

	cout << "The car gets: " << mpg << "MPG." << endl;

	return 0;
}
