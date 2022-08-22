// Write a program that defines an integer variable named
// and a float variable named weight. Store your age and
// weight, as literals, in the varibles. The program should
// display these values on the screen in a manner similler
// to the following:
// My age is 26 and my wight is 180 pounds.

#include <iostream>
using namespace std;

int main()
{
	int age;
	float weight;

	age = 30;
	weight = 190;

	cout << "My age is " << age;
	cout << " and my weight is " << weight;
	cout << " pounds." << endl;

	return 0;
}