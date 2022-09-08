/*  Miles per Gallon
Write a program that calculates a car's gas mileage. 
The program shoud ask the user to enter the number
of gallons of gas the car can hold, and the number of
miles it can be driven on a full tank. It should then
display the number of miles that may be driven per
gallon of gas.
*/

#include <iostream>
using namespace std;

int main()
{
	float tankCapacity, tankRange, mpg;

	cout << "How many gallons of gas can the car hold? ";
	cin >> tankCapacity;
	cout << "How many miles can the car be driven on a full tank? ";
	cin >> tankRange;

	mpg = tankRange/tankCapacity;

	cout << "The car gets " << mpg << "MPG." << endl;

	return 0;
}