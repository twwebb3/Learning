/*  Kinetic Energy
In physics, an object that is in motion is said to have kinetic energy. The following 
formula can be used to determine a moving object's kinetic energy:

KE = ½ mv^2

The variables in the formula are as follows: KE is the kinetic energy, m is the object's 
mass in kilograms, and v is the object's velocity, in meters per second.

Write a function named kineticEnergy that accepts an object's mass (in kilograms) 
and velocity (in meters per second) as arguments. The function should return the 
amount of kinetic energy that the object has. Demonstrate the function by calling it in 
a program that asks the user to enter values for mass and velocity.
*/

#include <iostream>
#include <iomanip>

using namespace std;

float kineticEnergy(float, float);

int main()
{
    float mass;
    float velocity;
    float energy;

    cout << "Enter the object's mass (kg): ";
    cin >> mass;

    cout << "Enter the object's velocity (m/s): ";
    cin >> velocity;

    energy = kineticEnergy(mass, velocity);

    cout << fixed << setprecision(2);
    cout << "The object's kinetic energy is " << energy << " joules." << endl;

    return 0;
}


float kineticEnergy(float mass, float velocity)
{
    float energy;

    energy = 0.5 * mass * (velocity * velocity);

    return energy;
}
