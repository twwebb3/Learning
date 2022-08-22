/*  Ocean Levels
Assuming the ocean's level is currently rising at about 1.5mm
per year, write a program that displays:

- The number of mm higher than the current level that the
  ocean's level will be in 5 years
- The number of mm higher than the current level that the
  ocean's level will be in 7 years
- The number of mm higher than the current level that the
  ocean's level will be in 10 years
*/

#include <iostream>
using namespace std;

int main()
{
	double riseLevel = 1.5,
		   fiveYearLevel,
		   sevenYearLevel,
		   tenYearLevel;

	fiveYearLevel=riseLevel*5;
	sevenYearLevel=riseLevel*7;
	tenYearLevel=riseLevel*10;

	cout << "The ocean level will be " << fiveYearLevel << "mm higher in 5 years." << endl <<
			"The ocean level will be " << sevenYearLevel << "mm higher in 7 years." << endl <<
			"The ocean level will be " << tenYearLevel << "mm higher in 10 years." << endl;

	return 0;
}