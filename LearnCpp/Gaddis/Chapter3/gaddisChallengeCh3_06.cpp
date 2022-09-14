/*  How Many Widgets?
The Yukon Widget Company manufactures widgets that
weigh 9.2 poinds each. Write a program that
calculates how many widgets are stacked on a pallet,
based on the total weight of the pallet. The
program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it.
It should then calculate and display the number of
widgets stacked on the pallet.
*/

#include <iostream>

using namespace std;

int main()
{
	float totalWeight,
		  widgetWeight=9.2,
		  widgetCount;

	cout << "How much does the loaded pallet weigh? ";
	cin >> totalWeight;

	widgetCount = totalWeight/widgetWeight; // assume fractions of widgets are stackable

	cout << "There are " << widgetCount << " widgets stacked on the pallet." << endl;

	return 0;
}