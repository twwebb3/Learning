/*  How Many Calories?
A bag of cookies holds 40 cookies. The calorie information
on the bag claims that there are 10 "servings" in the bag
and that a serving equals 300 calories. Write a program
that asks the user to input how many cookies he or she
actually ate and then reports how many total calories were
consumed.
*/

#include <iostream>

using namespace std;

int main()
{
	int cookiesInBag=40,
		servings=10,
		cookiesPerServing,
		caloriesPerServing=300;

	float caloriesConsumed,
		  cookiesAte;

	cookiesPerServing=cookiesInBag/servings;

	cout << "How many cookies did you eat? ";
	cin >> cookiesAte;

	caloriesConsumed = caloriesPerServing * (cookiesAte/cookiesPerServing);

	cout << "You consumed " << caloriesConsumed << " calories." << endl;

	return 0;
}