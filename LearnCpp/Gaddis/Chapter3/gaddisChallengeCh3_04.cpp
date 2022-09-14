/*  Average Rainfall
Write a program that calculates the average rainfall for three
months. The program should ask the user to enter the name of
each month, such as June or July, and the amount of rain
(in inches) that fell each month. The program should display a
message similar to the following:

The average rainfall for June, July, and August is 6.72 inches.
*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int SIZE=15;
	char month1Name[SIZE], month2Name[SIZE], month3Name[SIZE];
	float month1Rain, month2Rain, month3Rain, averageRainfall;

	cout << "Name month 1: ";
	cin >> month1Name;
	cout << "How much rain fell in " << month1Name << "?";
	cin >> month1Rain;

	cout << "Name month 2: ";
	cin >> month2Name;
	cout << "How much rain fell in " << month2Name << "?";
	cin >> month2Rain;

	cout << "Name month 3: ";
	cin >> month3Name;
	cout << "How much rain fell in " << month3Name << "?";
	cin >> month3Rain;

	averageRainfall = (month1Rain+month2Rain+month3Rain)/3;

	cout << "The average rainfall for "
		 << month1Name
		 << ", "
		 << month2Name
		 << " and "
		 << month3Name
		 << " is "
		 << averageRainfall
		 << " inches."
		 << endl;

	return 0;
}
