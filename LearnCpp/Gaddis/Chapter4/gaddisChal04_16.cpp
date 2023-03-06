/* Fat Gram Calculator
Write a program that asks for the number of calories and fat grams in a food. The
program should display the percentage of calories that come from fat. If the calories
from fat are less than 30% of the total calories of the food, it should also display a
message indicating that the food is low in fat.

One gram of fat has 9 calories, so
Calories from fat = fat grams * 9

The percentage of calories from fat can be calculated as
Calories from fat : total calories

Input Validation: Make sure the number of calories and fat grams are not less than 0.
Also, the number of calories from fat cannot be greater than the total number of calo-
ries. If that happens, display an error message indicating that either the calories or fat
grams were incorrectly entered.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double calories, fatGrams, fatCalories, percentCalories;

    cout << "Enter the number of calories: ";
    cin >> calories;
    cout << "Enter the number of fat grams: ";
    cin >> fatGrams;

    fatCalories = fatGrams * 9;

    if (calories < 0 || fatGrams < 0)
    {
        cout << "Invalid entry" << endl;
    }
    else if (fatCalories > calories)
    {
        cout << "Invalid entry" << endl;
    }
    else
    {
        percentCalories = fatCalories / calories;
        cout << "The percentage of calories from fat is " << percentCalories << endl;
        if (percentCalories < .30)
        {
            cout << "This food is low in fat" << endl;
        }
    }

    return 0;
}