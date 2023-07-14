/* Calories Burned
Running on a particular treadmill you burn 3.9 calories per minute. Write a program 
that uses a loop to display the number of calories burned after 10, 15, 20, 25, and 
30 minutes.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double CALORIES_PER_MINUTE = 3.9;
    double totalCalories = 0;

    cout << "Minutes\tCalories Burned" << endl;
    cout << "-----------------------" << endl;

    for (int i = 10; i <= 30; i += 5)
    {
        totalCalories = CALORIES_PER_MINUTE * i;
        cout << i << "\t" << totalCalories << endl;
    }

    return 0;
}
