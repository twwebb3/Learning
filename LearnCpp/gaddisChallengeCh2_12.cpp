/*  Land Calculation
One acre of land is equivalent to 43,560 square feet. Write a
program that calculates the number of acres in a tract of land
with 389,767 square feet.
*/

#include <iostream>
using namespace std;

int main()
{
	int acre=43560,
		landTract=389767;
	double totalAcres;

	totalAcres=landTract/acre;

	cout << "The land tract is " << totalAcres << " acres." << endl;

	return 0;
}
