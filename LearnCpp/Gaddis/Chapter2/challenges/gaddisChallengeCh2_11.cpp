/*  Distance per Tank of Gas
A car with a 20-gallon gas tank averages 21.5 miles per gallon
when driven in town and 26.8 MPG when driven on the highway.
Write a program that calculates and displays the distance the
car can travel on one tank of gas when driven in town and when
driven on the highway.

Hint: The following formula can be used to calculate the distance:
Distance = Number of Gallons X Average MPG
*/

#include <iostream>
using namespace std;

int main()
{
	int tankCapacity=20;
	double townMpg=21.5,
		   highwayMpg=26.8,
		   townRange,
		   highwayRange;

	townRange=tankCapacity*townMpg;
	highwayRange=tankCapacity*highwayMpg;

	cout << "Town range: " << townRange << " miles." << endl
		 << "Highway range: " << highwayRange << " miles." << endl;

	return 0;
}

