/* Mass and Weight
Scientists measure an object's mass in kilograms and its weight in newtons. If you 
know the amount of mass that an object has, you can calculate its weight, in newtons,
with the following formula:

weight = mass x 9.8

Write a program that asks the user to enter an object's amss, and then calculates and 
displays its weight. If the object weighs more than 1,000 newtons, display a message
indicating that it is too heavy. If the object weighs less than 10 newtons, display a
message indicating that the object is too light.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double mass, weight;

    cout << "Enter an object's mass in kilograms: ";
    cin >> mass;

    weight = mass * 9.8;

    if (weight > 1000)
        cout << "The object is too heavy." << endl;
    else if (weight < 10)
        cout << "The object is too light." << endl;
    else
        cout << "The object weighs " << weight << " newtons." << endl;

    return 0;
}