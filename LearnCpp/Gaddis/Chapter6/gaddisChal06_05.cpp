/*  Falling Distance
When an object is falling because of gravity, the following formula can be used to 
determine the distance the object falls in a specific time period:
d = 1/2 gt^2
The variables in the formula are as follows: d is the distance in meters,g is 9.8, and t 
is the amount of time, in seconds, that the object has been falling.

Write a function named fallingDistance that accepts an object's falling time (in 
seconds) as an argument. The function should return the distance, in meters, that the 
object has fallen during that time interval. Write a program that demonstrates the 
function by calling it in a loop that passes the values 1 through 10 as arguments, and 
displays the return value.
*/

#include <iostream>
#include <iomanip>

using namespace std;

float fallingDistance(float);

int main()
{
    float distance;

    cout << "Time (s)    Distance (m)" << endl;
    cout << "-----------------------" << endl;

    for (int time = 1; time <= 10; time++)
    {
        distance = fallingDistance(time);
        cout << setw(5) << time << setw(15) << distance << endl;
    }

    return 0;
}

float fallingDistance(float time)
{
    float distance;
    float gravity = 9.8;

    distance = 0.5 * gravity * (time * time);

    return distance;
}